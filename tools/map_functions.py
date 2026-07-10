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

    # -- System / Debug --
    0x8009A420: ("Mem_Set", "memset implementation: fills memory region with byte value"),
    0x8009A730: ("Debug_Printf", "Debug printf: formats and outputs debug string with variable arguments"),
    0x800834D4: ("GPU_CheckTimeout", "GPU timeout/reset handler: resets GPU state if hung or error detected"),
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
