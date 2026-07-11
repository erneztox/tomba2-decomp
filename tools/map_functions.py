#!/usr/bin/env python3
"""
Batch mapper: reads Ghidra dumps, assigns descriptive names,
generates mapped .c files and updates symbol_addrs.txt.

Usage:
    python3 tools/map_functions.py

Configure the MAPPINGS dict below with address -> name pairs.
"""

import os
import re
import sys

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

GHIDRA_DUMPS_DIR = os.path.join(PROJECT_ROOT, "src", "main", "ghidra_dumps")
MAPPED_DIR = os.path.join(PROJECT_ROOT, "src", "main", "mapped")
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

# ============================================================
# MAPPINGS: addr (int) -> (descriptive_name, comment_line)
# Add new entries here. The script does the rest.
# ============================================================
MAPPINGS = {
    # -- Texture loading / decompression (critical for sdat2img.py) --
    0x80044E84: ("Texture_LoadPack", "Loads a texture pack: iterates textures, decompresses, uploads to VRAM"),
    0x80044D8C: ("Texture_Decompress", "Texture decompressor: LZ-like with 8-slot ring buffer. Byte format: 5-bit count + 3-bit mode"),
    0x80067DA8: ("Texture_LoadUI", "Loads UI textures to VRAM pages based on game state (3 variants)"),

    # -- Math helpers --
    0x80077FB0: ("Math_Sqrt", "Integer square root via binary search algorithm"),
    0x80085690: ("Math_Atan2", "Arctangent using lookup table at 0x800AA490"),

    # -- GTE helpers --
    0x80085480: ("GTE_LoadRotMatrixFromSVec", "Loads rotation matrix from SVec format into GTE registers"),

    # -- Entity child spawning pipeline --
    0x8007B26C: ("Entity_AllocChildSlot", "Allocates a free slot in the child entity table (0x28 slots of 0x40 bytes)"),
    0x80027144: ("Entity_SpawnChildSequence", "Spawns a sequence of child entities using a count/distribution table"),
    0x800270f8: ("Entity_GetChildCount", "Sums 8 u16 values from child distribution table"),
    0x80027058: ("Entity_InitChildPipeline", "Runs child entity through 4-step init pipeline (position, rotation, scale, finalize)"),
    0x80026D08: ("Entity_InitChildPosition", "Step 1: init child position from data (stride 0x24)"),
    0x80026DD8: ("Entity_InitChildRotation", "Step 2: init child rotation/animation from data (stride 0x2C)"),
    0x80026EB8: ("Entity_InitChildScale", "Step 3: init child scale/size from data (stride 0x24)"),
    0x80026F88: ("Entity_InitChildFinalize", "Step 4: finalize child entity setup (stride 0x28)"),

    # -- Entity animation variants --
    0x80027CB4: ("Entity_ProcessProjCmdNoScale", "GTE projection + animation frame processing without entity[6] scale factor"),

    # -- Entity behaviors (continued) --
    0x8004022C: ("Entity_Behavior_Explosion", "Explosion/particle effect: accelerate, spawn children, dealloc"),
    0x80040390: ("Entity_Behavior_ParticleBurst", "Particle burst: wait for animation flag, spawn children, dealloc"),
    0x80040410: ("Entity_AllocSubEntities", "Allocates multiple sub-entity structures (hitboxes/parts) from table data"),
    0x80040558: ("Entity_Behavior_PlayerController", "Main player/character state machine with 8 entity-type dispatch + 6 sub-states"),
    0x8002918C: ("Entity_Behavior_Wander", "Random wander/patrol with visibility check and timer"),
    0x800292B8: ("Entity_Behavior_AnimPlayer1", "Sprite animation player - variant 1 (selects data table by entity type)"),
    0x800293F4: ("Entity_Behavior_AnimPlayer2", "Sprite animation player - variant 2 (different data tables)"),
    0x80029530: ("Entity_Behavior_Floater", "Floating/orbiting behavior using trig functions and GTE timer"),

    # -- UI / HUD rendering --
    0x8005019C: ("UI_DrawPanel", "9-slice panel/window renderer: draws 4 corner tiles + 5 inner tiles via TILE primitives"),
    0x8004FFB4: ("UI_DrawTile", "Draws a single UI tile primitive (0x2C/0x2E) at given rect position"),
    0x8004EB94: ("UI_DrawText", "Text renderer: iterates string bytes, writes character SPRT tiles to OT"),
    0x8004FD30: ("UI_DrawOverlay", "Screen overlay/fade renderer: draws rectangles and processes render queue items"),

    # -- Item / menu system --
    0x8004A3D4: ("Menu_ItemDispatch", "Item/weapon menu action dispatcher: 32 cases for item selection, texture loading"),
    0x8004C238: ("Entity_Behavior_Collectible", "Collectible/item entity behavior: handles pickup, bounce, score display"),

    # -- Audio system --
    0x80074BF8: ("Audio_SetBank", "Sets active sound bank / BGM track for music switching"),
    0x80075E04: ("Audio_SPUCommand", "Sends raw SPU command with voice parameters (ADSR, pitch, volume)"),

    # -- Entity sprite / animation pointer management --
    0x800286CC: ("Entity_AdvanceSpritePtr", "Advances entity[0x3C] sprite data pointer by 1 byte, checks bit 0x80 terminator"),
    0x80028B70: ("Entity_DrawSpriteRotated", "Renders a rotated sprite using GTE matrix multiply from entity[0x48] transform"),

    # -- Entity physics / collision --
    0x8004766C: ("Entity_PhysicsStep", "Physics/collision step: checks collision, updates entity position from result"),
    0x80048750: ("Entity_PhysicsStepRot", "Physics step with rotation: computes rotation angles from collision data via atan2"),
    0x80047778: ("Entity_CheckCollision", "Main collision detection: checks entity bounds against world geometry"),
    0x80047CBC: ("Collision_GetFloorHeight", "Heightmap/floor collision: looks up ground height from world grid at entity position"),
    0x80048034: ("Collision_ProcessResult", "Processes collision result: extracts surface normal and contact point from hit data"),

    # -- Entity sprite setup --
    0x8004A828: ("Entity_SetupSpriteRender", "Configures sprite rendering flags from type table at 0x800A29CE (8 bytes/entry)"),
    0x8004B374: ("Entity_BlinkControl", "Toggles blink/flash bits on entity[0xD] based on frame counter for transparency effect"),
    0x8004A9A4: ("Entity_InitFromTypeTable", "Initializes entity sprite/bounds from type data table at 0x800A29CC (8 bytes/entry)"),

    # -- Entity init / pool clear --
    0x8007AC14: ("Entity_ClearPool0", "Clears entity memory pool at 0x800E8008 (0x90 bytes) with memset"),
    0x8007AC40: ("Entity_ClearPool1", "Clears entity memory pool at 0x800F2418 (0x20C bytes) with memset"),
    0x8007AC6C: ("Entity_ClearPool2", "Clears entity memory pool at 0x80100660 (0x30 bytes) with memset"),
    0x8007AC98: ("Entity_ClearPool3", "Clears entity memory pool at 0x800ED018 (0x3C bytes) with memset"),
    0x8007AD14: ("Entity_ClearPool4", "Clears entity memory pool at 0x800ED058 (0x40 bytes) with memset"),

    # -- Math (continued) --
    0x8009A450: ("Math_Random", "LCG pseudo-random number generator: seed=seed*0x41c64e6d+0x3039, returns high 16 bits"),
    0x80032A44: ("Math_RandomRange", "Random integer in range [min, max) using LCG generator"),
    0x80032A88: ("Math_RandomChance", "Random probability check: returns random value shifted by N bits (1 in 2^N chance)"),

    # -- Audio wrappers --
    0x80074810: ("Audio_PlaySFX_Vol", "Plays sound effect with volume only (wraps Audio_PlaySoundEffect)"),
    0x8007483C: ("Audio_PlaySFX_VolPan", "Plays sound effect with volume and pan (wraps Audio_PlaySoundEffect)"),

    # -- Script / render helpers --
    0x80043A10: ("Entity_PlayScriptSFX", "Plays SFX from entity script data at entity[0x72-0x76]"),
    0x8004FB20: ("Render_ClearQueue", "Clears render queue buffer at 0x800BF548 (700 bytes) with memset"),
    0x8004EE50: ("UI_ClearElement", "Clears UI element structure (0x8C bytes) with memset, sets terminator bytes"),

    # -- Entity spawn helpers (continued) --
    0x80031558: ("Entity_SpawnTrail", "Spawns trail follower entity with Entity_Behavior_Trail and draw func"),
    0x800315D4: ("Entity_SpawnEffect", "Spawns effect entity with position from spawner, sets entity[0x48]=0x1000100"),

    # -- GTE projection helpers --
    0x800317CC: ("GTE_DepthCheck", "Standalone GTE depth/Z-sort check: RTPS projection + OT z-index calculation"),

    # -- Entity rotated sprite rendering --
    0x800318A0: ("Entity_SubmitRotatedSprite", "Submits rotated sprite to OT: GTE matrix from 3-byte rotation + MVMVA transform"),
    0x80031AC4: ("Entity_SubmitSpriteRotY", "Submits Y-axis rotated sprite: adds GTE rotation on Y before MVMVA"),
    0x80031D24: ("Entity_SubmitSpriteRotZ", "Submits Z-axis rotated sprite: adds GTE rotation on Z before MVMVA"),

    # -- Entity behaviors (continued) --
    0x8002BAFC: ("Entity_Behavior_DustTrail", "Dust trail particles: random velocity/position with 5-segment history buffer"),
    0x8002C3EC: ("Entity_Behavior_AnimState1", "Animation state machine variant 1: switches on entity[7] with GTE transforms"),
    0x8002C548: ("Entity_Behavior_AnimState2", "Animation state machine variant 2: same structure, different GTE setup"),
    0x80030A3C: ("Entity_Behavior_Scripted", "Script-driven entity behavior: reads entity[0x6C] script data, complex state machine"),

    # -- Entity submit / draw --
    0x800262D8: ("Entity_SubmitDraw", "Submits entity draw data via FUN_8007e1b8 with data table lookup"),
    0x80026320: ("Entity_SubmitDraw2", "Submits entity draw data via FUN_8007e6dc with data table lookup"),

    # -- Audio control --
    0x80026470: ("Audio_Mute", "Mutes audio output with SPU command"),
    0x800264BC: ("Audio_ResetChannel", "Resets audio channel: sends mute then re-enable SPU commands"),
    0x80026510: ("Audio_ClearChannel", "Clears audio channel: sends mute SPU command"),

    # -- Screen effects --
    0x8002655C: ("Screen_FadeTransition", "Screen fade in/out transition: 4-phase fade with color ramp"),

    # -- Entity child update --
    0x80026C88: ("Entity_UpdateChildren", "Iterates 0x28 child entity slots, calls each child's update function"),

    # -- Entity particle behaviors --
    0x80027254: ("Entity_Behavior_Particle", "Particle effect entity: random velocity, deceleration, timed life"),
    0x800275D4: ("Entity_Behavior_TrailPt", "5-point trail segment: orbital motion with sine/cosine, visibility check"),
    0x8002A584: ("Entity_Behavior_Sparkle", "Sparkle/dust particles: random positions, follow parent entity with offset"),

    # -- Engine level dispatch --
    0x80022A80: ("Engine_DispatchLevel", "Dispatches level-specific update function from table at 0x8009D1D4 by game state"),
    0x80024CF4: ("Engine_DispatchLevelDraw", "Dispatches level-specific draw function from table at 0x8009D22C by game state"),

    # -- Entity init helpers --
    0x8002311C: ("Entity_CallInit", "Calls entity init function at 0x8001EC3C"),
    0x8002343C: ("Entity_InitSpriteType2", "Sets up sprite config bytes for type 2: state=2, size=2, count=2"),
    0x80023528: ("Entity_InitSpriteType3", "Sets up sprite config bytes for type 3: state=3, size=2, count=11"),
    0x80023548: ("Entity_SpawnIfClear", "Checks spawn collision and spawns entity if space is clear"),
    0x80023764: ("Entity_SetAnimFlag", "Sets entity[0x29]=1 if animation check passes"),
    0x800241FC: ("Entity_CallHandler0", "Wraps entity handler call with flag 0"),
    0x8002421C: ("Entity_CallHandler1", "Wraps entity handler call with flag 1"),
    0x80026100: ("Sys_IncCounter", "Increments global counter at 0x800BF87E with upper limit cap"),

    # -- System / init wrappers --
    0x8001CB00: ("Sys_InitOverlay", "Calls overlay init function at 0x8011534C then internal callback"),
    0x8001CB98: ("Sys_NoOp", "Empty stub function - likely placeholder or unused vtable slot"),
    0x8001CE90: ("Sys_PadRead", "Controller pad read wrapper: calls low-level pad polling function"),
    0x8001CF78: ("Sys_SetFlag10", "Sets bit 4 (0x10) on global system flag at 0x800BE0E4"),
    0x8001CF94: ("Sys_CheckVSync", "Checks GPU VSync/interrupt state and triggers frame sync if needed"),

    # -- System call wrappers (PsyQ / low-level) --
    0x8001CF00: ("Sys_Call", "Generic system call wrapper: passes command packet to kernel at 0x80099490"),
    0x8001DB38: ("Sys_GPUSync", "GPU sync wrapper: calls GPU sync and returns status"),
    0x8002369C: ("Sys_PlaySFX", "Sound effect trigger wrapper: calls Audio_PlaySoundEffect with preset params"),

    # -- Dialogue / text system --
    0x80035738: ("Dialog_CharDispatch", "Dialogue character dispatcher: handles special chars (0x3E-0x68) for text boxes"),

    # -- Inventory / item system --
    0x8004D338: ("Inventory_AddItem", "Adds item to inventory: increments count (max 99), tracks in item tables at 0x800BFAB4"),
    0x8004D714: ("Inventory_SetFlag", "Sets a bit flag in inventory bitfield tables based on item ID and category"),
    0x80040B48: ("Event_TriggerCollectible", "Triggers collectible/event: marks as collected, updates global counters"),

    # -- Entity draw / actions (from Entity_Actions.c, now individual) --
    0x8003CCA4: ("Entity_Draw", "Main entity draw dispatcher: switches on entity[0xD] for draw mode"),
    0x8003CDD8: ("Entity_DrawChildren", "Draws child entities by iterating linked list from entity[0xC0]"),
    0x8003C2D4: ("Entity_Draw3DSprite", "Draws 3D sprite with GTE transform: MVMVA + OT submission"),
    0x8003C464: ("Entity_Draw3DSpriteScaled", "Draws scaled 3D sprite with GTE scale matrix + MVMVA"),
    0x8003C5F8: ("Entity_Draw3DSpriteRotated", "Draws rotated 3D sprite with GTE rotation matrix + MVMVA"),
    0x8003C788: ("Entity_Draw3DSpriteDirect", "Draws 3D sprite directly without GTE: uses screen coordinates"),
    0x8003C8F4: ("Entity_SubmitGTEVertices", "Submits GTE-transformed vertices to OT as textured quad primitive"),

    # -- Entity allocator (from Entity_Allocator.c, now individual) --
    0x80079C3C: ("Entity_AllocPool0", "Allocates entity from pool 0, inserts into doubly-linked list at head/tail/before/after"),
    0x80079DDC: ("Entity_AllocPool1", "Allocates entity from pool 1 with list insertion modes"),
    0x80079F90: ("Entity_AllocPool2", "Allocates entity from pool 2 with list insertion modes"),
    0x8007A12C: ("Entity_AllocPool3", "Allocates entity from pool 3 with list insertion modes"),
    0x8007A2C8: ("Entity_AllocPool4", "Allocates entity from pool 4 with list insertion modes"),
    0x8007A980: ("Entity_AllocByPoolId", "Routes allocation to correct pool (0-4) based on first parameter"),
    0x8007A464: ("Entity_AllocBackground", "Allocates background entity from free list, inserts with mode selection"),
    0x8007A5A8: ("Entity_Activate", "Activates an entity: removes from free list, inserts into active list"),
    0x8007A624: ("Entity_Dealloc", "Deallocates entity: removes from linked list, returns to pool, cleans up sprite"),
    0x8007A810: ("Entity_InitBackgroundPool", "Initializes background entity pool with 4 pre-allocated entities"),
    0x8007A8E0: ("Entity_ClearInputFlags", "Resets engine state buffer and input flags"),
    0x8007A904: ("Entity_UpdateAll", "Iterates all active and inactive entities, calls their update functions"),

    # -- GPU sprite rendering (from gpu_sprite.c, now individual) --
    0x8003D584: ("GPU_ModulateOTColors", "Modulates color values in OT primitives for fade/brightness effects"),
    0x8003D23C: ("GPU_Render3DSprite", "Renders a 3D sprite: sets up GTE, transforms, submits to OT"),

    # -- GPU / CD-ROM --
    0x80081218: ("GPU_LoadImage", "PsyQ LoadImage wrapper: uploads texture data from RAM to VRAM"),
    0x80081278: ("GPU_StoreImage", "PsyQ StoreImage wrapper: downloads VRAM to RAM"),
    0x800812D8: ("GPU_MoveImage", "PsyQ MoveImage wrapper: copies data within VRAM"),
    0x80081560: ("GPU_DrawOTag", "PsyQ DrawOTag wrapper: sends ordering table to GPU for rendering"),
    0x80080FD4: ("GPU_SetupPacket", "Sets up GPU primitive packet header before DMA transfer"),
    0x80080F6C: ("GPU_DrawSync", "Waits for GPU to finish current operation (DrawSync callback)"),
    0x800836B8: ("GPU_LoadImage2", "Alternate LoadImage with timeout handling"),

    # -- CD-ROM --
    0x8008A6EC: ("CD_Sync", "CD-ROM sync: waits for CD drive to complete operation with timeout"),
    0x8008A96C: ("CD_Ready", "CD-ROM ready check: polls CD status with callback processing"),
    0x8008AC34: ("CD_Control", "CD-ROM control command: sends command with parameters, waits for completion"),

    # -- CD-ROM (continued) --
    0x8001CE04: ("CD_ReadRequest", "CD-ROM read request: initiates read with retry loop via FUN_80089ce8/80089b44"),
    0x8001CEB0: ("CD_SeekToSector", "CD-ROM seek: moves laser to specific sector number, retries if needed"),
    0x8001DC40: ("CD_LoadSectors", "Loads CD sectors to RAM: calculates sector count, aligns to 4-byte boundary"),

    # -- Input / controller --
    0x8001CF2C: ("Pad_InitReset", "Controller init/reset: resets pad state, waits for acknowledge from hardware"),

    # -- Overlay loading --
    0x8001D2A8: ("Sys_LoadOverlay", "Loads overlay binary from CD: sets up params, calls CD read + overlay init"),

    # -- Entity interaction --
    0x80023618: ("Entity_CheckInteraction", "Checks if two entities can interact: same type, valid spawn check"),

    # -- Entity list update --
    0x80026368: ("Entity_UpdateList8", "Iterates 8 entity slots at 0x80100400, calls type-specific update function"),

    # -- Game state / pause --
    0x800269BC: ("Game_SetPause", "Sets game pause flag (0x800BF80F = 2), blocks input if already paused"),
    0x800269EC: ("Game_SetUnpause", "Sets unpause request flag (0x800BF80F = 1)"),
    0x800269FC: ("Game_ClearPause", "Clears pause state: resets entity flag and global pause variable"),

    # -- Entity draw (continued) --
    0x800328EC: ("Entity_DrawSpriteNoColor", "Draws sprite without color modulation: sets GTE color to 0, calls submit"),

    # -- Entity script system --
    0x80040A58: ("Entity_GetTypeData", "Reads entity type data from table at 0x800A33C9 (12 bytes/entry, 16 types)"),
    0x80040CDC: ("Entity_InitFromScript", "Initializes entity from script data: sets up callback, flags, and script pointer"),
    0x80040D68: ("Entity_InitScriptFlags", "Sets entity script processing flags from u16: bit 0x1000=flag2, 0x4000=flag4"),
    0x80040FA0: ("Entity_ScriptStep", "Advances entity script by one step: handles state transitions via FUN_80040e54"),
    0x80041098: ("Entity_ScriptRun", "Runs entity script loop: dispatches commands via opcode table at 0x800A3B78"),

    # -- Entity spawn (continued) --
    0x80040AA4: ("Entity_SpawnSubEntity", "Spawns a sub-entity from pool 4 with behavior at 0x8003AD48"),

    # -- Entity movement --
    0x80041194: ("Entity_MoveToward", "Moves entity toward target: physics step with collision, sets angle on success"),
    0x8004130C: ("Entity_CalcAngleToward", "Calculates rotation angle from entity toward target entity"),

    # -- Entity utility --
    0x800412CC: ("Entity_CallCallback", "Calls function pointer stored at entity[0x74] as callback"),

    # -- Entity angle / rotation --
    0x80041378: ("Entity_CalcAngleToTarget", "Calculates angle from entity to its script target at entity[0x72]"),
    0x8004139C: ("Math_ApproachAngle", "Approaches target angle by max step with 12-bit wraparound handling"),
    0x80041438: ("Entity_ApproachAngle", "Wraps Math_ApproachAngle for entity[0x56] rotation field"),

    # -- Entity animation / sprite config --
    0x80041468: ("Entity_AnimScriptStep", "Animation script step: state machine processing entity[0x78] animation events"),
    0x8004162C: ("Entity_SetSubEntityTexture", "Sets texture/tpage for sub-entity by index from entity[0x72] table"),
    0x800416A8: ("Entity_SetSpriteData", "Sets sprite data pointer at entity[0x7C] and texture at entity[0x3C]"),
    0x800416F0: ("Entity_SetSpriteDataAuto", "Auto-configures sprite data from entity[0x72]/[0x74] params"),
    0x80041718: ("Entity_SetAnimMode", "Sets entity animation mode (0=normal, non-0=alternate) with different calls"),
    0x80041768: ("Entity_SetAnimModeIfNew", "Sets anim mode only if different from current entity[0x46] value"),
    0x8004179C: ("Entity_ProcessAnimEvent", "Processes animation events: timing, sub-entity texture cycling"),

    # -- Entity physics / collision helpers --
    0x80041AC0: ("Entity_PhysicsAndAngle", "Runs physics step + stores resulting angle in entity[0x60]"),
    0x800419C4: ("Entity_CheckCollisionAndAngle", "Checks collision at position offset, stores surface angle in entity[0x62]"),

    # -- Entity state / forwarding --
    0x8004190C: ("Entity_SetAnimFlag79", "Sets entity animation flag at entity[0x79] from FUN_80076d68"),
    0x80041FA8: ("Entity_ForwardToParent", "Calls parent entity function at entity[0x10] with same params"),
    0x80041FCC: ("Entity_CheckStateAndSet", "Checks if entity[5] != 3, if so sets entity[5] = 10 and returns 1"),
    0x80041FF8: ("Entity_ForwardStateToParent", "Forwards entity[5] state check to parent entity"),

    # -- Game state flags --
    0x80055824: ("Game_CheckFlagInput", "Checks global input flag at 0x800E7E68 AND with input state"),
    0x80055844: ("Game_CheckFlagSys", "Checks system flag at 0x800ECF54 AND with input state"),
    0x8006EFF4: ("Game_CheckBit", "Checks bit at position in global bitfield at 0x800BFE48"),

    # -- Entity state helpers --
    0x800535D4: ("Entity_GetState176", "Returns entity[0x176] + 1 as state value"),
    0x800645CC: ("Entity_SetStateTo9", "Sets entity sub-state: entity[5]=9, entity[6]=0, entity[7]=0"),
    0x80069AE4: ("Entity_CopyParentPos", "Copies parent entity position (0x2C-0x36) to this entity from 0x800E7F5C"),
    0x80072EFC: ("Entity_CalcAngleDelta", "Calculates angle delta: entity[0x56] = entity[0x5A] - entity[0x50]"),

    # -- Entity data tables --
    0x80051B04: ("Entity_SetSubEntityData", "Sets sub-entity data pointer at entity[0x40] from table at 0x800ECF58"),

    # -- String tables --
    0x80078770: ("String_GetChar", "Gets character from string table at 0x800A4F88 by index and position"),
    0x800787F8: ("String_LookupName", "Looks up name/label string from table at 0x800A2B64 by type index"),

    # -- GPU low-level --
    0x80082370: ("GPU_EncodeTPage", "Encodes texture page parameters: (y<<11)|(x)|0xE5000000 for GPU TPAGE command"),
    0x8008240C: ("GPU_GetStatus", "Returns GPU status register value from 0x800A5AA8"),
    0x80082BF0: ("GPU_SendCommand", "Sends raw 32-bit command to GPU register and stores shadow copy"),
    0x80082C68: ("GPU_InitDrawEnv", "Initializes drawing environment: sets display area, clear color, enable flags"),
    0x80082CB0: ("GPU_SendCommandAndRead", "Sends GPU command with bit 28 set, returns GPU read response"),
    0x80083C30: ("OT_LinkPrimitives", "Links two OT primitives: swaps lower 24 bits of their tag words"),
    0x80083CA0: ("GPU_SetTexPrimHeader", "Sets up textured primitive header: code=9 (TILE), size=0x2C"),
    0x80083CC0: ("GPU_SetTilePrimHeader", "Sets up tile primitive header: code=4 (TILE_1), size=100"),

    # -- Game state flags (continued) --
    0x80078894: ("Game_CheckBit50", "Checks bit in global flag at 0x800BFE50 at given position"),

    # -- System stubs --
    0x80080930: ("Sys_NoOp2", "Empty stub function - likely unused vtable or placeholder slot"),

    # -- Game state / transitions --
    0x80042310: ("Game_ReturnToTitle", "Returns to title screen: plays SFX 0x7F, resets state, calls level cleanup"),
    0x80042728: ("Game_CheckIdle", "Checks if game is idle: no dialogs active (0x800ED06D) and no event flag (0x800BF849)"),
    0x80043B88: ("Game_SetFlag84C", "Sets global flag at 0x800BF84C to boolean value from param"),

    # -- Entity script execution --
    0x8004266C: ("Entity_DoAction", "Performs action from script: calls FUN_800708b4 with entity[0x72] param"),
    0x80043964: ("Entity_ExecScriptCmd1", "Executes script command via FUN_800438d4 with entity[0x72-0x76] params"),
    0x800439A4: ("Entity_ExecScriptCmd2", "Executes script command variant with different data offset"),
    0x800439E4: ("Entity_ExecScriptCmd3", "Executes script command via FUN_800521f4 with entity[0x72-0x76] params"),
    0x80043BB0: ("Entity_SetFlag84C", "Sets global flag at 0x800BF84C from entity script data"),
    0x80043E9C: ("Entity_ExecWithFlag1", "Wraps entity script execution with flag=1 parameter"),

    # -- Collision function wrappers --
    0x8004951C: ("Entity_CollisionWrap1", "Collision wrapper 1: calls FUN_80045b30 with entity[0x56] as angle"),
    0x8004954C: ("Entity_CollisionWrap2", "Collision wrapper 2: calls FUN_80045cac with entity[0x56] as angle"),
    0x8004957C: ("Entity_CollisionWrap3", "Collision wrapper 3: calls FUN_800468ac with entity[0x56] as angle"),
    0x800495AC: ("Entity_CollisionWrap4", "Collision wrapper 4: calls FUN_80046e2c with entity[0x56] as angle"),
    0x800495DC: ("Entity_CollisionWrap5", "Collision wrapper 5: calls FUN_80047468 with entity[0x56] as angle"),

    # -- Score / collectibles --
    0x8004B0D8: ("Entity_SpawnScorePopup", "Spawns score popup entity at current position with SFX 0x28"),
    0x8004B428: ("Entity_SpawnScorePopupEx", "Spawns score popup with SFX + sets global flag at 0x800BF820"),
    0x8004B3F4: ("Game_AddScore", "Adds score points: increments total + shows score popup on screen"),

    # -- Entity color / state --
    0x8004B354: ("Entity_SetColorOverride", "Sets entity[0x18-0x1A] RGB to 0 (normal) or 0xFFFFFF (white flash)"),
    0x8004B4B0: ("Entity_SelectWeapon", "Selects weapon/item by index: calls FUN_8004d4c4 and updates globals"),

    # -- System / IRQ --
    0x80051F80: ("Sys_TriggerIRQ", "Triggers interrupt request: writes code to 0x1F800138, calls 0x80080880"),

    # -- Entity spawn / setup --
    0x800525D0: ("Entity_SpawnWithBehavior", "Spawns entity with behavior at 0x800527C8 and specific entity type"),
    0x80056EC8: ("Entity_SetupBossUI", "Sets up boss HP bar UI: configures 2 sub-entities + spawns indicator"),

    # -- Entity state / flags --
    0x8005344C: ("Entity_CheckEventTrigger", "Checks if specific event (level 4, bit 0x10) should trigger for entity"),
    0x80055284: ("Entity_UpdateAngle", "Updates entity[0x56] angle: conditional wraparound based on entity[0x147] flag"),
    0x800557EC: ("Entity_CheckInputActive", "Checks if entity[0x148] is set OR input state flag is active"),
    0x80055C30: ("Entity_CheckActionTrigger", "Checks if action trigger conditions met: sets sub-state to 0xB"),
    0x80055F48: ("Entity_SetAccel", "Sets entity[0x4A] acceleration from table 0x800A457C based on entity[0x6D]"),
    0x8005749C: ("Entity_ResetStateFlags", "Resets entity state flags: clears 0x29/0x58/0x6A/0x144-0x178, advances state"),
    0x80058F24: ("Entity_StateTransition", "Transitions entity to state 3 with 60-frame timer, clears global flag"),

    # -- Camera system --
    0x8006CBA8: ("Camera_SetPosition", "Sets camera world position from entity coordinates (x, y, z)"),
    0x8006CBD0: ("Camera_SetTarget", "Sets camera look-at target and rotation vectors from 6-short array"),
    0x8006D934: ("Camera_SetFOV", "Sets camera field of view from param array"),
    0x8006D950: ("Camera_SetRoll", "Sets camera roll angle from 4-byte data"),
    0x8006E360: ("Camera_UpdateFull", "Full camera update: runs init, set position, target, FOV, and roll"),

    # -- Engine dispatch (continued) --
    0x8006C77C: ("Engine_DispatchInit", "Level-specific init dispatch from function table at 0x800A4AF8"),
    0x8006C7C4: ("Engine_DispatchInit2", "Second level init dispatch from function table at 0x800A4B50"),

    # -- Entity init / config --
    0x8006AC7C: ("Entity_InitFromTable", "Initializes entity from data table at 0x800A4A94 indexed by param"),
    0x8006AFC4: ("Entity_SyncToParent", "Syncs entity position to parent if parent is in state 1"),
    0x8006C59C: ("Entity_InitBehaviorConfig", "Configures entity behavior: sets sprite bounds, draw func, and state to 1"),

    # -- Audio (continued) --
    0x80074EEC: ("Audio_ResetSystem", "Resets audio system: clears flag 0x800BE22A, calls reset if channels active"),
    0x80075070: ("Audio_SetChannelConfig", "Configures audio channel: sets flag 0x800BE22B, stores channel param, calls 0x80075CEC"),
    0x800750A4: ("Audio_SetChannelConfig2", "Audio channel config variant: calls 0x800750D8 with flag=1"),

    # -- CD-ROM (continued) --
    0x800753AC: ("CD_LoadToRAM", "Loads CD sector data to RAM address from 0x800BE108 + offset"),

    # -- Entity animation loading --
    0x80077B38: ("Entity_LoadAnimData", "Loads animation data from table: sets entity[0x38] pointer and entity[0xE] flags"),
    0x80077CFC: ("Entity_LoadAnimDataEx", "Extended anim load: sets animation pointer, calls setup + frame init"),
    0x80077E3C: ("Entity_SetupAnimFrame", "Sets up animation frame with offset: calls 0x80075FF8, sets entity[0xE]"),

    # -- Math (continued) --
    0x800782B0: ("Math_CalcAngle2D", "Calculates angle between two 2D points using Math_Atan2"),

    # -- Game flags --
    0x80077D64: ("Game_SetFlag842", "Sets game flag bit 7 (0x80) on global at 0x800BF842"),

    # -- String tables (continued) --
    0x80078798: ("String_LookupDialog", "Looks up dialog string from nested tables at 0x800A55B0/0x800A2B84"),

    # -- BIOS / syscall stubs (PsyQ SDK low-level) --
    0x80080820: ("BIOS_EnterCritical", "BIOS call stub: jumps to 0xA0 (EnterCriticalSection)"),
    0x80080890: ("BIOS_Syscall0", "BIOS syscall wrapper: syscall(0)"),
    0x800808A0: ("BIOS_Syscall0_2", "BIOS syscall wrapper: syscall(0)"),

    # -- CD-ROM callbacks / control --
    0x80085C44: ("CD_CallbackDispatch", "Dispatches CD event callback via function table at 0x800ABDA0+0x18"),
    0x80085C74: ("CD_GetStatus", "Returns CD-ROM status byte from 0x800AAD1A"),
    0x80085C9C: ("CD_SetTimeout", "Sets CD timeout value at 0x800ABDA8, returns previous value"),
    0x80086230: ("CD_InitRead", "Initializes CD-ROM read operation: sets up DMA, starts transfer"),
    0x80086350: ("CD_InitSeek", "Initializes CD-ROM seek operation: configures parameters, starts seek"),
    0x800865F0: ("CD_SetCallback", "Sets CD event callback function pointer at 0x800ABE20"),

    # -- BIOS stubs (continued) --
    0x800861E8: ("BIOS_CallA0", "BIOS call stub: jumps to 0xA0"),

    # -- MDEC (video decoder / FMV playback) --
    0x80087EAC: ("MDEC_InitDecode", "Initializes MDEC decode: gets frame buffer, calls setup"),
    0x80087F00: ("MDEC_SetFrameBuffer", "Sets MDEC frame buffer pointer and status byte"),
    0x80088210: ("MDEC_CalcFrameSize", "Calculates MDEC frame size from header fields (e3, e9, ec)"),
    0x80088A54: ("MDEC_CmdDecode", "Sends MDEC decode command (0x43) with data pointer"),
    0x80088A74: ("MDEC_CmdReset", "Sends MDEC reset command (0x45), clears pointer"),
    0x80088A88: ("MDEC_CmdSetIQ", "Sends MDEC set IQ table command (0x4C)"),
    0x80088AA8: ("MDEC_CmdSetScale", "Sends MDEC set scale command (0x46)"),
    0x80088AC8: ("MDEC_CmdSetSize", "Sends MDEC set size command (0x47)"),
    0x80088AE8: ("MDEC_CmdSetBS", "Sends MDEC set bitstream command (0x4B)"),
    0x80088DBC: ("MDEC_SwapCommand", "Swaps MDEC command bytes: saves 0x37 to 0x38, clears 0x37"),

    # -- CD-ROM wrappers (continued) --
    0x80089A30: ("CD_GetParamPtr", "Returns pointer to CD parameter area at 0x800ABFD4"),
    0x80089AA8: ("CD_Cancel", "Cancels current CD operation via 0x8008B0C8"),
    0x80089B44: ("CD_SyncSimple", "Wraps CD_Sync for simple sync calls"),
    0x80089B64: ("CD_ReadySimple", "Wraps CD_Ready for simple ready check"),
    0x80089B84: ("CD_SetEventCallback", "Sets CD event callback function at 0x800ABFBC"),
    0x80089B98: ("CD_SetErrorCallback", "Sets CD error callback function at 0x800ABFC0"),
    0x80089F68: ("CD_Init", "Initializes CD subsystem via 0x8008B040"),
    0x80089F88: ("CD_CheckInit", "Checks if CD init is complete via 0x8008B620"),
    0x80089FA8: ("CD_CheckReady", "Checks if CD is ready via 0x8008B720"),
    0x80089FC8: ("CD_SetTimerCallback", "Sets CD timer callback via 0x80085B80 with mode 3"),

    # -- CD driver dispatch (function table at 0x800ABDA0) --
    0x80085B20: ("CD_Dispatch0C", "Dispatches CD driver function at table+0x0C"),
    0x80085B50: ("CD_Dispatch08", "Dispatches CD driver function at table+0x08"),
    0x80085B80: ("CD_Dispatch04", "Dispatches CD driver function at table+0x04"),
    0x80085BB0: ("CD_Dispatch14", "Dispatches CD driver function at table+0x14 with params"),
    0x80085BE4: ("CD_Dispatch14_NoParam", "Dispatches CD driver function at table+0x14 without params"),
    0x80085C14: ("CD_Dispatch10", "Dispatches CD driver function at table+0x10"),
    0x80086604: ("CD_GetCallback", "Returns CD event callback function pointer from 0x800ABE20"),
    0x80086738: ("CD_InitCallbacks", "Initializes CD callback function pointers at 0x80102444-0x8010244C"),

    # -- BIOS stubs (continued) --
    0x800858F0: ("BIOS_CallA0_2", "BIOS call stub: jumps to 0xA0"),
    0x80085B10: ("BIOS_CallC0", "BIOS call stub: jumps to 0xC0"),

    # -- SPU (Sound Processing Unit) --
    0x8008EE10: ("SPU_SetVoiceAttr", "Sets SPU voice attribute: writes param to voice data at 0x80104C30 table"),
    0x800900F0: ("SPU_SetVoiceAttr2", "Sets SPU voice attribute variant: different offset calculation"),
    0x8008FA70: ("SPU_Dispatch1", "SPU dispatch wrapper: calls 0x80092B00"),
    0x8008FAA0: ("SPU_Dispatch2", "SPU dispatch wrapper: calls 0x80092A70"),
    0x8008FAD0: ("SPU_Dispatch3", "SPU dispatch wrapper: calls 0x80092BB0"),
    0x8008FB00: ("SPU_Dispatch4", "SPU dispatch wrapper: calls 0x80092A30"),
    0x8008FB30: ("SPU_Dispatch5", "SPU dispatch wrapper: calls 0x80092A30"),
    0x80090560: ("SPU_SetVolume", "Sets SPU voice volume via 0x800905E0"),
    0x80090598: ("SPU_SetVolumePan", "Sets SPU voice volume and pan via 0x800905E0"),
    0x80090980: ("SPU_Start", "Starts SPU playback via 0x80090750 with flag 1"),

    # -- CD-ROM core --
    0x80089A00: ("CD_GetMode", "Returns CD mode byte from 0x800ABFC8"),
    0x80089A10: ("CD_GetStatusByte", "Returns CD status byte from 0x800ABFD8"),
    0x80089FEC: ("CD_InitSub", "Initializes CD subsystem via 0x8008B4B8"),
    0x8008A110: ("CD_DecodeTime", "Decodes BCD time format (mm:ss:ff) to absolute frame count"),
    0x8008B040: ("CD_InitDrive", "Initializes CD drive hardware: sends config commands"),
    0x8008B19C: ("CD_InitDrive2", "Second stage CD init: sets volume, filter, playback mode"),
    0x8008B28C: ("CD_ResetCallbacks", "Resets CD event/error callbacks and re-inits drive"),
    0x8008B720: ("CD_ReadSector", "Reads CD sector: sets up read command, waits for completion"),
    0x8008BBC8: ("CD_CompareName", "Compares two 12-byte CD file names, returns true if match"),
    0x8008C1EC: ("CD_OpenFile", "Opens file on CD: looks up name, seeks to sector, returns success"),

    # -- Memory card / filesystem utilities --
    0x80096A40: ("MC_GetFileSize", "Returns file size for memory card file handle"),
    0x80096A70: ("MC_Close", "Closes memory card file handle"),
    0x800970EC: ("MC_Write", "Writes data to memory card file"),
    0x80097498: ("MC_Open", "Opens memory card file by name"),
    0x800974FC: ("MC_Read", "Reads data from memory card file"),
    0x80097678: ("MC_Init", "Initializes memory card subsystem"),
    0x800976A0: ("MC_Start", "Starts memory card access"),
    0x800976C8: ("MC_Stop", "Stops memory card access"),
    0x80097730: ("MC_Flush", "Flushes memory card write buffer"),
    0x80097E10: ("MC_Seek", "Seeks to position in memory card file"),

    # -- Entity script (continued) --
    0x800423FC: ("Entity_ScriptBranch", "Branches script execution: if entity[0x72]=0 calls title, else calls 0x80042354"),

    # -- CD asset loading --
    0x80045080: ("CD_LoadChunk", "Loads data chunk from CD: reads sector table at 0x800BE118 by chunk ID"),
    0x80045258: ("CD_LoadAsset", "Loads game asset from CD by ID: uses 0x800ECF58 + 0x800FB170 tables"),

    # -- UI / texture --
    0x8004B4E8: ("UI_ChangeTextureSet", "Changes UI texture set: updates globals and reloads via Texture_LoadUI"),

    # -- Inventory (continued) --
    0x8004D604: ("Inventory_RemoveItem", "Removes item from inventory: decrements count, updates UI"),
    0x8004D688: ("Inventory_RemoveItem2", "Removes item variant: uses mode 4 instead of mode 1 for UI update"),
    0x8004D868: ("Inventory_CheckFlag", "Checks inventory bit flag at 0x800BFD94 for item ID"),

    # -- Entity spawn / collectibles --
    0x8004BD04: ("Entity_SpawnCollectible", "Spawns collectible entity with behavior 0x8004BB38 from pool"),

    # -- UI elements --
    0x8004F430: ("UI_UpdateElement", "Updates UI element: decrements timer, resets state if timer reaches 0"),
    0x80050970: ("UI_DrawScreenOverlay", "Draws screen overlay: calls 0x800508A8 or 0x8005082C based on flag"),

    # -- Entity state helpers --
    0x800440E4: ("Entity_SetSubState22", "Sets entity sub-state to 0x22 or 0x26 based on bit 15 of param"),
    0x800442A0: ("Entity_ResetAnimAndState", "Resets entity animation mode and sets sub-state via entity[0x74]"),

    # -- Collision system (continued) --
    0x8004960C: ("Collision_GetSurfaceType", "Reads collision surface type byte from geometry response data"),
    0x80049968: ("Collision_InitGrid", "Initializes collision grid pointers from header at 0x1F8001C8"),

    # -- Entity world transform --
    0x8004DAEC: ("Entity_WorldToScreen", "Converts entity world position to screen coords via GTE and checks visibility"),

    # -- UI helpers --
    0x8004EE2C: ("UI_ClearList", "Clears list of 12 u16 entries to 0xFFFF at given pointer"),
    0x800509B4: ("Screen_InitOverlay", "Initializes screen overlay: sets GTE offset, calls render setup functions"),

    # -- String utilities --
    0x8004EF54: ("String_CopyUntil", "Copies string until terminator byte 0xFA or 0xFF, appends 0xFF"),

    # -- Entity init (continued) --
    0x80051B70: ("Entity_InitSubEntity", "Initializes sub-entity: allocates if slots available, sets default values"),

    # -- Inventory (wrapper, kept for completeness) --
    0x8004D79C: ("Inventory_SetBit", "Sets bit flag in inventory bitfield at 0x800BFDAC for item ID"),

    # -- Entity script (continued) --
    0x80043EBC: ("Entity_ExecWithFlag0", "Wraps entity script execution with flag=0 parameter"),

    # -- CD / asset loading --
    0x80045558: ("CD_CallbackStub", "CD event callback stub: calls 0x8008A00C with preset params"),
    0x80045580: ("CD_CheckLoaded", "Checks if asset is loaded by looking up sector table"),

    # -- Collision checks --
    0x80049250: ("Collision_Check1", "Collision check variant 1: calls 0x80045B30 with entity angle"),
    0x80049280: ("Collision_Check2", "Collision check variant 2: calls 0x80045CAC with entity angle"),
    0x800493E8: ("Collision_Check3", "Collision check variant 3: calls 0x800468AC with entity angle"),

    # -- Entity type / item --
    0x8004CC64: ("Entity_SetType", "Sets entity type byte at entity[0x3] to given value"),
    0x8004D4F4: ("Menu_UpdateItemCount", "Updates item count display after selection change"),

    # -- GTE matrix operations --
    0x80051B34: ("GTE_CopyMatrix", "Copies 5-word GTE matrix from source to destination"),
    0x80051C8C: ("Entity_InitMatrix", "Initializes entity GTE matrix to identity (0x1000 scale) at entity[0x98]"),
    0x80051D20: ("Entity_TransformPoint", "Transforms a point by entity GTE matrix, adds translation"),
    0x800517F8: ("Entity_UpdateMatrix", "Updates entity GTE matrix from entity[0x54] rotation and [0x2C-0x36] position"),

    # -- Inventory / menu (continued) --
    0x8004D650: ("Inventory_RemoveItem3", "Removes item from inventory: decrements count, updates UI display"),
    0x8004D6D4: ("Menu_ActionMode0", "Menu action with mode 0: calls 0x8004ED0C with mode 0"),
    0x8004D6F4: ("Menu_ActionMode3", "Menu action with mode 3: calls 0x8004ED0C with mode 3"),
    0x8004ED94: ("UI_DrawElement", "Draws UI element from queue at 0x800BF800 by index"),

    # -- System / event handling --
    0x80051F14: ("Sys_SetCallback", "Sets system callback function and event mask from parameters"),
    0x80052010: ("Sys_SetEvent", "Sets system event: writes event code to hardware register"),
    0x80052078: ("Sys_ClearEvent", "Clears system event: resets event handler state"),
    0x800521F4: ("Sys_CallWithParams", "Calls system function at 0x800521F4 with 4 byte parameters"),

    # -- GPU / VSync --
    0x80051FB4: ("GPU_WaitVSync", "Waits for vertical sync: spin-loops until vblank interrupt"),

    # -- Input / controller --
    0x8005245C: ("Pad_Init", "Initializes controller: sets up pad buffers and callback"),

    # -- Entity GTE / draw --
    0x80051D90: ("Entity_TransformPoint2", "Variant point transform: uses pre-computed matrix, no translation add"),
    0x8005262C: ("Entity_InitDrawEnv", "Initializes entity draw environment: sets up GTE and render state"),

    # -- Entity animation / movement --
    0x80054DAC: ("Entity_SetAnimMode2", "Sets entity animation mode via entity[0x46] with mode-dependent call"),
    0x80056B48: ("Entity_ApplyVelocity", "Applies velocity vector (entity[0x44-0x4C]) to entity position"),

    # -- Input / game state --
    0x80055864: ("Game_ReadInput", "Reads combined input state: checks 0x800E7E68 against 0x1F800172/0x1F800174"),

    # -- Entity action / state --
    0x80056D44: ("Entity_ResetActionState", "Resets entity action state: clears flags 0x146/0x167/0x16A/0x178/0x181"),
    0x800588BC: ("Entity_StateTransition2", "Transitions entity to state 3 if input active and 0x164 flag set"),
    0x8005A910: ("Entity_DispatchAction", "Dispatches entity action: calls overlay func or local handler based on flags"),
    0x80065478: ("Entity_SetActionFlag", "Sets action flag: if 0x800BF816 set, calls 0x8005444C; else clears flags"),
    0x800655A0: ("Entity_EndAction", "Ends current entity action: resets state, sets sub-state to 0x1E, calls cleanup"),

    # -- Entity action / state (continued) --
    0x80067FE4: ("Entity_SpawnCollectibleIf", "Spawns collectible entity based on entity[0x6E] type byte"),
    0x80069634: ("Entity_SetAnimSpeed", "Sets entity animation speed from table 0x800A4A6C by type and state"),

    # -- Entity list iteration --
    0x80069B28: ("Entity_UpdateBGList", "Iterates background entity linked list, calls each entity's update function"),

    # -- Entity proximity / utility --
    0x80069B6C: ("Entity_CheckProximity", "Checks if entity is within 0x1CC distance of another entity on all axes"),
    0x8006A8C8: ("Entity_SpawnChild27", "Spawns child entity of type 0x27 with parent reference"),
    0x8006ABF4: ("Entity_InitSpriteConfig", "Initializes sprite config: sets entity[0xB-0xD], loads anim data from table 0x36"),
    0x8006AC38: ("Entity_InitSpriteConfig2", "Initializes sprite config variant: same structure, uses table index 0x13C"),

    # -- System / Debug --
    0x8009A420: ("Mem_Set", "memset implementation: fills memory region with byte value"),
    0x800834D4: ("GPU_CheckTimeout", "GPU timeout/reset handler: resets GPU state if hung or error detected"),

    # -- Batch 2024-07-10 (entity draw/UI/events) --
    0x80033080: ("Entity_DrawSpriteAndProject", "Calls ProcessProjCmd then ProcessSpriteCmd for combined projection+sprite draw"),
    0x800339A4: ("Entity_DrawChild3", "Draws child entity variant from data table at 0x800A23A4"),
    0x80034548: ("UI_DrawConfigMenu", "Draws configuration menu layout: sets up panels, sliders, text elements"),
    0x800345D8: ("UI_SetSlotColors", "Sets menu slot color configuration: active=100, inactive=2/3/0x84"),
    0x80034634: ("Entity_CleanupRef", "Cleans up entity reference: deallocs if ref exists, clears pointer"),
    0x80034670: ("Entity_ResetFull", "Full entity reset: clears state bytes, resets audio bank, cleans refs"),
    0x80035528: ("Event_TriggerTypeA", "Triggers event type A (0x18): spawns entity with overlay func at 0x8011600C"),
    0x800355B4: ("Event_TriggerTypeB", "Triggers event type B (0x1A): spawns entity with overlay func at 0x801189C4"),
    0x80036708: ("Entity_LoopCheck6", "Loops entity check up to 6 times via FUN_800365f0, returns true if any pass"),
    0x8003687C: ("Entity_LoopCheck6B", "Loops entity check up to 6 times via FUN_8003675c, returns true if any pass"),

    # -- Menu / save system --
    0x80036AE8: ("Menu_ClearItems", "Clears all 3 menu item slots by calling FUN_80036a14 with modes 0,1,2"),
    0x80036B28: ("String_CopyFilterNL", "Copies string replacing newline chars with spaces, null-terminates"),
    0x80036D90: ("Game_CheckArea", "Checks game area flag: returns 1 if area is 0 or 5 in specific game mode"),
    0x80036DC4: ("Game_CheckUnlock", "Checks if area is unlocked via table at 0x800A24E4"),
    0x800386C0: ("Menu_CursorNext", "Advances menu cursor to next item, wraps at max from entity[0x21]"),
    0x80038708: ("Menu_CursorNext6", "Advances menu cursor up to 6 positions, returns true if wrapped"),
    0x80038758: ("Menu_CursorPrev", "Moves menu cursor to previous item, wraps at 0"),
    0x80038794: ("Menu_CursorPrev6", "Moves menu cursor back up to 6 positions, returns true if wrapped"),
    0x8003989C: ("Save_UpdateSlots", "Updates save slot display: increments entity[0x23] for each save present"),
    0x80039978: ("Save_CursorNext", "Advances save menu cursor with step of 5 (entity[0x1E]+=5)"),
    0x800399C0: ("Save_CursorPrev", "Moves save menu cursor to previous item (entity[0x1F]--, entity[0x1E]--)"),

    # -- Font rendering --
    0x80039E80: ("Font_BuildChar", "Builds a font character tile: converts char code to 8x16 pixel UV coordinates"),

    # -- Menu animation --
    0x8003A3E8: ("Menu_AnimIcon", "Animates menu icon with sine wave oscillation using GTE trig functions"),

    # -- Engine update loops --
    0x80025D98: ("Engine_UpdatePool4", "Updates and draws entities in Pool 4 (camera/HUD), calls draw variants"),
    0x80025744: ("Engine_DrawPool4_Type1", "Draws Pool 4 entity using FUN_8007e1b8"),
    0x80025934: ("Engine_DrawPool4_Type2", "Draws Pool 4 entity using FUN_8007e6dc"),
    0x80025B78: ("Engine_DrawPool4_Type3", "Draws Pool 4 entity using FUN_8007e938 (special primitive)"),
    0x8003F024: ("Engine_Render3DSprites", "Iterates array at 0x800ec188 and renders 3D sprites via GPU_Render3DSprite"),
    0x8003FA1C: ("Engine_UpdateEntities", "Calls EntityLoop_Player then EntityLoop_Active for entity updates"),
    0x8003FA44: ("Engine_UpdateAll", "Main update: runs all entity loops (active, bg, player, obj, npc) + FX update"),

    # -- OT / GPU submission --
    0x8003FAE8: ("OT_SubmitPrimitive", "Submits a primitive to the ordering table with depth sorting"),

    # -- GTE projection --
    0x8003F7A0: ("GTE_ProjectVertex", "GTE RTPS projection of single vertex: returns screen XY and depth Z"),

    # -- Entity transform --
    0x8003FAA4: ("Entity_ApplyTransformCheck", "Applies GTE transform if entity[0xB] has bit 0x40 or 0x80 set"),

    # -- Entity physics (continued) --
    0x8003FC78: ("Entity_SetAngleFromState", "Sets entity rotation angle: entity[0x56] = entity[0x2A] << 4"),
    0x8003FC8C: ("Entity_PhysicsIfMatch", "Runs physics step only if global flag at 0x800BF816 matches entity[0x6A] ID"),

    # -- Entity behaviors (continued) --
    0x8003FD10: ("Entity_Behavior_Shake", "Camera shake effect: toggles sub-entity position with random offset every 16 frames"),
    0x8003FED8: ("Entity_Behavior_ShakeSFX", "Shake with sound: same as Shake but plays SFX 0x19 on start, resets parent flag"),

    # -- BIOS syscall 0xB0 stubs (_96_remove) --
    0x80080830: ("BIOS_Syscall_B0_80080830", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80080840: ("BIOS_Syscall_B0_80080840", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80080850: ("BIOS_Syscall_B0_80080850", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80080860: ("BIOS_Syscall_B0_80080860", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80080870: ("BIOS_Syscall_B0_80080870", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80080880: ("BIOS_Syscall_B0_80080880", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x800808E0: ("BIOS_Syscall_B0_800808E0", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80080920: ("BIOS_Syscall_B0_80080920", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80080BE0: ("BIOS_Syscall_B0_80080BE0", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80083B20: ("BIOS_Syscall_A0_80083B20", "BIOS syscall 0xA0 (SetRCnt) stub"),
    0x80086200: ("BIOS_Syscall_B0_80086200", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80086210: ("BIOS_Syscall_B0_80086210", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80086220: ("BIOS_Syscall_B0_80086220", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x800873F0: ("BIOS_Syscall_C0_800873F0", "BIOS syscall 0xC0 stub"),
    0x80087400: ("BIOS_Syscall_C0_80087400", "BIOS syscall 0xC0 stub"),
    0x800899F0: ("BIOS_Syscall_B0_800899F0", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x80098F80: ("BIOS_Syscall_B0_80098F80", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009BAF0: ("BIOS_Syscall_B0_8009BAF0", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009BB00: ("BIOS_Syscall_B0_8009BB00", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009BEE0: ("BIOS_Syscall_B0_8009BEE0", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009BEF0: ("BIOS_Syscall_B0_8009BEF0", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009BF00: ("BIOS_Syscall_B0_8009BF00", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009BF10: ("BIOS_Syscall_B0_8009BF10", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009C030: ("BIOS_Syscall_B0_8009C030", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009C040: ("BIOS_Syscall_B0_8009C040", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009C050: ("BIOS_Syscall_B0_8009C050", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009C600: ("BIOS_Syscall_B0_8009C600", "BIOS syscall 0xB0 (_96_remove) stub"),
    0x8009C610: ("BIOS_Syscall_B0_8009C610", "BIOS syscall 0xB0 (_96_remove) stub"),

    # -- Entity state machines / behaviors (batch 3) --
    0x8004D4C4: ("Inventory_AddItemEx", "Adds item to inventory via FUN_8004d338 + FUN_8004ed0c(param, 2)"),
    0x800427F4: ("Entity_State_PickupCheck", "Pickup state machine: checks idle counter, advances state byte at entity[0x78]"),
    0x800538E0: ("Entity_Behavior_SpawnAtOffset", "Spawns entity 0x35 at offset from entity[0x84] if entity type is 0 or 3"),
    0x80054D14: ("Entity_LoadAnimIfChanged", "Loads entity animation data only when entity[0x46] animation ID has changed"),
    0x8006E3B0: ("Camera_SetModeSeq", "Camera mode sequence: calls init, set params, and commit in order"),
    0x80042354: ("Entity_PlaySFX_FadeOut", "Plays SFX from 2-element table at 0x80015368, sets fade flag 0x800BF84B=0"),
    0x80044CD4: ("Texture_TransferToVRAM", "Sets up VRAM texture transfer: callback setup, address calc, event trigger"),
    0x80044B38: ("Entity_Behavior_ApproachTarget", "Entity approaches target position: state 0 calc angle, state 1 approach"),
    0x800498C8: ("Collision_FindGround", "Collision loop: repeatedly checks floor height until valid ground found (bit 0x4000)"),
    0x8004B2E8: ("Entity_SpawnBreakFX", "Spawns break effect entity 0x1F at saved position, plays SFX 0x28"),

    # -- Entity behaviors (batch 4) --
    0x80041938: ("Entity_MoveToTarget", "Entity moves toward target: collision check with entity[0x29] state, sets angle via atan2"),
    0x800543C0: ("Entity_Behavior_FollowParentY", "Follows parent entity Y offset: reads parent[0x10], computes delta from entity[0x32]"),
    0x80063098: ("Entity_Behavior_SpinAttack", "Spin attack: accelerates entity[0x154] speed, rotates, plays SFX 0x1B at threshold"),
    0x8006585C: ("Entity_State_AttackTrans", "Attack transition: entity[6] state machine, calls FUN_80076d68 then branch on action flag"),
    0x80063ECC: ("Entity_CalcOrbitPos", "Orbit position: uses GTE cos/sin on entity[0x58] angle + entity[0x64] radius for offset from parent"),
    0x80042EA4: ("Entity_PlayTimedSFX", "Timed SFX: plays sound at intervals using frame counter mask from entity[0x38] data"),
    0x80068214: ("Entity_SpawnProjectile", "Spawns projectile entity 0x1B at entity position with scale 0x200, type 1, behavior 4"),
    0x800682C4: ("Entity_InitFromGlobals", "Inits entity state from globals: sets sprite flags entity[0xD] from DAT_800bf881"),
    0x80072520: ("Entity_Behavior_TimedLife", "Timed lifecycle: entity[4] state 0->1->2->3, timer 0x3C, dealloc at state 3"),
    0x800725D4: ("Entity_SpawnWithCallback", "Spawns entity via pool 1, sets entity[0x1C] callback, type 0x17, flag 0x80"),

    # -- Entity lifecycle / spawn helpers (batch 5) --
    0x8007263C: ("Entity_UpdateLifecycle", "Lifecycle callback: entity[4] state machine, checks done flag, dealloc at state 3"),
    0x80072DDC: ("Entity_SpawnChild", "Spawns child entity: AllocByPoolId with bitmask, sets parent/type/flag"),
    0x80072F14: ("Entity_RotateLimb", "Rotates entity limb: entity[0x50] += 0x40 per frame, wraps, sets entity[0x56] delta"),
    0x800730C8: ("Entity_RotateSubPartNeg", "Rotates sub-part negative: param2[0x12] delta, param2[0xA] = param2[0xE] - delta"),
    0x80073194: ("Entity_RotateSubPartPos", "Rotates sub-part positive: param2[0x12] delta, param2[0xA] = param2[0xE] + delta"),
    0x80073260: ("Entity_EnterHurtState", "Enters hurt state: sets entity=2, plays SFX 0x17, resets collision globals"),
    0x8007AB20: ("Entity_AllocBackground03", "Wrapper: Entity_AllocBackground(0, 3) - allocates background entity at position 3"),
    0x8006F0E4: ("Entity_SpawnPool2Lifecycle", "Spawns entity in pool 2 with FUN_8006f2d0 callback, type 1, flag 0x80"),
    0x80070698: ("Math_RandomCurved", "Curved random: r = (rand() & (n-1))^2 / n with random sign, for biased distribution"),
    0x800707E0: ("Entity_TriggerAnimMode", "Triggers animation mode: checks entity[0x70], calls FUN_80041718(2,2), sets flag"),

    # -- Entity animation / movement helpers (batch 6) --
    0x80070E60: ("Entity_MoveInCircle", "Circular motion: cos/sin on entity[0x44] angle, offset from entity[0x4E/0x50/0x52], advance angle 0x20"),
    0x800716B4: ("Entity_InitPlayer", "Initializes player entity: sets global ptr, positions 0, scales 0x200, angles 0, entity[0xB]=0xF"),
    0x80071C48: ("Entity_AnimSegment", "Single segment animation: entity[6] state machine, angle advance 0x100, radius from entity[0x82]"),
    0x80071CF4: ("Entity_AnimChain", "Multi-segment chain animation: per-segment angles at entity[param*2+0x60], radius entity[0x82]"),
    0x80072114: ("Entity_SpawnDropItem", "Spawns drop item: child entity 0x0D with timed lifecycle, timer 0x7C7E, SFX 8, manages global ptr"),
    0x80073300: ("Entity_EnterHurtState3", "Wrapper: Entity_EnterHurtState then sets DAT_800bf818 = 3"),
    0x80074BC4: ("Input_InitSystem", "Initializes input/pad system: resets flag, calls FUN_8001cf2c, FUN_80074b44, FUN_80074e48"),
    0x800750D8: ("Sys_OverlayDispatch", "Overlay dispatcher: 0xFF=pad test, 0xFE=init, else loads overlay via FUN_8001d364"),
    0x800754F4: ("CD_LoadLevelData", "Loads level data segments: CD load + 10 sub-loads via FUN_80075448 with config from overlay header"),
    0x80075D58: ("Video_InitDecoder", "Initializes MDEC video decoder: sets size params at 0x800BED7C from game config, calls init"),

    # -- GPU / CD / MDEC wrappers (batch 7) --
    0x800810F0: ("GPU_ClearImage", "GPU clear image: sends ClearImage cmd via function pointer table at 0x800A5998"),
    0x80081180: ("GPU_ClearOT", "GPU clear OT: sends ClearImage2 cmd with 0x80000000 flag via function table"),
    0x80081D78: ("GPU_SetupDrawMode", "Sets up GPU draw mode: primitive[3]=2, encodes tpage, sets draw params"),
    0x80082424: ("GPU_DMATransfer", "GPU DMA transfer: sets DMA regs, triggers xfer, waits for completion with timeout"),
    0x80080DC0: ("GPU_SetQueueMode", "GPU command queue mode setter: dispatches via function table, checks DAT_800a59a1/2"),
    0x80087F1C: ("MDEC_StateMachine", "MDEC decoder state machine: state 2=reset, 3=set IQ, 4=set size via entity[0x46]"),
    0x80088CC8: ("MDEC_SwapAllBuffers", "MDEC buffer swap loop: iterates 0xF0-stride buffers, swaps cmds until all done"),
    0x80089930: ("CD_InitAttempt", "CD init attempt: tries FUN_8008b2d8 then FUN_8008b19c, returns success bool"),
    0x80085A78: ("Sys_VSyncWait", "VSync wait with timeout: polls DAT_800abde0, prints 'VSync timeout' and calls BIOS on fail"),
    0x800860A4: ("CD_ResetController", "CD controller reset: saves state from 0x800ABDA8/C, zeros fields, calls BIOS stub"),

    # -- Entity init / mem clear (batch 8) --
    0x8007ACC4: ("Entity_ClearPool5", "Clears 8 blocks of 0x4C bytes at 0x80100400 (entity child/slot table)"),
    0x8007AD40: ("Entity_InitRenderQueue", "Initializes render queue: clears 0xA00 bytes at 0x800EC188, sets 0x28 entries"),
    0x8007B0F0: ("Entity_InitFreeList", "Builds free list: clears 0x208 blocks of 0x44 bytes, links them backward, sets count"),
    0x8007B328: ("Game_InitEntitySystem", "Initializes entity globals at 0x800FB160: sets default values (1,0,7,0,9,0,0)"),
    0x800898A0: ("CD_InitWithRetry", "CD init with 4 retries: sets callbacks at 0x800ABF24 on success, prints error on fail"),
    0x8009CC2C: ("Sys_TimeoutError", "Timeout error handler: prints '%s timeout', resets CD state regs at 0x800AD098"),
    0x8006E294: ("Camera_Mode1", "Camera mode 1: init + conditionally calls FUN_8006dc38/FUN_8006df88 + commit"),
    0x8006E2FC: ("Camera_Mode2", "Camera mode 2: init + conditionally calls FUN_8006dad8/FUN_8006def0 + commit"),
    0x80066478: ("Entity_ApplyGravity", "Applies gravity: entity[0x4A] += 0x400, updates entity[0x30] Y pos, triggers at angle wrap"),
    0x80066538: ("Entity_ApplyVelocityMax", "Applies velocity with cap: entity[0x4A] capped at 0x2800, updates Y pos, advances timer"),

    # -- Camera / engine / audio (batch 9) --
    0x80024AF0: ("Entity_CalcAimPos", "Calculates aim position: GTE cos/sin on entity[0x56], offset from entity[0x2E/0x32/0x36]"),
    0x8006DC38: ("Camera_UpdatePosition", "Updates camera position: GTE cos/sin on entity[0x6E]/[0x70], radius entity[0x6C]"),
    0x8006DEF0: ("Camera_SmoothMove", "Camera smoothing: lerps _DAT_1f8000d4 toward target, sets entity[0x66] bit 2"),
    0x8006DF88: ("Camera_SetHeight", "Sets camera height: param2=0 uses entity[0x26], else cos(entity[0x6E])*radius"),
    0x8006923C: ("Entity_InitAttackState", "Initializes attack state: entity[0x46] dispatch, sets entity[0x6A], SFX 0x22, timer 0x6E"),
    0x80077D8C: ("Audio_SFXSequence", "SFX sequencer: DAT_800bf842 state machine, plays SFX 0x29/0x2A in sequence, decrements"),
    0x80074F24: ("Engine_DispatchOverlay", "Overlay dispatcher: uses game state, looks up overlay ID from tables at 0x800A4F50/68"),
    0x80075024: ("Engine_LoadOverlay", "Simple overlay loader: param=5 -> 0x13, else 0x14, calls Sys_OverlayDispatch"),
    0x8001D364: ("Sys_LoadBinary", "Binary segment loader: uses pointer tables at 0x8001005C, computes load address from DAT_1f800224"),
    0x8001D71C: ("Engine_LoadOverlayEntry", "Loads overlay by index: indexes tables at 0x8009D110, checks pad flag, calls load"),

    # -- BIOS / CD / GTE wrappers (batch 10) --
    0x8009AE60: ("CD_QueueCmd", "CD command queue: appends byte to buffer at DAT_800acf08, flushes on full, special cmds 9/10"),
    0x8009AF5C: ("CD_FlushCmd", "Flushes CD command queue: sends buffered cmds via BIOS stub, resets counter"),
    0x8009BBB4: ("BIOS_Seq2", "BIOS sequence: calls BIOS_B0 stub then FUN_8009c230"),
    0x8009BD1C: ("BIOS_InitSeq", "BIOS init sequence: calls BIOS_B0, BIOS_B0(0), getter, returns 1"),
    0x8009BF48: ("BIOS_ResetRegion", "BIOS reset: zeros 0xB words at BIOS struct+0x594, calls FUN_800858f0"),
    0x8009C0F8: ("BIOS_SetupEvent", "BIOS event setup: copies 5 words from DAT_8009c0d0 to computed BIOS address"),
    0x8009C18C: ("BIOS_CopyData", "BIOS data copy: copies data from DAT_8009c0e4 to BIOS struct+0x9C8"),
    0x800518FC: ("GTE_ComposeAndProject", "GTE compose+project: loads scale, composes rotation matrix, projects, adds position"),
    0x80089BAC: ("CD_SendCmdRetry", "CD command with 3 retries: calls FUN_8008ac34 with fallback, restores callback on fail"),
    0x8007E038: ("Entity_ActivatePool3", "Activates entity in pool 3: checks game flags, sets entity[0x47]=1, callback=FUN_8007dc38"),

    # -- CD / entity / camera (batch 11) --
    0x8007E110: ("Entity_InitSprite", "Inits sprite entity in pool 3: entity[0x47]=2, assigns sprite data from DAT_800ecf60"),
    0x8009C8E0: ("CD_ResetState", "CD state reset: clears CD regs at 0x800AD098, zeros buffers at DAT_800acf54/cfd8"),
    0x8008B4B8: ("CD_SyncWithTimeout", "CD sync with timeout: polls timer, prints debug on timeout (0x3C0000 cycles), calls recovery"),
    0x8009A3A4: ("CD_AdjustCmdByte", "Adjusts CD command byte: if table[param_1]&1, adds 0x20 to command"),
    0x8009A480: ("Game_SetGlobal", "Sets global DAT_80105ee8 = param_1 (simple setter)"),
    0x8009A6C0: ("CD_GetCmdTimeout", "CD command timeout: looks up table at 0x800ACE75, returns timeout or 9999999 (infinite)"),
    0x800964B4: ("CD_HandleError", "CD error handler: on FUN_800977c0=-1, sets flag, decrements counter DAT_80105d70"),
    0x8006DAD8: ("Camera_CalcDelta", "Camera delta calculation: GTE cos/sin, smooths distance, updates scratchpad"),
    0x8006BDF0: ("Entity_InitAttackTrail", "Inits attack trail: sets entity[0x68] angle, entity[0x6A]=0x400, SFX 0x22, optional trail"),
    0x800654D4: ("Entity_RotateToTarget", "Rotates entity toward target angle: entity[6] state, uses FUN_800776f8 approach, sets flag"),

    # -- Entity states / camera / BIOS (batch 12) --
    0x80065990: ("Entity_State_JumpStart", "Jump start state: entity[6]=0->1, calls damage/physics, branches on _DAT_1f800184 action"),
    0x8005FA84: ("Entity_SetupBehavior", "Sets up entity behavior: checks DAT_800bfa47/80b for mode, branches to state init"),
    0x800634A8: ("Entity_CalcMovePos", "Calculates move position: GTE sin on entity[0x56/0x58], radius entity[0x64], updates pos"),
    0x8006EA00: ("Camera_Mode3", "Camera mode 3 (no param): sets pos from DAT_800e7eae/b2/b6, cos calc + commit"),
    0x8009AF98: ("CD_QueueCmdAndFlush", "CD cmd queue + flush: same as QueueCmd but forces flush at end"),
    0x8009BFC0: ("BIOS_ZeroRegion", "BIOS zero region: zeros 9 words at BIOS struct+0x62C, calls FUN_800858f0 + FUN_800808a0"),
    0x8009C230: ("BIOS_CopyToEvent", "BIOS copy: copies data from DAT_8009c2a0 to BIOS struct+0x70, calls finish functions"),
    0x800653F4: ("Entity_State_InitWithOverlay", "Entity state: init + load anim 0x40, conditionally calls overlay func_0x8010c780"),
    0x800661E0: ("Entity_CheckClimbEnd", "Checks climb end: entity[6] state, adjusts Y+10, collision check, sets flag 0x800E7EFE"),

    # -- DMA / entity / camera / GTE (batch 13) --
    0x8001DB8C: ("DMA_TransferAndWait", "DMA transfer with wait: sets up DMA callback FUN_8001db38, polls until complete"),
    0x80022C0C: ("Entity_DecrementTimer", "Decrements entity timer: entity[0x16E] -= param2, sets DAT_800bf80d=0xFF on expire"),
    0x800235A0: ("Entity_ProcessCollision", "Processes collision result: calls FUN_8001f40c, branches on entity[0x164] mode"),
    0x80023794: ("Entity_CheckDistance3D", "3D distance check: sqrt(X^2+Z^2) vs entity[0x80] radius, Y bounds vs entity[0x86]"),
    0x800425FC: ("Entity_WaitForFlag", "Waits for flag: entity[0x78] state, polls DAT_800bf843 until zero then returns success"),
    0x80042758: ("Entity_TriggerEvent", "Triggers event: entity[0x78] state, checks entity[0x72/0x74] conditions, calls FUN_80042728"),
    0x80043634: ("Entity_DispatchSpriteCmd", "Dispatches sprite cmd: entity[0x72] bit 0x1000 selects FUN_8006fde8 or FUN_8006fb0c"),
    0x80048654: ("Entity_CalcCollisionAngle", "Calculates collision angles: atan2 on surface normal, stores slope vectors at entity[0x48-4C]"),
    0x80050A80: ("GTE_InitProjectionMatrix", "Inits GTE projection matrix: identity, zeros pos/trans, scales 0x1000, screen offset"),
    0x8006E918: ("Camera_CalcOrbitPos", "Camera orbit position: GTE cos/sin on angle, incorporates entity[0x56] flip direction"),

    # -- Camera / entity / CD / game state (batch 14) --
    0x8006EF38: ("Camera_UpdateOrbit", "Updates camera orbit: GTE cos/sin on DAT_800e8078 angle, radius 500, advances angle 8"),
    0x80070830: ("Entity_CheckAnimEnd", "Checks if animation ended: entity[0x70] < 1, calls FUN_80041718(0,2)"),
    0x800708B4: ("Entity_SetState", "Sets entity state: entity[6]=0, entity[3]=param_1 from global entity ptr"),
    0x8007B2AC: ("Math_InitVec3", "Initializes 3D vector: zeros XY, sets Z=0x1000 (default scale)"),
    0x800732C0: ("Entity_EnterHurtState1", "Enters hurt state variant 1: calls EnterHurtState, sets DAT_800bf818=1, saves entity[3]"),
    0x8006F00C: ("Game_SetEventFlag", "Sets event bit flag: _DAT_800bfe48 |= 1 << (param_1 & 0x1F)"),
    0x80065374: ("Game_DispatchOverlayCall", "Dispatches overlay call by game state: 0, 5, 6 each call different overlay functions"),
    0x800897F8: ("Func_Nop", "Empty stub function - no operation, immediate return"),
    0x80096480: ("CD_Cmd1", "CD command wrapper 1: calls FUN_80096590 with callback FUN_800964b4"),
    0x80096520: ("CD_Cmd2", "CD command wrapper 2: calls FUN_80096590 with callback LAB_80096588 + param"),

    # -- CD / camera / entity helpers (batch 15) --
    0x80096554: ("CD_Cmd3", "CD command wrapper 3: calls FUN_80096590 with callback LAB_80096588 + param"),
    0x80097414: ("CD_SetupEvent", "CD event setup: branches on DAT_800ac620 flag, calls FUN_80097194 or FUN_80096e70"),
    0x8008C260: ("CD_SetEvent", "CD event setter: calls FUN_80089b84 with DAT_800ac30c, zeros DAT_800ac308"),
    0x80089CE8: ("CD_SendCmdRetry2", "CD command retry variant 2: same as SendCmdRetry but 4th param=1"),
    0x8006F02C: ("Game_SetFlag2", "Sets bit flag 2: _DAT_800bfe34 |= 1 << (param_1 & 0x1F)"),
    0x80069A2C: ("Entity_CalcAngleToTarget", "Calculates angle from entity to target point using GTE cos/sin + atan2"),
    0x8006914C: ("Entity_InitObjState", "Initializes object state: sets entity[0x44/0x45/0x2B/0x4/0x6E/0x6F], decrements counter"),
    0x8006E228: ("Camera_Mode4", "Camera mode 4: init, smooth Y, conditionally updates delta, commit"),
    0x8006DA54: ("Camera_SmoothY", "Camera Y smoothing: snaps if within 10 units, else lerps toward target with 0x1600 step"),

    # -- Entity / GPU / MDEC / CD (batch 16) --
    0x8007B008: ("Entity_UpdateLoop", "Entity update loop: iterates linked list from 0x800F2624, calls each entity[0x1C] callback"),
    0x8007AD98: ("Entity_AllocSlot", "Allocates free child slot: scans 8 slots of 0x4C at 0x80100400, returns first empty"),
    0x8007E938: ("GPU_RenderSprite2", "Renders sprite variant 2: calls FUN_8007e6dc with function table lookup at 0x80017334"),
    0x8009B9B0: ("Debug_PrintString", "Debug string output: sends chars to CD queue via FUN_8009ae60, flushes at end"),
    0x8009CAEC: ("MDEC_SyncIn", "MDEC input sync: polls bit 0x20000000 with timeout, calls timeout error on fail"),
    0x8009CB80: ("MDEC_SyncOut", "MDEC output sync: polls bit 0x1000000 with timeout, calls timeout error on fail"),
    0x80079374: ("GPU_RenderSprite_V1", "Renders sprite variant 1: sets flag 0x20, calls FUN_80078ca8 with mode 0x100008"),
    0x80079324: ("GPU_RenderSprite_V2", "Renders sprite variant 2: sets flag 0xFFE0, calls FUN_80078ca8 with mode 0x80008"),
    0x80087E2C: ("MDEC_CallbackDispatch", "MDEC callback: calls function ptr at 0x800ABE4C, dispatches result via FUN_800887bc"),
    0x80095470: ("CD_ReadByte", "CD byte read: calls FUN_800962b0, writes result to buffer at DAT_80105cdc+offset+4"),

    # -- CD / GPU / menu helpers (batch 17) --
    0x800953B0: ("CD_ReadByteAt1", "CD byte read at offset+1: same as CD_ReadByte but writes to +1 instead of +4"),
    0x800954E0: ("CD_GetByteAt4", "CD byte getter: reads byte at DAT_80105cdc + param*0x10 + 4"),
    0x80094B10: ("Menu_ClearSlot", "Clears a menu slot: zeros 0x38-byte entry at DAT_801054e5 by index"),
    0x8008CFF0: ("CD_ClearBuffer", "Clears CD buffer: zeros param_2 entries of 0x20 bytes at DAT_80102728"),
    0x80086144: ("CD_InitController", "CD controller init: sets flag, restores saved state, returns status"),
    0x8009A1D0: ("CD_GetField", "CD struct field getter: returns word at DAT_800ac604 + index*0x10 + 0xC"),
    0x8009A31C: ("CD_Wrapper", "CD wrapper: calls FUN_8009a1f0 (simple dispatch)"),
    0x80098100: ("GPU_SetRegClamped", "Sets GPU register with clamp: param clamped 0-0x3F, writes to DAT_800ac604+0x1AA"),
    0x80096370: ("CD_SetFlag28", "CD flag setter: DAT_80105d28 = param_1"),
    0x80096380: ("CD_SetFlagCD8", "CD flag setter: DAT_80105cd8 = 1"),

    # -- CD / BIOS / MDEC wrappers (batch 18) --
    0x80096390: ("CD_ClearFlagCD8", "CD flag clearer: DAT_80105cd8 = 0"),
    0x800963A0: ("CD_SetValidatedParam", "Validated setter: clamps param to [1,0x18), sets DAT_80105cec, returns value or -1"),
    0x800963D0: ("CD_ReleaseSlot", "CD slot release: checks slot < 0x10, calls FUN_80097d90, clears, decrements counter"),
    0x8009BD4C: ("BIOS_InitSequence2", "BIOS init sequence 2: calls indirect + BIOS_B0 + init + clears global"),
    0x8009BE34: ("BIOS_Delay", "BIOS delay: spins 9 iterations, zeros MDEC word, returns 0"),
    0x8009BF20: ("BIOS_CallIndirect", "BIOS indirect call: calls function ptr at DAT_80105f30"),
    0x8009BF34: ("BIOS_CallIndirect2", "BIOS indirect call 2: calls function ptr at DAT_80105f34"),
    0x8009D044: ("Game_SwapGlobal", "Global swapper: saves old DAT_8010621c, sets new, returns old"),
    0x800873BC: ("MDEC_WaitReady", "MDEC busy-wait: polls bit 1 at 0x800ABE9C+4 until set"),
    0x80087E64: ("MDEC_CallbackDispatch2", "MDEC callback variant 2: calls funct ptr + dispatch with 2 params via FUN_80088908"),

    # -- Audio / MDEC wrappers (batch 19) --
    0x80091050: ("Audio_InitChannel", "Audio channel init: looks up 0xB0-stride struct, zeros fields, calls init function"),
    0x80091EC0: ("Audio_SetChannelPos", "Audio channel position: sets channel[0x58/0x5A] or calls active setter via FUN_80095530"),
    0x80091F50: ("Audio_SetChannelPos2", "Audio channel position variant 2: same pattern but simplified index"),
    0x80091FB8: ("Audio_SetChannelPos3", "Audio channel position variant 3: same as SetChannelPos pattern"),
    0x800922A0: ("Audio_SetChannelParam", "Audio channel param: sets channel[0x48/0x9C] if flags 4 and 0x100 are clear"),
    0x800909A0: ("Audio_Init", "Audio init wrapper: calls FUN_80090750(0)"),
    0x8009C800: ("MDEC_Init", "MDEC init wrapper: calls FUN_8009ca60"),
    0x8008DDA0: ("MDEC_Cmd1", "MDEC command 1: calls FUN_8008dc00 with param"),
    0x8008DD7C: ("MDEC_Cmd2", "MDEC command 2: calls FUN_8008dc00 with param (same as Cmd1)"),
    0x8008CCB4: ("MDEC_Process", "MDEC process wrapper: calls FUN_8008d110"),

    # -- Audio / MDEC wrappers (batch 20) --
    0x800889F4: ("MDEC_CheckState", "MDEC state check: entity[0x53]/[0x46], calls funct ptr at DAT_800abe3c"),
    0x80089788: ("MDEC_SetFlag", "MDEC flag setter: DAT_800abef0 = 1 if zero"),
    0x8008E0C0: ("Audio_GetChannelByte", "Audio channel getter: returns byte at channel[param2]+0x14 from struct ptr table"),
    0x8008E860: ("Audio_ChannelCmd", "Audio channel command: looks up struct, calls FUN_80095d10 with channel data"),
    0x8008E930: ("Audio_ChannelCmd2", "Audio channel command variant 2: same pattern, different params"),
    0x8008DE74: ("Audio_SetVolume", "Audio volume setter: calls SetChannelParam(-vol), toggles flags 0x20/0x10"),
    0x8008FB60: ("Audio_ChannelPlay", "Audio channel play: reads byte, advances ptr, calls FUN_800952cc"),
    0x8008EA20: ("Audio_ChannelParam", "Audio channel param: branches on param3 < 0x40, calls different handlers"),
    0x80091B18: ("Audio_Cmd1", "Audio command 1: calls FUN_80091970(param1, param2)"),
    0x80091AF0: ("Audio_Cmd2", "Audio command 2: calls FUN_80091970(param1, 0)"),

    # -- Audio / GPU / CD wrappers (batch 21) --
    0x80092BF0: ("Audio_GPU_Cmd0", "Audio GPU command with param 0: calls FUN_80098150(0)"),
    0x80092C10: ("Audio_GPU_Cmd1", "Audio GPU command with param 1: calls FUN_80098150(1)"),
    0x80094108: ("Audio_CD_Cmd", "Audio CD command: calls FUN_80093ebc(0x21, param1, param2, param3)"),
    0x800931A0: ("Audio_ClearFlag", "Audio flag clearer: DAT_80105c90 = 0"),
    0x800931B0: ("Audio_SetFlag", "Audio flag setter: DAT_80105c90 = 2"),
    0x8007C5E4: ("GPU_DrawDigit", "Digit draw: calls FUN_8007c2a4 with DAT_800bf9ca+1 | 0x80, param 3"),
    0x80095420: ("CD_ReadWord", "CD word reader: same pattern as ReadByte but reads word from buffer"),
    0x80083FF8: ("GTE_Init", "GTE init: enables coprocessor, sets IR1=0x155, IR2=0x100, SZ0=1000"),
    0x80090B98: ("Audio_ClearSlot", "Audio slot clearer: zeros word at DAT_800ac448 + index*0x10 if index < 3"),
    0x80090A0C: ("Audio_Toggle", "Audio toggle: flips DAT_800ac438, calls callback ptr on 1->0 transition"),

    # -- GPU / Audio / CD wrappers (batch 22) --
    0x80098DB0: ("CD_Cmd_CC_CD", "CD command with codes 0xCC,0xCD: calls FUN_80097e40"),
    0x80092048: ("Audio_Cmd3", "Audio command 3: calls FUN_80095a9c with combined channel ID"),
    0x8007C620: ("GPU_DrawDigit1", "Digit draw variant 1: calls FUN_8007c2a4 with DAT_800bfa21 | 0x80"),
    0x8007C654: ("GPU_DrawDigit2", "Digit draw variant 2: calls FUN_8007c2a4 with DAT_800bfa2a | 0x80"),
    0x8007E998: ("GPU_DrawSprite98", "Sprite draw with code 0x98: calls FUN_8007e8dc"),
    0x80081768: ("GPU_InitStruct", "GPU struct init: Mem_Copy 0x5C bytes from DAT_800a59b0 template"),
    0x800909C0: ("Audio_CallCallbacks", "Audio callback chain: calls DAT_800ac430 then DAT_800ac42c function ptrs"),
    0x80091910: ("Audio_EnableChannel", "Audio channel enable: sets channel[0x14]=1, clears flag bit 3"),
    0x8009BBEC: ("CD_GetStatus", "CD status getter: returns DAT_800acf44"),
    0x8009CC14: ("CD_GetReg", "CD register getter: returns *DAT_800ad098"),

    # -- CD / GPU / GTE wrappers (batch 23) --
    0x80099478: ("CD_IsReady", "CD ready check: returns DAT_800ac638 != 1"),
    0x80099450: ("CD_SetReady", "CD ready setter: DAT_800ac638 = (param_1 != 1)"),
    0x8008996C: ("CD_Cmd_20", "CD command with 0x20: calls BIOS stub with 0xF0000003, 0x20"),
    0x80089994: ("CD_Cmd_40", "CD command with 0x40: calls BIOS stub with 0xF0000003, 0x40"),
    0x800899BC: ("CD_Cmd_40b", "CD command with 0x40 variant: same as Cmd_40"),
    0x80081C94: ("GPU_InitStruct2", "GPU struct init: Mem_Copy 0x14 bytes from DAT_800a5a0c template"),
    0x80082CE0: ("GPU_Cmd3", "GPU command wrapper: calls FUN_80082d04 with third param=0"),
    0x80084660: ("GTE_LoadMatrix5", "GTE matrix load: sets 5 GTE regs (R11R12 through TRZ) from array"),
    0x80084690: ("GTE_LoadTranslation", "GTE translation load: sets TRX/TRY/TRZ from struct at offset 0x14"),

    # -- MDEC / Debug wrappers (batch 24) --
    0x800887BC: ("MDEC_SetupCallback", "MDEC callback setup: checks ready, sets entity[0x46]=1, assigns 2 callbacks"),
    0x80088908: ("MDEC_SetupCallback2", "MDEC callback setup variant: sets callbacks + entity[0x51/0x52/0x53] params"),
    0x80087A40: ("MDEC_ClearFlag", "MDEC flag clearer wrapper: calls FUN_8008695c"),
    0x80087A60: ("MDEC_InitHW", "MDEC hardware init: zeros flag, enables IRQ, sets up DMA, calls callbacks"),
    0x80087A80: ("MDEC_Start", "MDEC start: disables IRQ, BIOS stubs, enables IRQ"),
    0x8008695C: ("MDEC_GetAndClearFlag", "MDEC flag get+clear: returns DAT_800abea0 then sets to 0"),
    0x80086970: ("MDEC_InitHWImpl", "MDEC hardware init impl: IRQ enable, DMA setup, callback chain"),
    0x80086A3C: ("MDEC_StartDMA", "MDEC DMA start: IRQ disable, BIOS call, IRQ enable"),
    0x8009C9D0: ("MDEC_SetupTransfer", "MDEC transfer setup: syncs in, sets DMA regs at 0x800AD09C-06C"),
    0x8009A730: ("Debug_Printf", "Debug printf: calls FUN_8009a770(1, fmt, args) for formatted output"),

    # -- Audio / CD wrappers (batch 25) --
    0x80083AD0: ("CD_RegisterCallback", "CD event callback register: calls FUN_80085b80(2, FUN_80082fb4)"),
    0x8008E790: ("Audio_ChannelSetParam3", "Audio channel param set: reads struct, calls FUN_80095d10, sets param at offset"),
    0x8008EE80: ("Audio_ResetChannel", "Audio channel reset: clears GPU flags, resets struct fields 0x18/0x19/0x60/0x27"),
    0x8008EAD0: ("Audio_AllocChannel", "Audio channel alloc: calls FUN_80092a70 + FUN_80090160, stores result at [0x90]"),
    0x8008EDA0: ("Audio_NoteOn", "Audio note on: sets channel[0x18]=param3, increments [0x1E], stores voice at [0x90]"),
    0x8008DEF4: ("Audio_SetVolume2", "Audio volume set variant 2: same as SetVolume (duplicate)"),
    0x8008DDD0: ("Audio_SetVolume3", "Audio volume set variant 3: same as SetVolume (duplicate)"),
    0x8008E390: ("Audio_ProgramChange", "Audio program change: reads byte, increments ptr, sets [0x26], stores voice at [0x90]"),
    0x80090010: ("Audio_ChannelDispatch", "Audio channel dispatch: looks up struct, branches on flag to FUN_80093ebc or FUN_800939a0"),

    # -- Sys / GTE / Audio / GPU wrappers (batch 26) --
    0x8009D06C: ("Sys_RegisterEvent3", "Event register with code 3: calls FUN_80085b80(3, callback)"),
    0x8009C8BC: ("Sys_RegisterEvent1", "Event register with code 1: calls FUN_80085b80(1, callback)"),
    0x8009C898: ("Sys_RegisterEvent0", "Event register with code 0: calls FUN_80085b80(0, callback)"),
    0x800910F0: ("Audio_Cmd4", "Audio command wrapper: calls FUN_80091120(param1, param2)"),
    0x800846D0: ("GTE_SetScaleZ", "GTE scale Z setter: sets SZ3=param1<<16, SZ2=param2<<16 via cop control"),
    0x80089160: ("MDEC_InitCallbacks", "MDEC callback table init: sets function ptrs at 0x800ABE50/54/58"),
    0x80081CC8: ("GPU_GetStatusBit", "GPU status bit getter: calls GPU func via ptr table, returns top bit"),
    0x8009BDFC: ("BIOS_MDECInit", "BIOS MDEC init: disables IRQ, calls BIOS stub, enables IRQ"),
    0x8008E040: ("Audio_InitSequence", "Audio init sequence: calls 4 init functions in order"),
    0x80089620: ("MDEC_SetParam", "MDEC param setter: stores param + scratchpad value at 0x801026E0/E4"),

    # -- Menu / BIOS / GPU / Math (batch 27) --
    0x8007F078: ("Menu_DrawOptions", "Menu options draw: renders text strings via FUN_80078988 + sprites via FUN_80079324"),
    0x8009BB7C: ("BIOS_Seq3", "BIOS sequence 3: disable IRQ, BIOS_B0, BIOS_B0(0), enable IRQ"),
    0x8009C620: ("CD_ResetWithOption", "CD reset with option: optionally calls FUN_80085b20, then CD_ResetState"),
    0x8008D0F0: ("CD_SetParams", "CD param setter: stores 3 params at 0x80102720/FC/1C"),
    0x80092BB0: ("Audio_CmdWithParam", "Audio command with param: sets struct + 0x10 flag, calls FUN_80098330"),
    0x80092A30: ("Audio_CmdWithParam2", "Audio command with param 2: sets struct + 8 flag, calls FUN_80098330"),
    0x80081504: ("GPU_DrawPrimitive", "GPU draw primitive: reads type from struct+3, dispatches via function ptr table"),
    0x8009CA60: ("MDEC_SetupOut", "MDEC output setup: syncs out, sets DMA regs at 0x800AD09C/078/070/074"),
    0x80077768: ("Math_CompareAngle", "Angle comparison: checks if (a-b-0x400)&0xFFF is in range, with direction flag"),
    0x80081458: ("GPU_SetupOT", "GPU ordering table setup: calls GPU funcs, sets up OT base address"),

    # -- Entity / GPU / Audio (batch 28) --
    0x80070724: ("Entity_SetCombatFlags", "Sets combat flags: entity[0xBF] + 3 globals at 0x800BF830/31/43"),
    0x800803DC: ("GPU_DispatchDraw2", "GPU draw dispatch: reads word, calls draw funcs for low and high 16 bits"),
    0x80075A30: ("Audio_InitVolume", "Audio volume init: sets stereo/pan values at 0x800BE1FC-0A, calls init, clears"),
    0x80070798: ("Entity_SetStateCombat", "Entity combat state: entity[6]=0, entity[5]=3"),
    0x80098CE0: ("CD_CheckDevice", "CD device check: calls FUN_800982a0, sets DAT_800ac59c flag, returns status"),
    0x8008EF40: ("Audio_SeqCmd", "Audio sequence command: calls FUN_80092420 then FUN_80092c30"),
    0x80097E40: ("CD_SPU_Cmd", "CD/SPU command: branch on DAT_800ac5f0 flag, selects buffer for transfer"),

    # -- Batch 29: GTE sprite projection variants --
    0x8007778C: ("GTE_ProjectSprite2", "GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c"),
    0x80077F3C: ("GTE_ProjectSprite3", "GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=3, calls FUN_8007712c"),
    0x800777FC: ("GTE_ProjectSprite4", "GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=2, calls FUN_8007712c"),
    0x80077870: ("GTE_ProjectSprite5", "GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=1, calls FUN_8007712c"),
    0x80077ACC: ("GTE_ProjectSprite1", "GTE sprite projection: sets _DAT_1f800080=1, _DAT_1f800084=4, calls FUN_8007712c"),
    0x800778E4: ("GTE_ProjectSprite6", "GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c"),
    0x80077958: ("GTE_ProjectSprite7", "GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c"),
    0x800779D0: ("GTE_ProjectSprite8", "GTE sprite projection: sets _DAT_1f800080=0, _DAT_1f800084=0, calls FUN_8007712c"),

    # -- Batch 30: Entity / GPU / GTE / Audio misc --
    0x8007AAE8: ("Entity_AllocFromFreeList", "Allocs entity from free list at _DAT_800ed098, pops head, returns pointer"),
    0x8007C8C8: ("GPU_SetupPrimitive", "GPU primitive setup: sets type byte at +3, encodes color from param bits"),
    0x8007B38C: ("Entity_InitGlobals2", "Entity globals init: copies 0x800FB166-167 to 0x800BFE4C-4E, sets related flags"),
    0x8006E1C0: ("Entity_CopyStateData", "Entity state data copy: saves camera target at 0x800E806C/F to scratchpad"),
    0x8007074C: ("Entity_SetCombatFlagsEx", "Extended combat flags: calls SetCombatFlags + 3 extra params at 0x800BF824/28"),
    0x8006E1E4: ("Camera_CheckEntity", "Camera entity check: tests DAT_800e7e82 flag, updates target entity pointer"),
    0x8006BD20: ("Entity_CheckCondition", "Entity condition check: tests entity[2] and game state for behavior activation"),
    0x80079464: ("Engine_InitState", "Engine state init: resets frame counter, sets globals, zeros sprite flags"),
    0x80077EBC: ("Sprite_Alloc1", "Sprite allocator: increments counter, allocs struct, increments again"),
    0x80077E7C: ("Sprite_Alloc2", "Sprite allocator variant 2: different counter at _DAT_1f800144"),
    0x80077EFC: ("Sprite_Alloc3", "Sprite allocator variant 3: different counter at _DAT_1f80015c"),

    # -- Batch 31: Audio / GPU wrappers --
    0x80080D64: ("GPU_SetQueueDepth", "GPU queue depth setter: DAT_800a59a2 = param, calls callback if non-zero"),
    0x80080E74: ("GPU_DrawSyncCallback", "GPU draw sync: prints debug if queue depth > 1, calls GPU func via ptr table"),
    0x80090700: ("Audio_SetupCmd", "Audio command setup: builds 2-word cmd with param*0x81, sends via struct"),
    0x800943C0: ("Audio_ClampParam", "Audio param clamp: clamps DAT_80105d09 to 0x7F, multiplies by 0x81"),
    0x80092E00: ("Audio_CheckDevice", "Audio device check: if param < 0x18, calls FUN_8009a170, else returns 0"),

    # -- Batch 32: MDEC / CD / BIOS --
    0x8009C820: ("MDEC_SyncDispatch", "MDEC sync dispatch: param=0 calls SyncOut, else calls SyncIn (swapped)"),
    0x8009BBFC: ("BIOS_Seq4", "BIOS sequence 4: BIOS_ZeroRegion + IRQ off + BIOS_ResetRegion + IRQ on + B0 + MDEC init"),
    0x8009BC8C: ("BIOS_Seq5", "BIOS sequence 5: same as Seq4 pattern with different MDEC setup call"),
    0x8009BD84: ("BIOS_MDECSetup", "BIOS MDEC setup: IRQ off, sets MDEC callbacks at 0x80105F1C/20, IRQ on"),
    0x80086764: ("MDEC_CheckDMA", "MDEC DMA check: tests DAT_800abe98 flags, calls FUN_80086a80 if active"),
    0x8008CCE0: ("CD_InitBuffer", "CD buffer init: zeros 4 ptrs at 0x80102704-14, calls CD_ClearBuffer"),
    0x8008F120: ("Audio_Cmd5", "Audio command 5: builds param stack, calls FUN_80092420 with 3 params"),
    0x8008F090: ("Audio_Cmd6", "Audio command 6: builds param stack, calls FUN_80092420 with 2 params"),
    0x80099150: ("CD_SetupTransfer", "CD transfer setup: clamps size to 0x7EFF0, calls FUN_80097414, checks flag"),
    0x80099310: ("CD_CheckTransfer", "CD transfer check: validates address range, sets up FIFO via FUN_80097540"),
    0x800834A0: ("GPU_CheckDMA", "GPU DMA check: reads timer, sets timeout at DAT_800a5adc, returns status"),
    0x80092A70: ("Audio_SetParam", "Audio param setter: stores value at 0x80105BF8, scales param to 0-0x7FFF range"),
    0x80095A9C: ("Audio_LookupChannel", "Audio channel lookup: DAT_80105d0c = channel ID, indexes struct table"),
    0x8009440C: ("Audio_CalcValue", "Audio value calc: computes DAT_80105d04 + offset*0x10, scales result"),

    # -- Batch 33: Entity / GPU / CD / Audio (40 funcs) --
    0x8007B3F4: ("Entity_SaveGlobals", "Entity globals save: reverses InitGlobals2, writes back 0x800BFE4C-F to 0x800FB160-7"),
    0x800753D4: ("CD_ReadSeek", "CD read + seek: calls CD_Cmd1 for read, then FUN_80096980 for seek"),
    0x80083C70: ("Entity_SetFlagBit1", "Entity flag bit 1 set/clear: entity[7] bit 1 toggled by param_2"),
    0x80077A4C: ("GTE_ProjectSprite9", "GTE sprite projection variant 9: _DAT_1f800080=1, _DAT_1f800084=0"),
    0x8009C85C: ("MDEC_CheckStatus", "MDEC status check variant: reads CD_GetReg, extracts status bits"),
    0x80096B78: ("CD_InitIRQ", "CD init with IRQ: sets flag, enables IRQ, registers callback FUN_80097030"),
    0x8006B0D8: ("Entity_SetState4", "Entity state set type 4: entity[0x2B]=2, entity[1]=0, entity[4]=2 if conditions met"),
    0x800552EC: ("Entity_CheckAction", "Entity action check: tests DAT_1f800230 + entity[0x181] + input flags"),
    0x8009C1FC: ("BIOS_CopyData2", "BIOS data copy 2: copies words from DAT_8009c060 to DAT_0000df80"),
    0x80079528: ("String_Length", "String length: counts chars until null terminator"),
    0x80082220: ("GPU_EncodeDrawMode", "GPU draw mode encoder: builds GP0(0xE1) cmd from tpage/display params"),
    0x80075CEC: ("Audio_ClampVolume", "Audio volume clamp: negative→abs, positive→clamp to 0x7FFF"),
    0x800861BC: ("Mem_Zero", "Memory zero: memset param_2 bytes to 0 starting at param_1"),
    0x80042690: ("Entity_SetupSpawn", "Entity spawn setup: reads position data, sets entity pos at 0x2C/0x32/0x36"),
    0x8008238C: ("GPU_EncodeTexture", "GPU texture page encoder: builds TSB from CLUT coords + texpage settings"),
    0x80081690: ("GPU_DrawEnv", "GPU draw environment: sends DrawEnv cmd with debug, decrements queue"),
    0x800815D0: ("GPU_PutDrawEnv", "GPU put draw environment: sends PutDrawEnv cmd, returns ptr"),
    0x80070650: ("Entity_OffsetX", "Entity X offset: entity[0x2E] += 8 if entity[0x60] != 0"),
    0x80086320: ("Mem_Zero2", "Memory zero variant 2: memset to 0 (duplicate)"),
    0x800865C8: ("Mem_Zero3", "Memory zero variant 3: memset to 0 (duplicate)"),
    0x8008CC30: ("CD_SendCmdFlags", "CD send command with flags: calls CD_SendCmdRetry2(0xE, data, 0)"),
    0x80083AF8: ("Mem_Set", "Memory set: fills param_3 bytes with value param_2 starting at param_1"),
    0x8008CE4C: ("CD_InitFileLoad", "CD file load init: calls FUN_8008a110, allocates via FUN_8008a00c"),
    0x80040DE0: ("Entity_InitScriptData", "Entity script data init: stores sprite/script ptrs at entity[0x6C/0x72/0x74]"),
    0x8008CDC0: ("CD_AllocBuffer", "CD buffer alloc: assigns 0x20-byte slot from _DAT_80102728 pool"),
    0x80084220: ("GTE_MulMatrix", "GTE matrix multiply: loads matrix, calls copFunction(0x486012), reads result"),
    0x800708CC: ("Entity_InitCombat", "Entity combat init: entity[0x44]=0x400, saves pos at _DAT_800bf826, sets flag bit 5"),
    0x8008CEB0: ("CD_SetupFileLoad", "CD file load setup: stores 5 params at 0x80102700-18, sets flags"),
    0x8006E3F4: ("Camera_Mode5", "Camera mode 5: inits, conditionally sets entity[0x66] bit 1, commits"),
    0x8008A00C: ("CD_CalcSector", "CD sector calculator: (offset+0x96)/0x4B = sector, remainder = offset"),
    0x800520E0: ("Entity_InitSystem", "Entity system init: calls InitGlobals2, resets flags at 0x800BF4FA/ECF4A-E"),
    0x80098D30: ("CD_SPU_Write", "CD/SPU write: writes param to DAT_800ac604+0x184 if buffer empty or bit 1"),
    0x8009A600: ("String_Compare", "String compare: compares two null-terminated strings, returns difference"),
    0x8006CE74: ("Math_Clamp", "Math clamp: clamps value to range [-param2, +param2]"),
    0x8006CDCC: ("Entity_DecrementTimer2", "Entity timer decrement: entity[0x84]--, updates _DAT_1f8000d0/d2"),
    0x80083DB0: ("GPU_SetupPrimitive2", "GPU primitive setup 2: sets type=2, encodes draw mode from param_2"),
    0x80099370: ("CD_SetMode", "CD mode setter: sets DAT_800ac620=0 or 1 based on param, zeros counter"),
    0x8008F260: ("Audio_SetupVoice", "Audio voice setup: extracts bits from params, stores in voice struct"),

    # -- Batch 34: Misc helpers (40 funcs) --
    0x8007B2C0: ("Pad_InitConfig", "Pad config init: sets scratchpad input flags 0x8000/4000/2000/1000 based on param"),
    0x8004EF8C: ("String_FindChar", "String search: finds nth occurrence of char -6 (0xFA) in string"),
    0x8004D7EC: ("Math_Div8Round", "Divide by 8 with rounding: (param+7)>>3 + param"),
    0x80069688: ("Entity_DispatchBehavior", "Entity behavior dispatch by type: reads entity[2], looks up table, calls handler"),
    0x800450BC: ("Texture_LoadData", "Texture data load: DMA transfer from 0x800A3ED8 table, switches on param_2 mode"),
    0x8008F930: ("Audio_SetVoice", "Audio voice set: stores params in voice struct via FUN_80092420"),
    0x80050A0C: ("Engine_ResetState", "Engine state reset: zeros 5 globals, sets DAT_1f800235=2"),
    0x8008F9D0: ("Audio_SetVoice2", "Audio voice set variant 2: same pattern, different stack layout"),
    0x80082240: ("GPU_CheckQueueSpace", "GPU queue space check: validates param vs DAT_800a59a4 capacity"),
    0x80041F34: ("Entity_CheckLifecycle", "Entity lifecycle check: tests entity[5]==3, entity[0x42]==-1 for completion"),
    0x8006625C: ("Entity_Behavior_TimedSFX", "Entity timed SFX: decrements timer, plays SFX based on entity[0x16E] counter"),
    0x8009AE10: ("Mem_CopyN", "Memory copy N bytes: strncpy-like, copies up to param_3 bytes from param_2 to param_1"),
    0x80086288: ("IRQ_Dispatch", "IRQ handler dispatch: iterates callback table at 0x800ABDC0, calls active handlers"),
    0x80080ED4: ("GPU_SetDisplayMask", "GPU display mask setter: sends SetDispMask cmd, calls GPU via ptr table"),
    0x8008EFD0: ("Audio_SeqCmd2", "Audio sequence command 2: calls FUN_80092420 with 4 params"),
    0x80082C28: ("GPU_SendPrimList", "GPU primitive list send: iterates param_2 prims, sends each via DMA"),
    0x8009BB10: ("BIOS_InitIRQ", "BIOS IRQ init: calls BIOS_B0, IRQ off, checks CD status, enables"),
    0x8008CD40: ("CD_CloseFile", "CD file close: dispatches on DAT_800abfdc flag, calls close or event handlers"),
    0x800822D8: ("GPU_CheckQueueSpace2", "GPU queue space check variant 2: same pattern, returns 0 or 1"),
    0x80052720: ("Entity_AngleToTarget", "Entity angle to target: calc atan2 from entity pos to target pos"),
    0x80043858: ("Entity_DispatchSprite", "Entity sprite dispatch: calls FUN_8006ff10, stores result in globals"),
    0x80092EA0: ("Audio_ReadDevice", "Audio device read: if param<0x18, calls FUN_8009a170 to read data"),
    0x80070F00: ("Entity_SetPosFromGlobals", "Entity position from globals: copies _DAT_1f800160-4 to entity pos at 0x2E/0x32"),
    0x8008DA2C: ("MDEC_QueueCmd", "MDEC command queue: appends param_2 words to MDEC cmd buffer at param_1"),
    0x80049760: ("Collision_CalcAngle", "Collision angle calc: atan2 on _DAT_1f8001b4-b8, stores at _DAT_1f8001a0"),
    0x800506D0: ("Screen_Clear", "Screen clear/fill: writes zeros to 0x801FE000-0x801FFFFE (framebuffer region)"),
    0x80097760: ("CD_SetupFIFO", "CD FIFO setup: sets param_2=0x40001010, DAT_800ac668=0, configures transfer"),
    0x80083BF0: ("GPU_InitPacket", "GPU packet init: stores 3 params + zeros at offset 4-7 in packet struct"),
    0x80054E24: ("Entity_LoadAnimDispatch", "Entity anim load dispatch: branches on param_2 (0,1,2+) for anim loading path"),
    0x8004DD90: ("UI_UpdateElement", "UI element update: calls FUN_80049e54, updates pos from entity[0x42] + offset"),
    0x800263E8: ("Overlay_LookupString", "Overlay string lookup: reads string ptr from table at 0x8009D414 by game state"),
    0x8008F7A0: ("Audio_VoiceParam", "Audio voice param: stores byte params in voice struct"),
    0x800993A0: ("CD_SyncCheck", "CD sync/ready: checks flags, calls FUN_80080840, updates DAT_800ac594"),
    0x800499E8: ("Overlay_LoadFile", "Overlay file load: reads BIN path, calls FUN_8008b8f0 to load"),
    0x8006E0F0: ("Camera_Mode6", "Camera mode 6: full sequence init + pos + calc + smoothY + commit"),
    0x800713F8: ("Entity_InitScript", "Entity script init: entity[6]=0, calls FUN_80040cdc to load script data"),

    # -- Batch 35: Audio / CD / GTE / Entity (38 funcs) --
    0x80075240: ("Audio_InitCD", "Audio CD init: calls Video_InitDecoder, sets volume, calls init sequence"),
    0x8004EDDC: ("UI_DrawElement", "UI element draw: builds 6-word primitive from params, draws at position"),
    0x80052144: ("Entity_SetRenderMode", "Entity render mode setter: sets entity[0xB] flags based on param (0x80/0x20 or 0x10/0x40)"),
    0x8008732C: ("MDEC_WaitDMA", "MDEC DMA wait: polls DAT_800abe9c word[4] bit until clear, checks timeout"),
    0x8008F420: ("Audio_SetVoice3", "Audio voice set variant 3: stores extended params in voice struct"),
    0x80092E3C: ("Audio_WriteDevice", "Audio device write: if param<0x18, stores short at DAT_80104c30 table"),
    0x80075448: ("CD_LoadSegment", "CD level segment load: loads param-sized segment into CD buffer, returns offset"),
    0x8008F4D0: ("Audio_SetVoice4", "Audio voice set variant 4: different stack layout for voice params"),
    0x8004EFC0: ("UI_DrawTextLine", "UI text line draw: iterates string, draws each char via FUN_8004ea4c"),
    0x8008B818: ("CD_PollSync", "CD poll sync: spins on DAT_800ac280 flag, waits for FUN_8008a190 completion"),
    0x8005082C: ("Game_InitSaveData", "Game save data init: copies globals 0x800EA0D5-7 to 0x800BF8A4-6"),
    0x80084520: ("GTE_TransformVec", "GTE vector transform: loads matrix from param_2, transforms param_1 vector"),
    0x80052694: ("Entity_AdvanceAnim", "Entity animation advance: decrements entity[0x44] counter, branches on threshold"),
    0x80083EBC: ("Math_Sin", "Math sin lookup: piecewise sin from table at 0x800A5AF0, handles quadrants"),
    0x8009B940: ("Mem_Move", "Memory move: copies up to param_3 bytes from param_2 to param_1 (non-overlapping)"),
    0x8005376C: ("Entity_CheckStateType", "Entity state type check: switch on entity[0x176] returning entity[0x44] state"),
    0x8008F2BC: ("Audio_SetVoiceFlags", "Audio voice flags: extracts bit 0x8000 from params, stores in voice struct"),
    0x80054198: ("Entity_ResetState", "Entity state reset: clears entity[0x44/0x45/0x182] if conditions met"),
    0x80074B44: ("Audio_InitSPU", "Audio SPU init: iterates _DAT_800bed78 slots, sets ADSR/volume per slot"),
    0x8009A5B0: ("String_Copy", "String copy: copies null-terminated string from param_2 to param_1"),
    0x8008B0C8: ("CD_Reset", "CD reset: cycles DAT_800ac280, waits for bit clear, resets controller"),
    0x8008F1B0: ("Audio_SetVoice5", "Audio voice set variant 5: stores voice params with byte access"),
    0x80026A1C: ("Entity_UpdateChild", "Entity child update: decrements entity[8], if expired calls callback entity[0xC]"),
    0x8007413C: ("Entity_SpawnSFX", "Entity SFX spawn: allocs child with callback, sets type 4, stores SFX ID"),
    0x80095B90: ("Audio_ScanChannel", "Audio channel scan: iterates DAT_80105cec channels, calls callback"),
    0x80084080: ("Math_SqrtGTE", "Math sqrt via GTE: sets GTE reg, reads result, handles special case 0x20"),
    0x8008C508: ("CD_AdvanceSeek", "CD seek advance: increments DAT_800ac2ec by stride, decrements counter"),
    0x8008F360: ("Audio_SetVoice6", "Audio voice set variant 6: stores voice params, different byte layout"),
    0x800837A4: ("GPU_StoreImage", "GPU store image: sends StoreImage cmd, waits for DMA completion"),
    0x80092310: ("Audio_KeyOn", "Audio key on: checks slot state, calls FUN_800962b0, triggers voice"),

    # -- Batch 36: Entity / CD / Audio / Math (30 funcs) --
    0x80064524: ("Entity_State_Jump", "Entity jump state: entity[6]=2, calls FUN_80053d0c, sets velocity, advances"),
    0x8008CAFC: ("CD_CheckTimeout", "CD timeout check: reads timer, checks against DAT_800ac300+0x4B0, handles timeout"),
    0x800875DC: ("MDEC_ProcessData", "MDEC data processor: checks DAT_800abe84, reads data via callback entity[0x3C]"),
    0x8008F580: ("Audio_SetVoice7", "Audio voice set variant 7: extended voice parameter storage"),
    0x80089640: ("MDEC_WaitVSync", "MDEC VSync wait: polls _DAT_1f801120 vs _DAT_801026e0, handles timeout"),
    0x80091810: ("Audio_AllocChannel2", "Audio channel alloc variant 2: looks up channel table, calls init"),
    0x8008F850: ("Audio_SetVoice8", "Audio voice set variant 8: stores pan/volume in voice struct"),
    0x8008F630: ("Audio_SetVoice9", "Audio voice set variant 9: stores ADSR params in voice struct"),
    0x8009C784: ("CD_SetRegBit", "CD register bit set/clear: toggles bit 0x08000000 on param_1 based on param_2"),
    0x80097D90: ("CD_FlushBuffer", "CD buffer flush: iterates DAT_800ac66c, clears active entries"),
    0x8008B620: ("CD_InitParams", "CD init params: sets 0x800AC280-2B8 defaults (mode, speed, filter)"),
    0x800962B0: ("CD_CheckSlot", "CD slot check: validates param<0x10, checks slot state == 1"),
    0x8007B04C: ("Entity_UpdateLoop2", "Entity update loop variant 2: iterates inactive list from DAT_800fb168"),
    0x80024D34: ("Entity_DrawSpriteDispatch", "Entity sprite draw dispatch: reads sprite type, calls draw handler"),
    0x80049800: ("Collision_Process", "Collision result processor: reads _DAT_1f8001e0, updates entity position"),
    0x80039034: ("Menu_UpdateCursor", "Menu cursor update: reads table at 0x800A27AC, updates cursor pos"),
    0x8003A1E4: ("Entity_DebugText", "Entity debug text: entity[8] bit dispatch, renders debug overlay text"),
    0x800929BC: ("Audio_Lock", "Audio lock: sets _DAT_80104c24=1, returns -1 if already locked"),
    0x800714C0: ("Entity_Behavior_Jump", "Entity jump behavior: entity[6]=0 state, sets velocity, advances on ground contact"),
    0x80052198: ("Entity_SetCollisionFlag", "Entity collision flag: builds byte from param, stores at param_2"),
    0x800776F8: ("Math_ApproachAngle", "Angle approach: steps param_1 toward param_2 by ±param_3, handles wrap"),
    0x800952CC: ("Audio_KeyOn2", "Audio key on variant 2: calls CD_CheckSlot, sets voice params, triggers"),
    0x80096980: ("CD_SeekCmd", "CD seek command: validates slot, calls FUN_800963d0 if active"),

    # -- Batch 37: CD / Entity / GTE / Audio (25 funcs) --
    0x80089A3C: ("CD_Close", "CD close/finalize: if param==2 calls FUN_8008b28c, else syncs with retry"),
    0x8005B5E4: ("Entity_LookupType", "Entity type lookup: switch on entity[2] returns sprite/animation mode"),
    0x8008831C: ("MDEC_StateMachine2", "MDEC state machine variant 2: entity[0x46] state 3/4 calls MDEC funcs"),
    0x800788AC: ("Engine_UpdateSprites", "Engine sprite update: checks DAT_1f80019a flag, decrements counter, updates globals"),
    0x8006918C: ("Entity_CheckDamage", "Entity damage check: tests entity[0x46] flags + global DAT_800e7edf condition"),
    0x80050738: ("Screen_InitDisplay", "Screen display init: sets up 2 framebuffers at 0x800EA0BC/EC12C with 320x240"),
    0x800847B0: ("GTE_StoreMatrix", "GTE matrix store: reads GTE regs, stores to param_2 array (+translation)"),
    0x8009A170: ("CD_ReadReg", "CD register read: reads ushort from DAT_800ac604 + param*0x10"),
    0x800727D4: ("Entity_SpawnChecked", "Entity spawn with check: calls FUN_80040a58, then AllocByPoolId if valid"),
    0x8002313C: ("Entity_DistanceCheck", "Entity distance check: computes 2D distance between two entity positions"),
    0x800421CC: ("Entity_CheckEvent", "Entity event check: tests entity[0x72] and global DAT_800e806e for event trigger"),
    0x80074E48: ("Audio_ReleaseChannel", "Audio release channel: calls Audio_Cmd2 for channel at DAT_800bed80"),
    0x80068610: ("Entity_DrawChild", "Entity draw child: updates child entity pos from parent with offset"),
    0x80097540: ("CD_AlignDMA", "CD DMA alignment: divides param by DAT_800ac630, aligns for DMA transfer"),
    0x80022D08: ("Entity_BehaviorList", "Entity behavior list: checks entity type/flags, dispatches to state machine"),
    0x8003990C: ("Save_DrawText", "Save menu text draw: renders save slot labels from string table"),
    0x800793C4: ("String_TableLookup", "String table lookup: searches string table for matching entry"),

    # -- Batch 38: MDEC / CD / GTE / Entity (17 funcs) --
    0x80087AEC: ("MDEC_SetupDecode", "MDEC decode setup: checks frame flags, sets up decode params"),
    0x8009A540: ("String_Compare2", "String compare variant 2: returns 0 if equal, -1/+1 if different"),
    0x800844C0: ("GTE_MulMatrix2", "GTE matrix multiply variant 2: loads 2 matrices, multiplies, stores result"),
    0x800738B0: ("Entity_InitUI", "Entity UI init: calls draw functions with 0x4000/0x2000 flags, sets up UI elem"),
    0x8001CBA8: ("Pad_Init", "Pad/controller init: sets up input config, handles 0xFF default case"),
    0x80083F50: ("Math_CosGTE", "Math cos via GTE: piecewise cosine from table 0x800A5AF0 using GTE coprocessor"),
    0x8008BEAC: ("CD_PollEvent", "CD event poll: iterates 0x800AC2D4 table, dispatches active event callbacks"),
    0x80098150: ("GPU_SPU_Cmd", "GPU/SPU command: sets DAT_800ac598 flag, modifies SPU register at 0x800AC604+0x1AA"),
    0x80088248: ("MDEC_InitDecode2", "MDEC decode init variant 2: sets frame buffer, calls callback if ready"),
    0x80024338: ("Entity_TargetDistance", "Entity target distance: computes DX/DY from entity[0x14C/14E/150] to target"),
    0x80083DE0: ("GPU_SetupDrawMode2", "GPU draw mode setup variant 2: builds GP0(0xE1) cmd with extra params"),
    0x80097030: ("CD_Interrupt", "CD interrupt handler: checks DAT_800ac654, processes SPU reg, handles DMA"),
    0x80024BD8: ("Entity_TargetDistance2", "Entity target distance variant 2: different entity offset for target"),
    0x80086DB4: ("MDEC_CallbackChain", "MDEC callback chain: iterates ptrs at 0x800ABEC0, calls each in sequence"),
    0x80072E60: ("Entity_AdvanceAnim2", "Entity animation advance 2: entity[0x46]=0 state, animates entity[0x50] delta"),
    0x8007D0D0: ("Entity_DrawSpriteSwitch", "Entity sprite draw switch: switch on entity[3] type, sets entity[0x40]=1"),
    0x800508A8: ("Screen_SetMode", "Screen mode setup: configures display from DAT_800bfe56 + DAT_800bf870 state"),

    # -- Batch 39: MDEC / GPU / Audio / Entity (16 funcs) --
    0x80087530: ("MDEC_ProcessFrame", "MDEC frame processor: calls decode callbacks on entity[0xC] data"),
    0x8007C2A4: ("GPU_DrawNumber", "GPU digit/number draw: splits value into tens/ones, draws 2 TILE prims per digit"),
    0x8007486C: ("Audio_SPU_VoiceSetup", "Audio SPU voice setup: computes ADSR/volume from table at 0x800A4D1E"),
    0x800551C4: ("Entity_State_Physics", "Entity physics state: entity[0x29]=0, checks entity[0x147] dir, sets angle"),
    0x8006B020: ("Entity_InitTrail", "Entity trail init: sets _DAT_1f8000c8/cc based on param, plays SFX"),
    0x80094B50: ("Audio_SPU_Key", "Audio SPU key on/off: sets bitmask at _DAT_80105d10 for voice allocation"),
    0x8007C688: ("GPU_DrawNumber2", "GPU digit draw variant 2: uses DAT_800bfa24/28 instead of bfa21/2a"),
    0x80099F70: ("CD_XA_Decode", "CD XA audio decoder: computes sample delta, handles ADPCM decode"),
    0x800658E4: ("Entity_State_Attack2", "Entity attack state variant 2: entity[6] state, different callback path"),
    0x80022E04: ("Entity_AngleToTarget2", "Entity angle to target variant 2: atan2 from entity pos to target pos"),
    0x8006D960: ("Camera_SmoothX", "Camera X smoothing: same pattern as SmoothY, lerps X toward target"),
    0x80083618: ("GPU_SendDMAPacket", "GPU DMA packet send: builds GP0 command, sends via DMA with flags"),
    0x8002300C: ("Entity_DistanceCheck2", "Entity distance check variant 2: entity[0x2E/32/36] to entity2 pos"),
    0x800737F8: ("Entity_DrawUI", "Entity UI draw: renders UI primitive array at entity pos via FUN_80033afc"),
    0x80087D84: ("MDEC_SetParam2", "MDEC param setter 2: sets entity[0xEA] or entity[0xEB] based on param sign"),
    0x80055634: ("Entity_CheckCollisionFlags", "Entity collision flag check: tests DAT_800bf816 + entity[0x174] flags"),

    # -- Batch 40: GPU / Entity / CD / Audio (22 funcs) --
    0x80080ADC: ("GPU_DispatchTask", "GPU task dispatcher: processes task queue at _DAT_80100ab0, calls handlers"),
    0x80051E60: ("Entity_FrameLoop", "Entity frame loop: iterates framebuffer array at 0x801FE000, processes 2-byte headers"),
    0x80035088: ("Event_CheckTrigger", "Event trigger check: tests DAT_800bf881 flags, checks input conditions"),
    0x800240FC: ("Entity_CalcAngle3", "Entity angle calc variant 3: atan2 from entity pos to target with offset"),
    0x80022F04: ("Entity_CalcAngle4", "Entity angle calc variant 4: different entity offset computation"),
    0x8004BEF4: ("Entity_Behavior_Collectible2", "Entity collectible behavior variant: entity[0x5C] timer state machine"),
    0x800905E0: ("Audio_ScanChannels", "Audio channel scanner: iterates channel table, updates active channels"),
    0x8004C01C: ("Entity_Behavior_Pickup", "Entity pickup behavior: entity[5]=0/1 state, picks up item animation"),
    0x800982A0: ("CD_AllocDMA", "CD DMA allocator: finds free slot in DAT_800ac66c table, returns index"),
    0x800998E4: ("CD_SPU_Poll", "CD SPU poll: scans DAT_800ac604+0xC table, checks DAT_800ac590 bitmask"),
    0x80084EB0: ("Math_Atan2_2", "Math atan2 variant 2: uses table at 0x800A6490 for negative inputs"),
    0x80049418: ("Collision_CalcVector", "Collision vector calc: GTE cos/sin on param_4, stores result in scratchpad"),
    0x8004514C: ("Texture_UploadVRAM", "Texture VRAM upload: DMA transfer from 0x80157000 to VRAM, calls FUN_80044f58"),
    0x800782F0: ("Game_SetEventFlag2", "Game event flag setter 2: sets bit at _DAT_800bfe50 via table lookup"),
    0x80037894: ("Entity_DrawPrim", "Entity draw primitive: builds quad prim from entity data, submits"),
    0x80090160: ("Audio_AllocVoice", "Audio voice allocator: finds free voice slot in channel struct"),
    0x8005308C: ("Entity_CheckAction2", "Entity action check variant 2: tests _DAT_800e7e84/85 + entity flags"),
    0x80095C40: ("Audio_PollChannel", "Audio channel poll: iterates DAT_80105cf8 channels, updates state"),
    0x80084D10: ("Math_Atan2_3", "Math atan2 variant 3: uses table at 0x800A6490, different quadrant handling"),
    0x80021F34: ("Entity_CalcTarget", "Entity target calculator: computes position delta to target entity"),
    0x80092B00: ("Audio_CalcPitch", "Audio pitch calculator: clamps abs(param) to 0-0x3FFF, scales to pitch"),

    # -- Batch 41: Mem / GTE / GPU / Entity / Audio / UI (35 funcs) --
    0x8009A3E0: ("Mem_Copy", "Memory copy: byte-by-byte memcpy, returns destination pointer"),
    0x8009A340: ("Mem_Compare", "Memory compare: returns 0 if first param_2 bytes match, else difference"),
    0x800846F0: ("GTE_SetReg_D000", "GTE register set: writes param_1 to COP2 register 0xD000 (SZ0)"),
    0x80051844: ("GTE_LoadScaleCompose", "GTE scale + compose: loads entity scale (0xB8/BA/BC), composes with rotation matrix"),
    0x80084470: ("GTE_MulMatrixVec", "GTE matrix * vector multiply: loads matrix from array, transforms vector"),
    0x8007E8DC: ("GPU_RenderSprite", "GPU sprite renderer: dispatches via function table at 0x80017334 + param index"),
    0x8007E9C8: ("GPU_SpriteOT", "GPU sprite OT submit: sets GTE vals, creates sprite primitive in ordering table"),
    0x8008F6F0: ("Audio_SetVoice10", "Audio voice set variant 10: stores voice parameters from stack"),
    0x8008EB60: ("Audio_SetChannel", "Audio channel setter: looks up channel struct, applies params"),
    0x8004BF84: ("Entity_Behavior_Item", "Entity item behavior: state machine with pickup/drop animation"),
    0x80051E00: ("Entity_ProcessFrame", "Entity frame processor: iterates framebuffer array at 0x801FE000"),
    0x80080750: ("Entity_SpawnListener", "Entity spawn listener: allocs child of type 7, callback FUN_800805ec"),
    0x800535E0: ("Entity_CheckState", "Entity state checker: switch on entity[0x6C] type, returns state"),
    0x80021800: ("Entity_CalcAngle5", "Entity angle calc variant 5: atan2 with different entity offsets"),
    0x8001F9DC: ("Entity_CalcAngle6", "Entity angle calc variant 6: atan2 from entity to param2 target"),
    0x8001FC50: ("Entity_CalcAngle7", "Entity angle calc variant 7: tests entity[0x17E] flags before atan2"),
    0x80020B08: ("Entity_CalcAngle8", "Entity angle calc variant 8: checks param2 flags, computes atan2"),
    0x80049674: ("Collision_CalcSlope", "Collision slope calculator: atan2 on surface normal, sqrt on XZ components"),
    0x80048ECC: ("Collision_GridLookup", "Collision grid lookup: indexes grid from _DAT_1f8001c8 table"),
    0x8004FA38: ("UI_DrawPanel2", "UI panel draw variant 2: uses _DAT_800bf552 index, different layout"),
    0x8004F378: ("UI_InitDialog", "UI dialog init: calls FUN_80077d64, sets up dialog struct at entity+0x1B0"),
    0x80055D5C: ("Entity_PhysicsStep2", "Entity physics step variant 2: collision + slope calc + angle update"),
    0x80054B34: ("Entity_LoadAnimTable", "Entity anim table load: lookup by type table at 0x800A4544"),
    0x80075F0C: ("Entity_RotateMove", "Entity rotate + move: entity[0x88] += entity[0x90], updates position"),
    0x8006F04C: ("Entity_SFXState", "Entity SFX state machine: switch on DAT_800bf840 & 0xF, plays sounds"),
    0x8007F104: ("Menu_DrawConfig", "Menu config draw: renders strings + sprites for configuration menu"),
    0x800662D8: ("Entity_OverlayDispatch", "Entity overlay dispatch: calls overlay func based on DAT_800bf870 state"),
    0x8007AA38: ("Entity_AllocDispatch", "Entity alloc dispatcher: switch on entity[10] type, different alloc paths"),
    0x8006B124: ("Entity_Behavior_Attack2", "Entity attack behavior variant 2: entity[0x46] state, sets speed"),
    0x8005706C: ("Entity_State_Dash", "Entity dash state: entity[0x4A] += 0x360, applies velocity to position"),
    0x80053D0C: ("Entity_StateCheck", "Entity state checker: tests entity[0x158] state ptr, validates"),
    0x8004B150: ("Entity_Behavior_InitItem", "Entity item init behavior: sets entity[0x18] mode based on param"),
    0x8004BD64: ("Entity_SetPosition", "Entity position setter: copies pos from param3/4/5 to entity[0x2E/32/36]"),
    0x8009BA10: ("BIOS_Handler", "BIOS exception handler: saves all registers to stack, dispatches"),
    0x80071A3C: ("Entity_PlayAnimation", "Entity animation player: entity[4]=1 state, calls advance + GTE compose"),

    # -- Batch 42: Entity / UI / Collision / Audio (35 funcs) --
    0x800330AC: ("Entity_DrawLifecycle", "Entity draw lifecycle: entity[4]=1 state, processes sprite, dealloc at state 4"),
    0x80021DF4: ("Entity_CalcAngle9", "Entity angle calc variant 9: checks param2 bit 3, atan2 with offset"),
    0x80070F90: ("Math_Lerp", "Math linear interpolate: computes (a-b)*scale, returns interpolated value"),
    0x80040C00: ("Entity_CheckCollectible", "Entity collectible check: tests _DAT_800e7fee, reads struct at offset"),
    0x8004EA4C: ("UI_RenderChar", "UI character renderer: handles 0xFB escape codes, renders glyph tiles"),
    0x80035640: ("Event_CheckTrigger2", "Event trigger check variant 2: tests DAT_800bf881 event flags"),
    0x80086620: ("MDEC_Config", "MDEC configurator: sets DAT_800abe8c/88/70 based on param mode flags"),
    0x80045724: ("Collision_Move", "Collision move processor: reads collision result, updates entity pos step"),
    0x80093EBC: ("Audio_ChannelEvent", "Audio channel event handler: iterates channels, dispatches events"),
    0x8007D14C: ("Entity_AdvanceScript", "Entity script advance: reads byte at entity[0x14], dispatches commands"),
    0x8009C6E0: ("MDEC_BufferCopy", "MDEC buffer copy: copies 16 words from param_1 to DAT_800acf58 buffer"),
    0x8004ED0C: ("UI_DrawItemIcon", "UI item icon draw: renders item icon with 0x8000 flag + color code"),
    0x8007496C: ("Audio_SPU_Find", "Audio SPU voice finder: searches 0x800BE238 table by channel ID"),
    0x80034BE0: ("Event_Check3", "Event check variant 3: tests DAT_800bf873 + game state conditions"),
    0x80035338: ("Event_Handler", "Event handler: calls FUN_80035640, dispatches by event type 0x62"),
    0x8009A490: ("String_FindChar2", "String char finder variant: searches for null or matching char"),
    0x8004D0D4: ("UI_ParseCmd", "UI command parser: parses bytecode commands from param_2 array"),
    0x80083B30: ("GPU_InitDisplay", "GPU display init: sets up display area at param_1 with w/h/x/y"),
    0x80033630: ("Entity_DrawLifecycle2", "Entity draw lifecycle variant 2: different sprite processing path"),
    0x800424F0: ("Entity_WaitState", "Entity wait state: entity[0x78]=0, polls DAT_800bf843, checks flags"),
    0x80024E00: ("Entity_SpriteConfig", "Entity sprite config: switch on DAT_800e7eef, loads animation"),
    0x80048894: ("Collision_Check2", "Collision check variant 2: saves entity pos, tests collision flags"),
    0x8004D19C: ("UI_SpawnChild", "UI child spawner: allocs entity with callback from param_2 table"),
    0x8004F058: ("UI_TextParser", "UI text parser: processes text buffer, handles control codes"),
    0x800489E4: ("Collision_Check3", "Collision check variant 3: saves entity pos at _DAT_1f8001bc/c0/c2"),
    0x80073750: ("UI_StringParse", "UI string parser: tokenizes string by spaces, calls handler"),
    0x800438D4: ("Entity_BehaviorDispatch", "Entity behavior dispatcher: switch on entity type, calls handler"),
    0x80055704: ("Entity_ActionCheck2", "Entity action check variant 2: tests DAT_1f800230 + entity flags"),
    0x80053BF8: ("Entity_FlagHandler", "Entity flag handler: entity[0x61] bit dispatch, sets mode/flag"),
    0x800531DC: ("Entity_LevelCheck", "Entity level check: tests DAT_800bf870==5, checks Y position bounds"),
    0x8003FE00: ("Entity_AnimMode", "Entity animation mode setter: entity[3] state, sets entity[0x40] timer"),
    0x80079554: ("String_ParseHex", "String hex parser: reads 2-char hex value from string"),
    0x8007FCC8: ("GPU_SubmitOT", "GPU OT submit: writes prim to ordering table with depth sorting"),
    0x8006FDE8: ("Entity_LoadSprite", "Entity sprite loader: loads sprite data from table at 0x800A3EA4"),
    0x80022060: ("Entity_CalcAngle10", "Entity angle calc variant 10: checks DAT_1f80027a flag first"),

    # -- Batch 43: GPU / Entity / UI / Audio (35 funcs) --
    0x80085810: ("IRQ_Disable", "IRQ disable: saves return addr, calls BIOS to disable interrupts"),
    0x80085900: ("Timer_GetCounter", "Timer counter reader: polls root counter at 0x800AACAC, returns ticks"),
    0x80085CB4: ("CD_CallbackDispatch2", "CD callback dispatch variant 2: calls function table at 0x800ABDA4/8"),
    0x80080BF0: ("GPU_ResetGraph", "GPU graph reset: calls ResetGraph debug, dispatches by param & 7"),
    0x80083364: ("GPU_DMASync", "GPU DMA sync: waits for DMA channel completion, handles timeout"),
    0x80083890: ("GPU_MoveImage", "GPU move image: sends MoveImage cmd, waits for DMA, returns"),
    0x80033AFC: ("GPU_DrawQuad", "GPU draw quad: builds textured quad primitive, submits to OT"),
    0x80033A0C: ("GPU_DrawSprite", "GPU sprite drawer: builds sprite primitive from entity data"),
    0x8007CDD4: ("GPU_PrimSetup", "GPU primitive setup: creates sprite prim at _DAT_800bf544 with params"),
    0x80024794: ("Entity_Behavior_Painter", "Entity painter behavior: entity[0x14A] flag, branches on painter mode"),
    0x80069948: ("Entity_InitType", "Entity type initializer: calls FUN_80069858, sets entity[0]/[0x2B] state"),
    0x8006B390: ("Entity_Behavior_Enemy", "Entity enemy behavior: calls FUN_80069858, sets type-specific state"),
    0x8002423C: ("Entity_MoveCalc", "Entity move calculator: computes velocity from entity[0x4A], updates pos"),
    0x800376EC: ("Entity_DrawChild2", "Entity child drawer variant 2: builds quad from child data at offset"),
    0x80033560: ("Entity_DrawLifecycle3", "Entity draw lifecycle variant 3: entity[4]=1, different sprite path"),
    0x8007DDE0: ("Entity_ProcessSprite", "Entity sprite processor: entity[4]=1, calls draw + UI, dealloc at 3"),
    0x8006FF10: ("Entity_SpawnMultiple", "Entity multiple spawner: iterates table at 0x800A4BB8, spawns children"),
    0x8006FB0C: ("Entity_LoadSprite2", "Entity sprite loader variant 2: loads from table at 0x800A3E80"),
    0x80071B44: ("Entity_SpawnChild2", "Entity child spawner variant 2: allocs type 0xD, sets callback + flags"),
    0x80023320: ("Entity_Interact", "Entity interact handler: checks input flags, triggers interaction"),
    0x80056E08: ("Entity_AttackCheck", "Entity attack check: tests input + entity[0x167] + collision flags"),
    0x80060268: ("Entity_StateInput", "Entity input state: tests _DAT_800ecf54 input bits, dispatches action"),
    0x80036560: ("Event_TypeDispatch", "Event type dispatcher: returns action code by event type (0/1/2)"),
    0x80055C9C: ("Entity_AngleCheck", "Entity angle check: compares angle vs target, returns direction"),
    0x800867CC: ("MDEC_FrameReady", "MDEC frame ready check: tests DAT_800abe9c flags, sets DAT_800abea0"),
    0x8007BE18: ("Engine_OverlayCall", "Engine overlay call: switch on _DAT_1f800138[0x50], calls overlay funcs"),
    0x8004D514: ("UI_InventorySlot", "UI inventory slot handler: reads/writes slot at DAT_800bfab4/bb4"),
    0x8004F474: ("UI_ListUpdate", "UI list updater: processes param_1[8] entries, updates positions"),
    0x8004FE84: ("UI_PanelDispatch", "UI panel dispatcher: switch on DAT_800bf549 state, calls handlers"),
    0x8004B208: ("Entity_Behavior_Talk", "Entity talk behavior: entity[5]=0->1, inits dialog via FUN_80041194"),
    0x80090A60: ("Audio_ChannelConfig", "Audio channel config: sets up channel params at DAT_800ac448"),
    0x80092420: ("Audio_VoiceSet1", "Audio voice set variant 1: checks slot, sets voice params"),
    0x80092C30: ("Audio_VoiceSet2", "Audio voice set variant 2: checks slot, sets different voice params"),
    0x8009401C: ("Audio_PitchBend", "Audio pitch bend: computes pitch delta between param5 and param6"),
    0x8007EE74: ("Menu_DrawTextPage", "Menu text page draw: renders menu text with sprite primitives"),

    # -- Batch 44: Entity / GPU / CD / Audio / Menu (35 funcs) --
    0x80069BEC: ("Entity_Behavior_Enemy2", "Entity enemy behavior variant 2: entity[0x46] state, sets DAT_1f80027c flag"),
    0x80069858: ("Entity_PhysicsInit", "Entity physics initializer: calls collision + slope calc, checks result"),
    0x80022AC8: ("Entity_CalcAngle11", "Entity angle calc variant 11: different entity offset computation"),
    0x800216B4: ("Entity_CalcAngle12", "Entity angle calc variant 12: atan2 with entity[0x2E]/[0x36] offsets"),
    0x8001FAE0: ("Entity_CalcAngle13", "Entity angle calc variant 13: checks entity[0x145] flag first"),
    0x80033380: ("Entity_DrawLifecycle4", "Entity draw lifecycle variant 4: entity[4]=1, different draw path"),
    0x80032918: ("Entity_DrawLifecycle5", "Entity draw lifecycle variant 5: processes sprite, dealloc at state 4"),
    0x800534B0: ("Entity_SpawnBackground", "Entity spawn in background: AllocBackground, sets position + callbacks"),
    0x8004A2A0: ("Entity_SpawnItem", "Entity item spawner: checks item count, allocs entity 0x1F, sets params"),
    0x80042A8C: ("Entity_SpriteMode", "Entity sprite mode setter: checks entity[0x72], switches on mode"),
    0x8006032C: ("Entity_StateMachine2", "Entity state machine variant 2: entity[0x169] state dispatch"),
    0x80051300: ("Entity_CheckState2", "Entity state check variant 2: iterates entity[9] flags"),
    0x800524B4: ("Entity_RenderInit", "Entity render init: checks DAT_800bf4f8, calls MDEC setup"),
    0x80026148: ("Entity_Behavior_Cutscene", "Entity cutscene behavior: entity[4]=1, advances timer, triggers event"),
    0x80026024: ("Entity_Behavior_Fade", "Entity fade behavior: checks entity[0x14]/[0x15], handles fade transition"),
    0x8007FC24: ("GPU_OT_Advance", "GPU OT advance: increments ordering table pointer, wraps at limit"),
    0x8007C3CC: ("GPU_DrawTile", "GPU tile drawer: builds 4-point tile primitive, submits to OT"),
    0x80082FB4: ("GPU_DMACallback", "GPU DMA callback: handles DMA completion, resets timeout"),
    0x80089E1C: ("CD_CmdRetry", "CD command with retry: tries cmd up to 3 times with callback fallback"),
    0x8008639C: ("CD_ProcessInterrupt", "CD interrupt processor: reads DAT_800abdf0 status, dispatches events"),
    0x80096A90: ("CD_Init2", "CD init variant 2: calls FUN_80096bf0, clears buffer at 0x800AC5EE"),
    0x800752B4: ("Audio_AllocVoice2", "Audio voice allocator variant 2: searches table by range"),
    0x80091120: ("Audio_ChannelProcess", "Audio channel processor: updates channel state, calls voice funcs"),
    0x8007F73C: ("Menu_DrawText", "Menu text drawer: renders string via sprite primitives + GTE projection"),
    0x8007ED5C: ("Menu_DrawNumber", "Menu number drawer: converts value to digits, renders sprites"),
    0x8007EF60: ("Menu_DrawNumber2", "Menu number drawer variant 2: different digit rendering path"),
    0x8007B18C: ("Engine_InitPool", "Engine pool initializer: calls init funcs, clears entity pools"),
    0x80051614: ("GTE_LoadMatrix", "GTE matrix loader: loads rotation + translation from table at 0x800E7F40"),
    0x80036A14: ("Game_StateLoad", "Game state loader: reads save state from DAT_800bf870, dispatches"),
    0x8003511C: ("Event_WeaponCheck", "Event weapon check: tests weapon/item type 0x59 vs game state"),
    0x80035424: ("Event_Check4", "Event check variant 4: calls FUN_80035640(8) + FUN_80035640(9)"),
    0x8009A640: ("String_CompareICase", "String compare ignore case: compares strings case-insensitively"),
    0x80089508: ("MDEC_DecodeStep", "MDEC decode step: entity[0x46] state, processes macroblock"),
    0x80087CB0: ("MDEC_GetParam", "MDEC param getter: returns entity[0xE9] or entity[0xEC] based on sign"),
    0x80044F58: ("Texture_Process", "Texture processor: reads texture flags, dispatches upload/decode"),

    # -- Batch 45: Entity / Collision / GTE / Audio (35 funcs) --
    0x800663A8: ("Entity_Behavior_Rotate", "Entity rotate behavior: uses angle approach, checks distance, advances state"),
    0x8007AB44: ("Entity_ListInsert", "Entity list insert: inserts entity into linked list at 0x800F2738"),
    0x8005314C: ("Entity_StateDispatch", "Entity state dispatcher: switch on entity[0x6A] value, calls handlers"),
    0x80083214: ("GPU_DMASetup", "GPU DMA setup: configures DMA channel, sets DAT_800a5ad8 timeout"),
    0x80079634: ("String_Format", "String formatter: writes formatted output to buffer at local_10"),
    0x80067CA4: ("Entity_ActionStateMachine", "Entity action state machine: switch on entity[5], 6 states"),
    0x80047B5C: ("Collision_CheckMain", "Collision check main: computes collision flags, checks geometry"),
    0x80092FD0: ("Audio_VoiceUpdate", "Audio voice updater: processes active voices, updates params"),
    0x80087BB8: ("MDEC_GetStatus", "MDEC status getter: returns status byte from entity at offset"),
    0x800633B0: ("Entity_OverlayDispatch2", "Entity overlay dispatch variant 2: switch on DAT_800bf870"),
    0x80084250: ("GTE_MulMatrix3", "GTE matrix multiply variant 3: different input format"),
    0x80084360: ("GTE_MulMatrix4", "GTE matrix multiply variant 4: different register layout"),
    0x80077C40: ("Entity_LoadAnimData3", "Entity anim data loader variant 3: loads from table, stores ptrs"),
    0x8008DFA0: ("Audio_Init2", "Audio init variant 2: sets up channel table at 0x80104C30"),
    0x80054650: ("Entity_Behavior_Init2", "Entity behavior init variant 2: clears flags, sets timer"),
    0x8004E808: ("UI_InventoryDraw", "UI inventory drawer: renders inventory items with icons"),
    0x80048FC4: ("Collision_Slope2", "Collision slope calc variant 2: different scratchpad layout"),
    0x800655DC: ("Entity_StateEnd", "Entity state end: entity[6] state 0->1->2, cleanup at state 2"),
    0x8008DC00: ("Audio_ChannelInit2", "Audio channel init variant 2: sets voice, calls FUN_80095530"),
    0x80078610: ("GTE_ProjectionInit", "GTE projection init: sets screen offset/scale, identity matrix"),
    0x80094474: ("Audio_ADSRCalc", "Audio ADSR calculator: computes envelope from phase + step"),
    0x8008DA58: ("MDEC_DataDecode", "MDEC data decoder: reads bitstream from buffer, dispatches"),
    0x8004798C: ("Collision_GridInit", "Collision grid initializer: sets up collision grid bounds"),
    0x800796DC: ("Game_InitGlobals", "Game globals init: clears 0x68 bytes at 0x800BF808, sets defaults"),
    0x800492B0: ("Collision_Vector2", "Collision vector calc variant 2: GTE cos/sin, stores result"),
    0x80024448: ("Entity_BehaviorSet", "Entity behavior setter: sets entity[0x14A]/[0x14B]/[0x14C] from config"),
    0x80054C08: ("Entity_AnimLoad2", "Entity anim load variant 2: checks entity flags, loads from table"),
    0x80085F5C: ("CD_SeekSetup", "CD seek setup: configures seek params at 0x800AAD1C, validates"),
    0x8003F898: ("Engine_Loop", "Engine main loop: processes events, updates state, calls subsystems"),
    0x800721DC: ("Entity_AnimSegment2", "Entity anim segment variant 2: entity[6]=1 state, advances angle"),
    0x80055E28: ("Entity_PhysicsUpdate", "Entity physics update: entity[0x14A] flags, collision + movement"),
    0x80068A94: ("Entity_Behavior_Move", "Entity move behavior: entity[0x2B]=0, uses timer entity[0x40]"),
    0x8008C960: ("CD_SyncLoop", "CD sync loop: polls DAT_800ac308, waits for completion"),
    0x80075130: ("Audio_SystemInit", "Audio system init: calls Audio_Init2 + Audio_InitVolume + config"),
    0x80053670: ("Entity_BehaviorDispatch2", "Entity behavior dispatch variant 2: sets entity[0x176] type"),

    # -- Batch 46: MDEC / UI / Entity / Collision (35 funcs) --
    0x80089194: ("MDEC_DecodeProcess", "MDEC decode processor: reads bitstream at entity[0x3C], processes blocks"),
    0x8004DC84: ("UI_DialogSpawn", "UI dialog spawner: allocs child type 5, sets dialog callback"),
    0x8004EAD0: ("UI_TextDecode", "UI text decoder: parses control codes 0/1/2 from text buffer"),
    0x8004DBC0: ("UI_ItemLookup", "UI item lookup: switch on item ID 0x59-0x6B, returns icon/type"),
    0x80049E54: ("UI_ElementUpdate", "UI element updater: checks _DAT_800e7fee, updates element state"),
    0x8004C0E4: ("Entity_ItemPickup", "Entity item pickup: reads table at 0x800A3EDC, sets item params"),
    0x8005B20C: ("Entity_ParentUpdate", "Entity parent update: copies pos/angle from parent entity[0x10]"),
    0x80041C54: ("Entity_StateWait2", "Entity wait state variant 2: entity[0x78] state machine"),
    0x800678E8: ("Entity_Behavior_Death", "Entity death behavior: plays SFX 0x24, sets timer, dealloc"),
    0x800660AC: ("Entity_State_Climb", "Entity climb state: entity[6] dispatch, checks height/angle"),
    0x8006C478: ("Entity_Behavior_Cam", "Entity camera behavior: entity[4] state 0->1->2->3 transitions"),
    0x8006C328: ("Entity_State_Camera", "Entity camera state: entity[6]=0->1, sets camera target"),
    0x80043D8C: ("Entity_StateTrigger", "Entity state trigger: entity[0x78]=1, checks flag vs DAT_800bf816"),
    0x80056C00: ("Entity_PhysicsMove", "Entity physics move: entity[0x29]=0, checks collision + angle"),
    0x80077B5C: ("Entity_AdvanceAnim3", "Entity anim advance variant 3: entity[0xE] timer, calls next frame"),
    0x80054790: ("Entity_AnimLoad3", "Entity anim load variant 3: looks up table at 0x800A42F8"),
    0x80032F98: ("Entity_DrawLifecycle6", "Entity draw lifecycle variant 6: entity[4]=1, processes draw"),
    0x80033450: ("Entity_DrawLifecycle7", "Entity draw lifecycle variant 7: entity[4]=1, different draw path"),
    0x8006F138: ("GTE_ProjectEntity", "GTE entity projector: loads rotation, applies transform, stores result"),
    0x800455C0: ("Collision_Vector3", "Collision vector calc variant 3: GTE cos/sin on param_4"),
    0x80045B30: ("Collision_Vector4", "Collision vector calc variant 4: different scratchpad usage"),
    0x800459D0: ("Collision_Move2", "Collision move variant 2: reads _DAT_1f8001ec, updates position"),
    0x80048D3C: ("Collision_GridSelect", "Collision grid selector: switch on DAT_800bf870, sets grid ptr"),
    0x80035218: ("Event_Check5", "Event check variant 5: tests DAT_800bf881 flags + game state"),
    0x800364AC: ("Event_Handler2", "Event handler variant 2: switch on param_1, returns action code"),
    0x80022190: ("Entity_DrawChild3", "Entity child drawer variant 3: reads sprite from param2[0x6C]"),
    0x80023870: ("Entity_CalcAngle14", "Entity angle calc variant 14: different entity offset format"),
    0x8002192C: ("Entity_CalcAngle15", "Entity angle calc variant 15: atan2 with XZ distance check"),
    0x8004A118: ("Entity_SpawnItem2", "Entity item spawner variant 2: allocs entity 0x1F, sets callback"),
    0x8001CC00: ("System_Init", "System init: calls BIOS init seq, clears 0x5C at 0x800BF498"),
    0x8006CEC4: ("Camera_Lerp", "Camera lerp: interpolates between two camera positions"),
    0x8003A290: ("Menu_CursorDraw", "Menu cursor drawer: draws cursor sprite at entity[0x1F] position"),
    0x8008C7C0: ("CD_ReadStart", "CD read start: checks DAT_800abf28 flag, initiates read"),
    0x80042BDC: ("Entity_SpriteInit2", "Entity sprite init variant 2: sets DAT_800e806c, inits timers"),
    0x800365F0: ("Entity_LoopCheck", "Entity loop checker: iterates entity[0x1F] times, returns status"),

    # -- Batch 47: GTE / CD / Audio / Entity (35 funcs) --
    0x8003F7D8: ("GTE_RTPS", "GTE RTPS projection: sets cop regs, calls RTPS, reads screen coords"),
    0x80051128: ("Entity_DrawCheck", "Entity draw checker: iterates entity[9] flags, dispatches draw"),
    0x80051464: ("Entity_DrawCheck2", "Entity draw check variant 2: similar iteration, different flag"),
    0x800519E0: ("Entity_AllocFromPool", "Entity pool allocator: checks pool count, allocs entity struct"),
    0x80038F7C: ("Entity_SpriteType", "Entity sprite type lookup: switch on param & 0x7F, returns type"),
    0x80053D90: ("Entity_StateSwitch", "Entity state switcher: switch on entity[0x78], 8 states"),
    0x80043720: ("Entity_StateWait3", "Entity wait state variant 3: entity[0x78]=1, polls DAT_800bf822"),
    0x800656FC: ("Entity_StateAction", "Entity action state: entity[6] state 0->1->2, sets DAT_800bf80e"),
    0x800665F4: ("Entity_CheckFlag", "Entity flag checker: tests entity[0x6A] bit 0x8000, validates"),
    0x8007156C: ("Entity_AnimPlay2", "Entity anim player variant 2: entity[3] switch, 6 animation modes"),
    0x8007DEF8: ("Entity_SpawnSprite", "Entity sprite spawner: allocs pool 3, sets sprite callback"),
    0x800537B8: ("Entity_BGSpawn", "Entity background spawner: allocs background, sets pos + callback"),
    0x80068E68: ("Entity_BehaviorSet2", "Entity behavior setter variant 2: entity[1]=1, tests entity[0x46]"),
    0x80026864: ("Entity_Behavior_Door", "Entity door behavior: entity[4]=1, checks game state transition"),
    0x8004B9C8: ("Entity_Behavior_Collect", "Entity collect behavior: entity[5] state 0->1, handles collection"),
    0x80059D28: ("Entity_InputUpdate", "Entity input updater: DAT_800bf819--, clears input flags"),
    0x8005B134: ("Entity_TypeDispatch", "Entity type dispatcher: switch on entity[2]/[0xC] type"),
    0x80067EF4: ("Entity_SpriteMode2", "Entity sprite mode setter variant 2: switch on entity[0x6F]"),
    0x8001F830: ("Entity_CalcAngle16", "Entity angle calc variant 16: atan2 with XZ distance validation"),
    0x80020C34: ("Entity_CalcAngle17", "Entity angle calc variant 17: different entity offset format"),
    0x80020DB8: ("Entity_CalcAngle18", "Entity angle calc variant 18: uses entity[0x2E/0x36]"),
    0x80020F7C: ("Entity_CalcAngle19", "Entity angle calc variant 19: longer computation path"),
    0x80080940: ("GPU_CallbackDispatch", "GPU callback dispatcher: processes task queue, calls handlers"),
    0x80045810: ("Collision_Push", "Collision push handler: reads _DAT_1f8001e0, applies push vector"),
    0x8009C3F4: ("BIOS_CRC", "BIOS CRC/checksum: computes 0x20-byte blocks, compares"),
    0x80085D8C: ("CD_InterruptHandler", "CD interrupt handler: reads status, dispatches by event type"),
    0x8008B2D8: ("CD_Init3", "CD init variant 3: prints debug, calls init funcs, sets flags"),
    0x800991B0: ("CD_Transfer", "CD data transfer: checks DAT_800ac620, setup DMA + IRQ"),
    0x80098F90: ("CD_SPU_Write2", "CD SPU write variant 2: writes to DAT_800ac604+0x1AA"),
    0x8008EC60: ("Audio_ChannelVoice", "Audio channel voice handler: sets voice params from struct"),
    0x80091970: ("Audio_ChannelKey", "Audio channel key handler: looks up channel, calls voice funcs"),
    0x800950E0: ("Audio_SPU_Process", "Audio SPU processor: processes 0x38-byte entry, updates"),
    0x8004EE88: ("UI_TextDraw", "UI text drawer: formats text with escape codes, draws to screen"),
    0x800384EC: ("Game_LoadData", "Game data loader: reads from 0x800A33D4, fills globals"),
    0x8003675C: ("Entity_LoopCheck2", "Entity loop check variant 2: entity[0x1F] + param check"),

    # -- Batch 48: Entity / Collision / GPU / System (30 funcs) --
    0x8002F36C: ("Entity_BehaviorType", "Entity behavior type: processes entity type flags, dispatches"),
    0x800468AC: ("Collision_Move3", "Collision move variant 3: GTE cos/sin, updates position from normal"),
    0x8004F8DC: ("UI_PanelUpdate", "UI panel updater: checks panel state, updates positions"),
    0x80022760: ("Entity_BehaviorList2", "Entity behavior list variant 2: checks timer + DAT_800bf80d flag"),
    0x8006B9DC: ("Entity_State_Damage", "Entity damage state: entity[6]=0->1, sets timer, applies knockback"),
    0x8006A080: ("Entity_State_Bounce", "Entity bounce state: entity[6]=0, checks flag, sets velocity"),
    0x80081DB8: ("GPU_PrimSend", "GPU primitive sender: checks queue space, sends prim via DMA"),
    0x8001D940: ("System_Reset", "System reset: clears pad state, calls init funcs, resets callbacks"),
    0x8007DC38: ("Entity_SpriteLifecycle", "Entity sprite lifecycle: entity[4]=1 state, processes draw/spawn"),
    0x800572EC: ("Entity_State_Jump2", "Entity jump state variant 2: calls physics, checks ground contact"),
    0x8003E264: ("GPU_OT_Process", "GPU OT processor: processes ordering table, submits primitives"),
    0x8002DBE4: ("GTE_Project2", "GTE project variant 2: loads matrix, projects, reads result"),
    0x8001D7C4: ("Pad_Update", "Pad/input updater: checks pad type, applies rumble/button flags"),
    0x8003E030: ("Engine_Update2", "Engine update variant 2: checks DAT_800a3b0c, updates subsystems"),
    0x80033278: ("Entity_DrawLifecycle8", "Entity draw lifecycle variant 8: entity[4]=1, render path"),
    0x80053E50: ("Entity_StateEnd2", "Entity state end variant 2: checks timer, plays SFX, transitions"),
    0x8005F1B0: ("Entity_State_Move", "Entity move state: entity[6] state 0->1->2, applies movement"),
    0x80056F3C: ("Entity_AttackInit", "Entity attack initializer: reads entity[0x104/0x108] data"),
    0x800490E4: ("Collision_GridWalk", "Collision grid walker: walks grid from _DAT_1f8001c8 ptr"),
    0x8006C608: ("Entity_Behavior_Cam2", "Entity camera behavior variant 2: entity[4] state machine"),
    0x8007101C: ("Entity_PosUpdate", "Entity position updater: computes new pos from velocity + angle"),
    0x8006C80C: ("Camera_Border", "Camera border check: switch on DAT_800bf870, clamps camera Y"),
    0x80088B00: ("MDEC_InitSystem", "MDEC system init: zeros flags, calls init funcs, sets up DMA"),
    0x80082504: ("GPU_PrimAlloc", "GPU primitive allocator: checks queue, returns free slot ptr"),
    0x80049F80: ("UI_InventoryUpdate", "UI inventory updater: checks DAT_800bf87c/d state"),
    0x8003E894: ("GPU_DrawProcess", "GPU draw processor: processes draw commands, calls handlers"),
    0x8008C5D8: ("CD_EventHandler", "CD event handler: checks DAT_800abf28, dispatches events"),
    0x80091D70: ("Audio_SystemConfig", "Audio system config: sets DAT_800ac424, checks 0x1000 flag"),
    0x8006F9D8: ("Entity_ChildInit", "Entity child initializer: sets child callback from table"),
    0x800349A4: ("Event_Check6", "Event check variant 6: tests DAT_800bf89e + DAT_800bf881 flags"),

    # -- Batch 49: Entity / GTE / Audio / GPU (30 funcs) --
    0x80042F70: ("Entity_Sound", "Entity sound player: checks entity[0x72], plays SFX based on type"),
    0x8002DD88: ("GTE_Project3", "GTE project variant 3: loads matrix, projects, reads screen XY"),
    0x8002F230: ("Entity_DrawType", "Entity draw type selector: entity[4]=1 state, picks draw path"),
    0x8006E010: ("Camera_Config", "Camera configurator: switch on DAT_800e7fe4/8, sets mode params"),
    0x80090E40: ("Audio_VoiceSet", "Audio voice setter: builds voice params at 0xB0 stride"),
    0x8002B7B0: ("Entity_Behavior_Parent", "Entity parent behavior: entity[4]=1, reads parent[0x10]"),
    0x8003A470: ("Menu_CursorMove", "Menu cursor mover: entity[0x1F] state, updates position"),
    0x80043EDC: ("Entity_StatePick", "Entity pick state: entity[0x78] state machine for pickup"),
    0x8004E928: ("UI_InventoryDraw2", "UI inventory draw variant 2: entity[4]=1 state, draws items"),
    0x80060A80: ("Entity_PhysicsStep3", "Entity physics step variant 3: different velocity handling"),
    0x8002801C: ("GTE_Project4", "GTE project variant 4: loads from _DAT_1f8000f8, projects"),
    0x800851F0: ("Math_Sin2", "Math sin variant 2: different table lookup path"),
    0x80022330: ("Entity_DrawChild4", "Entity child drawer variant 4: reads sprite from param2[0x6C]"),
    0x8008FE40: ("Audio_VoiceControl", "Audio voice controller: adjusts voice params from struct"),
    0x8001F650: ("Entity_CalcAngle20", "Entity angle calc variant 20: atan2 with complex offset"),
    0x800308C0: ("Entity_BehaviorType2", "Entity behavior type variant 2: entity[4]=1 state dispatch"),
    0x8007566C: ("Audio_SPU_Update", "Audio SPU updater: iterates 10 slots, updates ADSR/volume"),
    0x80022554: ("Entity_BGUpdate", "Entity background updater: iterates 0x800F2738 list, draws"),
    0x80071260: ("Entity_AnimLoad4", "Entity anim loader variant 4: entity[6]=0, loads anim data"),
    0x800674F4: ("Entity_State_Shoot", "Entity shoot state: spawns projectile, plays SFX, sets timer"),
    0x8007DA50: ("Entity_SpriteUpdate", "Entity sprite updater: entity[4]=1, processes draw commands"),
    0x8002E458: ("GTE_Project5", "GTE project variant 5: loads from _DAT_1f8000f8, different path"),
    0x8006804C: ("Entity_SpawnCollectible", "Entity collectible spawner: allocs entity, sets type+pos"),
    0x80057DC0: ("Entity_State_Jump3", "Entity jump state variant 3: checks entity[0x17E] flags"),
    0x8009C2B0: ("BIOS_MemTest", "BIOS memory test: fills 128-byte buffer, validates pattern"),
    0x80098DE0: ("CD_SPU_Transfer", "CD SPU transfer: checks slot count, initiates DMA transfer"),
    0x800336DC: ("Entity_DrawQuad", "Entity quad drawer: builds textured quad from entity data"),
    0x800368D0: ("Entity_CheckLoop", "Entity check loop: entity[0x24] counter, validates state"),
    0x80044144: ("Entity_State_Collision", "Entity collision state: entity[0x78]=1, checks collision"),
    0x8007E6DC: ("GPU_SpriteRender", "GPU sprite renderer: builds sprite prim from params, submits"),

    # -- Batch 50: GPU / Collision / Entity / Audio (25 funcs) --
    0x80082D04: ("GPU_DMAQueue", "GPU DMA queue processor: waits for slot, submits packet, advances"),
    0x80048B30: ("Collision_CheckFull", "Collision full checker: reads collision result, validates hit"),
    0x800248D0: ("Entity_Behavior_Painter2", "Entity painter behavior variant 2: checks DAT_800bf873 flag"),
    0x80084A80: ("Math_Atan", "Math arctangent: uses lookup table, handles multiple quadrants"),
    0x8001F40C: ("Entity_CalcPos", "Entity position calculator: computes new pos from delta + flags"),
    0x8004E29C: ("UI_ItemSelect", "UI item selector: switch on entity[0x60] value, selects item"),
    0x8006CC1C: ("Camera_Smooth", "Camera smoother: interpolates position with 0x80 step"),
    0x800735F4: ("Entity_State_Shop", "Entity shop state: entity[7]=1, checks DAT_800bf816 flag"),
    0x8005C138: ("Entity_TypeCheck", "Entity type checker: switch on entity[2] + entity[0xC] type"),
    0x8003ABE4: ("Menu_Dialog", "Menu dialog handler: entity[5] state 0->1->2, manages text"),
    0x800541F4: ("Entity_SubState", "Entity sub-state handler: checks entity[0x16B] flag, branches"),
    0x80025588: ("Engine_PoolUpdate", "Engine pool updater: checks DAT_800ed05a, updates pools"),
    0x8006FC34: ("Entity_SpawnChildren", "Entity children spawner: iterates table at 0x800A4BB8"),
    0x800300D8: ("Entity_Behavior_Script", "Entity script behavior: entity[4]=1, runs bytecode"),
    0x8007F250: ("Menu_TextRender", "Menu text renderer: draws text strings with GTE projection"),
    0x80086EA4: ("MDEC_DMAProcess", "MDEC DMA processor: sets up DMA for MDEC data transfer"),
    0x8006670C: ("Entity_State_Walk", "Entity walk state: entity[6] state 0->1->2, moves entity"),
    0x800696C4: ("Entity_CheckGround", "Entity ground checker: calls FUN_800495dc, validates ground"),
    0x8009A1F0: ("CD_ReadSector", "CD sector reader: reads sector data, handles retry logic"),
    0x8009121C: ("Audio_ChannelUpdate", "Audio channel updater: processes channel, updates voice"),
    0x80043A40: ("Entity_State_Scene", "Entity scene state: entity[0x78]=1, plays audio + transition"),
    0x80090BD0: ("Audio_SystemLock", "Audio system lock: sets _DAT_80104c24=1, processes queue"),
    0x800452C0: ("Texture_Upload", "Texture uploader: sends texture data to VRAM via DMA"),
    0x8005B370: ("Entity_PhysicsApply", "Entity physics applier: calls FUN_80055d5c, updates velocity"),
    0x8004DE04: ("UI_DialogUpdate", "UI dialog updater: entity[4]=1, processes dialog text"),

    # -- Batch 51: Entity / Game / CD / Audio (25 funcs) --
    0x8002F738: ("Entity_Behavior_Projectile", "Entity projectile behavior: entity[4]=1, reads parent, moves"),
    0x800783DC: ("Game_InitLevel", "Game level init: sets up collision grid, inits entity pools"),
    0x80096E70: ("CD_SPU_Read", "CD SPU reader: reads SPU RAM via DAT_800ac604+0x1AE"),
    0x8006BB6C: ("Entity_Behavior_Hurt", "Entity hurt behavior: entity[4] state 0->1->2, knockback"),
    0x8008BF50: ("CD_EventProcess", "CD event processor: checks DAT_800ac2d4, dispatches events"),
    0x8001FDB4: ("Entity_CalcAngle21", "Entity angle calc variant 21: atan2 with Y component"),
    0x8002FC40: ("Entity_Behavior_Draw", "Entity draw behavior: entity[4]=1, configures sprite+draw"),
    0x8008FC10: ("Audio_VoiceAlloc2", "Audio voice allocator variant 2: finds free voice slot"),
    0x80081FB0: ("GPU_PrimSend2", "GPU primitive sender variant 2: different queue checking"),
    0x80060064: ("Entity_State_Idle", "Entity idle state: entity[6]=0, checks ground, transitions"),
    0x80091B50: ("Audio_SystemCmd", "Audio system command: sets _DAT_801054b0/b2, dispatches"),
    0x800558B4: ("Entity_Behavior_Jump", "Entity jump behavior: checks timer, applies velocity"),
    0x80064358: ("Entity_AnimSet", "Entity animation setter: sets params, loads animation data"),
    0x80040E54: ("Entity_SpriteAdvance", "Entity sprite advance: reads sprite[0x6C], advances ptr"),
    0x80024548: ("Entity_Behavior_Hit", "Entity hit behavior: checks entity[0x16B], applies reaction"),
    0x8006042C: ("Entity_CheckState3", "Entity state check variant 3: checks DAT_1f800253/237"),
    0x80068FBC: ("Entity_BehaviorSet3", "Entity behavior setter variant 3: entity[4]=0/1 state"),
    0x8006A240: ("Entity_State_Collide", "Entity collide state: entity[7]=1/2/3, handles collision"),
    0x80026AD0: ("Entity_StateDispatch2", "Entity state dispatch variant 2: switch on entity[5]"),
    0x8002847C: ("GTE_ProjectEntity2", "GTE entity projector variant 2: different register layout"),
    0x8007C780: ("GPU_DrawDigit3", "GPU digit draw variant 3: different global source"),
    0x80036BAC: ("Event_LoadData", "Event data loader: loads 64+64 bytes, dispatches by type"),
    0x80057C08: ("Entity_State_Ground", "Entity ground state: calls FUN_80057a68, checks collision"),
    0x8008C294: ("CD_FileRead", "CD file read: sets DAT_800ac318, checks counter, reads"),
    0x8006B1FC: ("Entity_Behavior_Fall", "Entity fall behavior: entity[7] state 0->1->2->3, gravity"),

    # -- Batch 52: Audio / Entity / GPU / System (25 funcs) --
    0x8008E100: ("Audio_SeqOpen", "Audio sequence opener: checks _DAT_80104c28, opens SEQ data"),
    0x80043BD4: ("Entity_State_Event", "Entity event state: entity[0x74] counter, dispatches events"),
    0x80021150: ("Entity_CalcAngle22", "Entity angle calc variant 22: complex offset computation"),
    0x8005229C: ("Engine_RenderCheck", "Engine render check: validates sprite buffer, inits MDEC"),
    0x8007CC00: ("GPU_SpriteProcess", "GPU sprite processor: reads sprite data, builds primitives"),
    0x8005ACC8: ("Entity_State_Attack", "Entity attack state: entity[6]=0, sets attack params"),
    0x8004B788: ("Entity_Behavior_Talk2", "Entity talk behavior variant 2: entity[5]=1, dialog"),
    0x800870B4: ("MDEC_DataRead", "MDEC data reader: reads bitstream from entity[0x3C] data"),
    0x8003A5E4: ("Menu_SlotDraw", "Menu slot drawer: switch on entity[0x1F], draws save slots"),
    0x8006C988: ("Camera_ModeSwitch", "Camera mode switcher: switch on entity[0x76], sets params"),
    0x800620D0: ("Entity_State_Special", "Entity special state: entity[6] state 0->1->2, SFX"),
    0x80082734: ("GPU_DMASend2", "GPU DMA send variant 2: checks prim count, sends via DMA"),
    0x80057150: ("Entity_State_Dash2", "Entity dash state variant 2: checks entity[0x17E] flags"),
    0x8004BB38: ("Entity_Behavior_Item2", "Entity item behavior variant 2: entity[4]=1, pickup"),
    0x800444EC: ("Entity_SpriteDispatch2", "Entity sprite dispatch variant 2: entity[0x72] bits"),
    0x80044308: ("Entity_CheckPlayer", "Entity player checker: tests entity[0x72] bit 0x8000"),
    0x80034338: ("Event_DrawUI", "Event UI drawer: checks DAT_800bf81a/b, draws UI elements"),
    0x80075824: ("Audio_SeqPlay", "Audio sequence player: checks DAT_1f80019a, plays SEQ"),
    0x8006ACAC: ("Entity_InitConfig", "Entity config initializer: switch on entity[2] type"),
    0x80047468: ("Collision_Push2", "Collision push variant 2: GTE cos/sin, applies push"),
    0x80042894: ("Entity_State_Anim", "Entity anim state: builds sprite data, submits to OT"),
    0x8006EA7C: ("Camera_Init", "Camera initializer: sets entity[0x56]=0x100, zeroes flags"),
    0x80050B08: ("System_Init2", "System init variant 2: calls MDEC+GPU+CD init sequence"),
    0x8007F498: ("Menu_DrawPage", "Menu page drawer: renders full page with GTE projection"),
    0x80066DE8: ("Entity_State_Throw", "Entity throw state: entity[6]=0, spawns projectile"),

    # -- Batch 53: Entity / GTE / Audio / Camera (25 funcs) --
    0x8002E1E8: ("Entity_DrawSprite", "Entity sprite drawer: renders sprite with GTE projection"),
    0x80072898: ("Entity_AnimController", "Entity animation controller: manages anim state machine"),
    0x8004491C: ("Entity_StateTrigger2", "Entity state trigger variant 2: entity[0x78]=1, checks flags"),
    0x8006AE28: ("Entity_Behavior_Destroy", "Entity destroy behavior: entity[4] 0->1->2, cleanup"),
    0x800532A0: ("Entity_StateDispatch3", "Entity state dispatch variant 3: entity[0x6A] dispatch"),
    0x8005AEE4: ("Entity_PhysicsStep4", "Entity physics step variant 4: different collision path"),
    0x80032AB4: ("GTE_Project6", "GTE project variant 6: loads matrix, projects, stores result"),
    0x80032CBC: ("GTE_Project7", "GTE project variant 7: different matrix source"),
    0x80041D60: ("Entity_StateWait4", "Entity wait state variant 4: entity[0x78]=1, polls condition"),
    0x800399FC: ("Save_Confirm", "Save confirmation: entity[1] state, handles yes/no"),
    0x8004F184: ("UI_DialogText", "UI dialog text handler: parses 48-byte buffer, draws text"),
    0x80053FDC: ("Entity_StateEnd3", "Entity state end variant 3: checks timer, transitions"),
    0x80072308: ("Entity_SpawnEffect", "Entity effect spawner: allocs child, sets sprite+pos"),
    0x80048134: ("Collision_CheckWall", "Collision wall checker: computes wall normal, push"),
    0x80097194: ("CD_SPU_Cmd2", "CD SPU command variant 2: sets DAT_800ac654, writes regs"),
    0x8006BE88: ("Entity_State_Trail", "Entity trail state: spawns trail particles behind entity"),
    0x8007F8F8: ("Menu_DrawSave", "Menu save drawer: renders save menu with GTE projection"),
    0x80082970: ("GPU_DMASend3", "GPU DMA send variant 3: different queue management"),
    0x80092080: ("Audio_SeqCmd", "Audio sequence command: sends cmd to SEQ player"),
    0x8006D02C: ("Camera_Commit", "Camera committer: applies computed position to view matrix"),
    0x800446A4: ("Entity_State_Scene2", "Entity scene state variant 2: entity[0x78] dispatch"),
    0x8004F514: ("UI_PanelDraw", "UI panel drawer: renders 9-slice panel with text"),
    0x80063158: ("Entity_Behavior_Spin", "Entity spin behavior: entity[0x154] deceleration"),
    0x8002F514: ("Entity_Behavior_Spawn", "Entity spawn behavior: switch on entity type, spawns"),
    0x8002DF68: ("GTE_Project8", "GTE project variant 8: loads from scratchpad, projects"),

    # -- Batch 54: Entity / CD / Audio / Camera (25 funcs) --
    0x8006228C: ("Entity_State_Fly", "Entity fly state: entity[6] state machine, aerial movement"),
    0x8002B8F4: ("Entity_BehaviorType3", "Entity behavior type variant 3: entity[4]=1, type dispatch"),
    0x8006DCF4: ("Camera_Update", "Camera updater: checks entity[0x74] flags, updates position"),
    0x8002AB5C: ("GTE_Project9", "GTE project variant 9: loads matrix from entity, projects"),
    0x8008BBE8: ("CD_EventCallback", "CD event callback handler: processes event queue"),
    0x8005490C: ("Entity_AnimLoadDispatch", "Entity anim load dispatcher: switch on entity type"),
    0x8003791C: ("Entity_DrawFull", "Entity full drawer: processes sprite + GTE projection"),
    0x8002C6AC: ("GTE_Project10", "GTE project variant 10: different scratchpad layout"),
    0x800683B8: ("Entity_BehaviorType4", "Entity behavior type variant 4: entity[4]=1, complex"),
    0x800977C0: ("CD_TransferCheck", "CD transfer checker: validates DAT_800ac594, checks DMA"),
    0x8004B528: ("Entity_State_Jump4", "Entity jump state variant 4: entity[6]=1, aerial"),
    0x800433FC: ("Entity_State_Event2", "Entity event state variant 2: entity[0x78] dispatch"),
    0x8005444C: ("Entity_CollisionGround", "Entity collision ground: checks ground contact, sets flag"),
    0x80061A7C: ("Entity_State_Swim", "Entity swim state: entity[6] state machine, water movement"),
    0x80020364: ("Entity_Behavior_AI", "Entity AI behavior: checks target, moves toward player"),
    0x80094C10: ("Audio_SeqTime", "Audio sequence timer: computes seq time from tick count"),
    0x800892A4: ("MDEC_DecodeControl", "MDEC decode controller: reads macroblock header, dispatches"),
    0x80037B6C: ("Entity_DrawUI2", "Entity UI drawer variant 2: renders UI sprites"),
    0x8001D41C: ("Engine_OverlayLoad", "Engine overlay loader: switch on param, loads overlays"),
    0x80036240: ("Event_HandlerMain", "Event main handler: processes event queue, dispatches"),
    0x8004602C: ("Collision_Push3", "Collision push variant 3: computes push from normal"),
    0x80068BE8: ("Entity_Behavior_Move2", "Entity move behavior variant 2: entity[5] state"),
    0x8007C0D0: ("Entity_ScriptRun", "Entity script runner: reads bytecode from entity[0x14]"),
    0x800205CC: ("Entity_CheckTarget", "Entity target checker: validates target entity ptr"),
    0x8008E410: ("Audio_SeqLoad", "Audio sequence loader: loads SEQ data from CD"),

    # -- Batch 55: Entity / Audio / Collision / System (25 funcs) --
    0x800281EC: ("GTE_ProjectSprite", "GTE sprite projector: loads matrix, projects sprite vertices"),
    0x80095530: ("Audio_VoiceKeyOn", "Audio voice key-on: activates voice with ADSR params"),
    0x8004720C: ("Collision_CheckMove", "Collision move checker: computes new pos from collision"),
    0x80021394: ("Entity_CalcRoute", "Entity route calculator: computes path toward target"),
    0x80094150: ("Audio_SeqEvent", "Audio sequence event handler: processes SEQ events"),
    0x80057A68: ("Entity_State_Hit", "Entity hit state: entity[0x158] ptr, checks hit reaction"),
    0x8003A9A0: ("Menu_SaveLoad", "Menu save/load handler: entity[5] state, manages save data"),
    0x80058648: ("Entity_InitType2", "Entity type init variant 2: AllocFromPool, sets config"),
    0x800624B4: ("Entity_State_Ladder", "Entity ladder state: entity[6] dispatch, climb movement"),
    0x80033B94: ("Entity_DrawChild5", "Entity child drawer variant 5: draws with GTE projection"),
    0x800559F4: ("Entity_Behavior_Swing", "Entity swing behavior: checks timer, applies swing"),
    0x8003FFCC: ("Entity_State_Grab", "Entity grab state: entity[6]=0, plays SFX, grabs target"),
    0x80067A40: ("Entity_State_Throw2", "Entity throw state variant 2: spawns+throws object"),
    0x80092660: ("Audio_SeqControl", "Audio sequence controller: manages SEQ playback state"),
    0x8002ECD8: ("Entity_DrawSprite2", "Entity sprite drawer variant 2: different projection"),
    0x800645E0: ("Entity_State_Float", "Entity float state: entity[6] state machine, buoyancy"),
    0x80033FF4: ("Entity_DrawChild6", "Entity child drawer variant 6: processes child draw"),
    0x8006C0C4: ("Entity_Behavior_AttackMain", "Entity attack main: entity[6] switch, attack states"),
    0x80073328: ("Entity_Behavior_Push", "Entity push behavior: entity[6] switch, push reaction"),
    0x8006271C: ("Entity_State_Roll", "Entity roll state: entity[6] state machine, rolling movement"),
    0x8005A970: ("Entity_State_Action2", "Entity action state variant 2: entity[6] dispatch"),
    0x8001CFC8: ("System_InitMain", "System main init: sets up memory, calls subsystem inits"),
    0x8002C138: ("Entity_DrawSprite3", "Entity sprite drawer variant 3: different matrix source"),
    0x80064E48: ("Entity_State_Charge", "Entity charge state: entity[6] state machine, charging"),
    0x8005A714: ("Entity_State_Attack3", "Entity attack state variant 3: entity[0x6A] dispatch"),

    # -- Batch 56: Entity / MDEC / Audio / Menu (25 funcs) --
    0x80021AB0: ("Entity_CalcPath", "Entity path calculator: complex route computation toward target"),
    0x80070BD0: ("Entity_State_Hang", "Entity hang state: entity[6] state, hanging/climbing"),
    0x8003A790: ("Menu_SaveExec", "Menu save executor: entity[5]=1, writes/reads save data"),
    0x80088E88: ("MDEC_DecodeFrame", "MDEC frame decoder: processes full frame, dispatches blocks"),
    0x8002EF58: ("Entity_DrawBehavior", "Entity draw behavior: entity[4]=1, selects draw method"),
    0x80090750: ("Audio_InitSeq", "Audio sequence initializer: inits SEQ engine, 0x3E6 loops"),
    0x800945A0: ("Audio_SeqTimer2", "Audio sequence timer variant 2: tick computation"),
    0x8006A900: ("Entity_State_Block", "Entity block state: entity[6] state, blocking/defense"),
    0x800702C0: ("Entity_State_Follow", "Entity follow state: entity[0x62] target, follows"),
    0x80095D10: ("Audio_VoiceParam2", "Audio voice param variant 2: extended parameter setup"),
    0x80096BF0: ("CD_SPU_Init", "CD SPU initializer: sets SPU RAM config, clears buffers"),
    0x80075A80: ("Audio_SeqPlay2", "Audio sequence player variant 2: manages playback state"),
    0x8004C930: ("Entity_Behavior_NPC", "Entity NPC behavior: entity[4]=1, dialog/interaction"),
    0x80078988: ("Menu_TextDraw2", "Menu text drawer variant 2: renders with different format"),
    0x80039BCC: ("Save_Write", "Save data writer: writes save block to memory card"),
    0x8005950C: ("Entity_InputProcess", "Entity input processor: reads pad flags, sets state"),
    0x8004F6D0: ("UI_MenuUpdate", "UI menu updater: processes menu state, draws elements"),
    0x80086A80: ("MDEC_DMAStart2", "MDEC DMA start variant 2: configures DMA for decode"),
    0x80020868: ("Entity_CollisionResponse", "Entity collision response: sets entity[0x29], pushes"),
    0x8002FDD0: ("GTE_Project11", "GTE project variant 11: entity draw projection"),
    0x8002A834: ("Entity_DrawSprite4", "Entity sprite drawer variant 4: different matrix config"),
    0x80087FA0: ("MDEC_StateMachine3", "MDEC state machine variant 3: entity[0x46]=3/4 states"),
    0x8007CEEC: ("GPU_SpriteDecode", "GPU sprite decoder: reads bytecode, builds prim list"),
    0x8006762C: ("Entity_State_Attack4", "Entity attack state variant 4: entity[6] switch"),
    0x8005EF48: ("Entity_State_Dash3", "Entity dash state variant 3: entity[6] state machine"),

    # -- Batch 57: Engine / Entity / Collision / Audio (25 funcs) --
    0x8003EBE0: ("Engine_Main", "Engine main loop: processes frame, updates subsystems, draws"),
    0x8006506C: ("Entity_State_Attack5", "Entity attack state variant 5: entity[6] state machine"),
    0x8007091C: ("Entity_Behavior_Sequence", "Entity sequence behavior: runs scripted action seq"),
    0x8004CE14: ("UI_InventoryMenu", "UI inventory menu: entity[4]=1, manages inventory UI"),
    0x80048360: ("Collision_CheckResult", "Collision result checker: computes normal + distance"),
    0x80030D68: ("Entity_DrawSprite5", "Entity sprite drawer variant 5: projection + draw"),
    0x80069300: ("Entity_BehaviorSet4", "Entity behavior setter variant 4: entity[4] state"),
    0x80069CD8: ("Entity_SpawnControl", "Entity spawn controller: manages spawn queue"),
    0x80043108: ("Entity_State_Spawn", "Entity spawn state: reads script, spawns entities"),
    0x80053968: ("Entity_Behavior_End", "Entity end behavior: cleanup and transition"),
    0x8005EC70: ("Entity_State_Dive", "Entity dive state: entity[6] state, diving movement"),
    0x80091460: ("Audio_SeqVoice", "Audio sequence voice: assigns voice to SEQ track"),
    0x8006483C: ("Entity_State_Wall", "Entity wall state: entity[7] state, wall collision"),
    0x80062D8C: ("Entity_State_Slide", "Entity slide state: checks flags, sliding movement"),
    0x80093650: ("Audio_SeqData", "Audio sequence data: processes SEQ data stream"),
    0x80071768: ("Entity_AnimPlayer", "Entity animation player: manages animation playback"),
    0x800876A0: ("MDEC_DecodeMain", "MDEC decode main: full decode pipeline controller"),
    0x800387E0: ("Menu_InputHandle", "Menu input handler: processes pad input for menus"),
    0x8007C940: ("GPU_SpriteBuild", "GPU sprite builder: constructs sprite prim from data"),
    0x800346BC: ("Event_DispatchMain", "Event dispatch main: DAT_80100660 state machine"),
    0x80064BA0: ("Entity_State_Turn", "Entity turn state: entity[6] state, turning around"),
    0x80098810: ("CD_SPU_Transfer2", "CD SPU transfer variant 2: writes to SPU RAM"),
    0x80046A44: ("Collision_CheckFull2", "Collision full check variant 2: extended validation"),
    0x80070018: ("Entity_ChildUpdate2", "Entity child update variant 2: entity[4]=1, processes"),
    0x800939A0: ("Audio_SeqCommand", "Audio sequence commander: sends commands to SEQ"),

    # -- Batch 58: Entity / GPU / CD / Event (25 funcs) --
    0x80024F18: ("Entity_BehaviorType5", "Entity behavior type variant 5: complex dispatch"),
    0x8007EAE4: ("GPU_SpriteList", "GPU sprite list builder: constructs linked sprite prims"),
    0x80055390: ("Entity_StateControl", "Entity state controller: entity[0x174] flags, transitions"),
    0x800798F8: ("Engine_InitEntity", "Engine entity initializer: inits pools, clears lists"),
    0x8007FDB0: ("GPU_OT_Build", "GPU OT builder: constructs ordering table entries"),
    0x80076D68: ("Entity_AnimFrame", "Entity animation frame: advances frame, checks wrap"),
    0x8005A39C: ("Entity_State_Attack6", "Entity attack state variant 6: entity[6] dispatch"),
    0x80072A78: ("Entity_Behavior_Cutscene2", "Entity cutscene behavior variant 2: entity[4] state"),
    0x80068698: ("Entity_Behavior_Door2", "Entity door behavior variant 2: entity[4]=1, transition"),
    0x80035FAC: ("Event_Dispatch", "Event dispatcher: looks up event type, calls handler"),
    0x8003AD48: ("Menu_SaveDraw", "Menu save drawer: entity[4]=1, draws save UI"),
    0x80078CA8: ("GPU_SpriteRender2", "GPU sprite renderer variant 2: builds prims, submits"),
    0x80023A04: ("Entity_MoveTarget", "Entity move to target: computes trajectory toward point"),
    0x80097A90: ("CD_DMAProcess", "CD DMA processor: manages DMA transfer queue"),
    0x80071DFC: ("Entity_SpawnAnim", "Entity spawn animator: entity[6] state, spawns + anims"),
    0x80034CE0: ("Event_MainDispatch", "Event main dispatcher: switch on event type 0x66-0x6E"),
    0x800739AC: ("Entity_Behavior_Player", "Entity player behavior: entity[4]=1, player control"),
    0x80054E80: ("Entity_StateMain", "Entity main state: entity[0x145] flags, primary dispatch"),
    0x8005E580: ("Entity_State_Action3", "Entity action state variant 3: entity[6] switch"),
    0x80080424: ("Entity_BehaviorType6", "Entity behavior type variant 6: entity[4]=1, type check"),
    0x8005E8FC: ("Entity_State_Action4", "Entity action state variant 4: entity[6] switch"),
    0x80076904: ("Entity_AnimController2", "Entity animation controller variant 2: frame advance"),
    0x80023D48: ("Entity_CalcMove", "Entity move calculator: computes velocity + position"),
    0x8008B8F0: ("CD_FileOpen", "CD file opener: looks up file, opens for reading"),
    0x8003E448: ("GPU_OT_Sort", "GPU OT sorter: sorts primitives by Z depth"),

    # -- Batch 59: Entity / Camera / Audio / CD main funcs (25 funcs) --
    0x8008007C: ("GPU_OT_Submit2", "GPU OT submitter variant 2: different queue handling"),
    0x8007D208: ("GPU_SpriteCmd", "GPU sprite command processor: entity[0x46] flags, dispatches"),
    0x8006D2AC: ("Camera_UpdateMain", "Camera update main: full camera update pipeline"),
    0x8002B3A4: ("Entity_DrawSprite6", "Entity sprite drawer variant 6: full projection pipeline"),
    0x8004DF94: ("UI_DialogMain", "UI dialog main: entity[4]=1, full dialog state machine"),
    0x8001F054: ("Entity_Behavior_Boss", "Entity boss behavior: complex multi-state AI"),
    0x8005CDF8: ("Entity_StateMain2", "Entity state main variant 2: entity[6] dispatch"),
    0x80049A60: ("Entity_State_Title", "Entity title state: entity[5] switch, title screen"),
    0x8001FF7C: ("Entity_MoveTo", "Entity move-to: computes trajectory, updates position"),
    0x8001E860: ("Entity_InitFull", "Entity full initializer: sets all entity fields from data"),
    0x80063F9C: ("Entity_PhysicsMain", "Entity physics main: collision + movement pipeline"),
    0x80045CAC: ("Collision_MoveMain", "Collision move main: full collision response pipeline"),
    0x80090210: ("Audio_SeqMain", "Audio sequence main: manages full SEQ playback loop"),
    0x80058304: ("Entity_ActionDispatch", "Entity action dispatcher: switch on action type"),
    0x80062A30: ("Entity_State_Cliff", "Entity cliff state: edge detection + reaction"),
    0x80046E2C: ("Collision_CheckEnv", "Collision environment check: full world collision"),
    0x8006D654: ("Camera_ModeMain", "Camera mode main: switch on DAT_800e7fe4, sets params"),
    0x80096590: ("CD_CmdMain", "CD command main: processes CD commands with retry"),
    0x800251F0: ("Entity_DrawMain", "Entity draw main: full entity rendering pipeline"),
    0x800741DC: ("Entity_SpawnMain", "Entity spawn main: full spawn pipeline with callbacks"),
    0x80057FD4: ("Entity_StateMain3", "Entity state main variant 3: complex state dispatch"),
    0x8005D16C: ("Entity_BehaviorMain", "Entity behavior main: primary behavior dispatcher"),
    0x80063B94: ("Entity_StateMain4", "Entity state main variant 4: extended state handler"),
    0x800931C0: ("Audio_Main", "Audio main: full audio processing pipeline"),
    0x8006E464: ("Camera_Main", "Camera main: full camera management system"),

    # -- Batch 60: Core engine main functions (25 funcs) --
    0x8002BC9C: ("GTE_ProjectMain", "GTE projection main: full projection pipeline"),
    0x8001EC3C: ("Entity_MoveMain", "Entity move main: trajectory + collision + position"),
    0x80099490: ("CD_SPU_Main", "CD SPU main: SPU RAM transfer controller"),
    0x8008179C: ("GPU_DrawMain", "GPU draw main: full draw command processor"),
    0x80061C64: ("Entity_State_Giant", "Entity giant state: large entity state machine"),
    0x8002C920: ("Entity_DrawMain2", "Entity draw main variant 2: different render path"),
    0x8006B494: ("Entity_Behavior_Attack", "Entity attack behavior main: entity[6] switch, attack types"),
    0x80039110: ("Menu_Main", "Menu main: full menu system controller"),
    0x8006A384: ("Entity_Behavior_EnemyMain", "Entity enemy behavior main: entity[6] switch, AI states"),
    0x8007D594: ("GPU_SpriteMain", "GPU sprite main: full sprite rendering pipeline"),
    0x80038A00: ("Engine_UpdateMain", "Engine update main: full frame update pipeline"),
    0x80059ED8: ("Entity_StateMain5", "Entity state main variant 5: entity[4]=1, state dispatch"),
    0x800574E0: ("Entity_State_Combo", "Entity combo state: chain attacks, timer-based"),
    0x80098330: ("CD_Main", "CD main: full CD-ROM command processor"),
    0x80073CD8: ("Entity_BehaviorMain2", "Entity behavior main variant 2: entity[4]=1 dispatch"),
    0x800462E4: ("Collision_Main", "Collision main: full collision detection pipeline"),
    0x80066878: ("Entity_State_Death", "Entity death state: entity[6] switch, death animation"),
    0x80037E44: ("Entity_DrawMain3", "Entity draw main variant 3: extended draw pipeline"),
    0x8004E414: ("UI_Main", "UI main: full user interface controller"),
    0x80099970: ("CD_XA_Main", "CD XA audio main: XA-ADPCM decode pipeline"),
    0x8005FB54: ("Entity_StateMain6", "Entity state main variant 6: DAT_1f80027a=1, state init"),
    0x8008A190: ("CD_ReadMain", "CD read main: full sector read pipeline"),
    0x8002D65C: ("Entity_DrawMain4", "Entity draw main variant 4: final projection path"),
    0x8007712C: ("GTE_SpriteTransform", "GTE sprite transform: full vertex transform pipeline"),
    0x8007E1B8: ("GPU_SpriteDrawMain", "GPU sprite draw main: builds + submits sprite prims"),

    # -- Batch 61: Core dispatchers - FINAL (27 funcs) --
    0x80066FA8: ("Entity_State_Fight", "Entity fight state: complex combat state machine (200L)"),
    0x8008D110: ("MDEC_Main", "MDEC main: full MDEC decode controller (201L)"),
    0x8005C8A0: ("Entity_StateMain7", "Entity state main variant 7: complex dispatch (202L)"),
    0x80030264: ("Entity_DrawMain5", "Entity draw main variant 5: full draw pipeline (202L)"),
    0x80060544: ("Entity_StateMain8", "Entity state main variant 8: entity[7] switch (205L)"),
    0x8004AAC4: ("Entity_Main", "Entity main: primary entity update loop (205L)"),
    0x8005C26C: ("Entity_StateMain9", "Entity state main variant 9: entity[6] switch (219L)"),
    0x800635D4: ("Entity_Update", "Entity update: full per-frame entity update (228L)"),
    0x8002E680: ("Entity_DrawMain6", "Entity draw main variant 6: GTE projection path (236L)"),
    0x80075FF8: ("Audio_SeqMain2", "Audio sequence main variant 2: SEQ+SPU control (236L)"),
    0x80065A54: ("Entity_StateMain10", "Entity state main variant 10: entity[6] switch (239L)"),
    0x8006F2D0: ("Entity_ChildMain", "Entity child main: manages child entity lifecycle (242L)"),
    0x80058918: ("Entity_StateDispatcherMain", "Entity state dispatcher main: master state switch (244L)"),
    0x8005F2F0: ("Entity_StateMain11", "Entity state main variant 11: DAT_1f80027a=1 (246L)"),
    0x80058F5C: ("Entity_ActionMain", "Entity action main: action state dispatcher (251L)"),
    0x800527C8: ("Entity_DrawMain7", "Entity draw main variant 7: rendering pipeline (254L)"),
    0x8005DE54: ("Entity_StateMain12", "Entity state main variant 12: entity[6] switch (255L)"),
    0x8002CD18: ("Entity_DrawMain8", "Entity draw main variant 8: final draw path (273L)"),
    0x8009B0C0: ("CD_EventMain", "CD event main: event queue processor (303L)"),
    0x8005D530: ("Entity_StateMain13", "Entity state main variant 13: complex switch (331L)"),
    0x8009A770: ("Debug_PrintfMain", "Debug printf main: formatted output engine (340L)"),
    0x80055FBC: ("Entity_BehaviorDispatcher", "Entity behavior dispatcher: master behavior switch (375L)"),
    0x80036DFC: ("Event_Main", "Event main: full event system controller (377L)"),
    0x8005B63C: ("Entity_StateMain14", "Entity state main variant 14: extended dispatch (385L)"),
    0x8001DD00: ("Entity_Main2", "Entity main variant 2: complex entity controller (453L)"),
    0x80060C60: ("Entity_StateMain15", "Entity state main variant 15: mega state machine (458L)"),
    0x8001DC9C: ("System_Main", "System main: root initialization + main loop (464L)"),
}

# ============================================================
# Header template for mapped .c files
# ============================================================
HEADER_TEMPLATE = """/**
 * @brief {comment}
 * @note Original: {old_name} at 0x{addr:08X}
 */
// {name}

"""

def addr_to_filename(addr):
    """Convert address to the Ghidra dump filename pattern."""
    return f"FUN_{addr:08x}.c"

def find_ghidra_dump(addr):
    """Find the Ghidra dump file for an address (case-insensitive)."""
    pattern = f"FUN_{addr:08x}"
    if not os.path.isdir(GHIDRA_DUMPS_DIR):
        return None

    for fname in os.listdir(GHIDRA_DUMPS_DIR):
        if fname.lower().startswith(pattern.lower()):
            return os.path.join(GHIDRA_DUMPS_DIR, fname)
    return None

def generate_mapped_file(addr, name, comment, dump_path):
    """Generate the mapped .c file from a Ghidra dump."""
    with open(dump_path, "r") as f:
        content = f.read()

    old_name = f"func_{addr:08X}"
    header = HEADER_TEMPLATE.format(
        comment=comment,
        old_name=old_name,
        addr=addr,
        name=name,
    )

    # If dump already has a descriptive header (first line is /**), skip
    if content.strip().startswith("/**"):
        # Replace the old name comment with new one
        # Keep the body but update header
        pass

    # Remove the original function name line if present (Ghidra puts it)
    # and prepend our header
    lines = content.split("\n")
    out_lines = [header]

    # Skip Ghidra's function declaration line if present
    skip_next = False
    for line in lines:
        stripped = line.strip()
        # Skip Ghidra-style function declarations
        if stripped.startswith("undefined") or stripped.startswith("void ") or \
           stripped.startswith("int ") or stripped.startswith("uint ") or \
           stripped.startswith("short ") or stripped.startswith("byte ") or \
           stripped.startswith("char ") or stripped.startswith("bool "):
            if "FUN_" in stripped or old_name.lower() in stripped.lower():
                # Replace Ghidra name with our name in the declaration
                new_line = re.sub(
                    r'\b' + re.escape(old_name) + r'\b',
                    name,
                    line,
                    flags=re.IGNORECASE
                )
                out_lines.append(new_line)
                continue
        # Keep includes
        if stripped.startswith('#include'):
            out_lines.append(line)
            continue
        # Keep WARNING comments
        if stripped.startswith("/* WARNING"):
            out_lines.append(line)
            continue
        # Skip empty lines at start
        if not out_lines or out_lines[-1].strip():
            out_lines.append(line)
        elif stripped:
            out_lines.append(line)

    out_path = os.path.join(MAPPED_DIR, f"{name}.c")
    with open(out_path, "w") as f:
        f.write("\n".join(out_lines))

    return out_path

def update_symbol_addrs(entries):
    """Add entries to symbol_addrs.txt if not already present."""
    if not os.path.exists(SYMBOL_FILE):
        print(f"ERROR: {SYMBOL_FILE} not found")
        return

    with open(SYMBOL_FILE, "r") as f:
        existing = f.read()

    new_lines = []
    for addr, name in entries:
        line = f"{name} = 0x{addr:08X};"
        if line not in existing:
            new_lines.append(line)

    if not new_lines:
        print("  (all entries already in symbol_addrs.txt)")
        return

    # Append to end of file
    with open(SYMBOL_FILE, "a") as f:
        f.write("\n")
        for line in new_lines:
            f.write(line + "\n")

    print(f"  +{len(new_lines)} entries added to symbol_addrs.txt")


def main():
    os.makedirs(MAPPED_DIR, exist_ok=True)

    mapped = []
    skipped = []
    errors = []

    for addr, (name, comment) in MAPPINGS.items():
        dump_path = find_ghidra_dump(addr)
        if not dump_path:
            errors.append(f"0x{addr:08X}: Ghidra dump not found")
            continue

        out_path = os.path.join(MAPPED_DIR, f"{name}.c")
        if os.path.exists(out_path):
            skipped.append(name)
            continue

        try:
            path = generate_mapped_file(addr, name, comment, dump_path)
            mapped.append((addr, name))
            print(f"  OK  {name} <- 0x{addr:08X}")
        except Exception as e:
            errors.append(f"0x{addr:08X}: {e}")

    # Update symbol_addrs.txt
    if mapped:
        update_symbol_addrs(mapped)

    # Summary
    print(f"\n--- Summary ---")
    print(f"  Mapped:  {len(mapped)}")
    print(f"  Skipped: {len(skipped)} (already exist)")
    print(f"  Errors:  {len(errors)}")
    for e in errors:
        print(f"    {e}")

    return 0 if not errors else 1


if __name__ == "__main__":
    if not MAPPINGS:
        print("No mappings configured. Edit MAPPINGS dict in the script.")
        print("Example:")
        print("  MAPPINGS = {")
        print("      0x8002918C: ('Entity_Behavior_Wander', 'Random wander/patrol behavior'),")
        print("  }")
        sys.exit(0)
    sys.exit(main())
