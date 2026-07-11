#!/usr/bin/env python3
"""
Batch mapper for SOP.BIN overlay.
Reads ghidra dumps, assigns descriptive names,
generates mapped .c files and updates symbol_addrs.txt.

SOP.BIN is loaded at 0x80100000 in RAM.
"""
import os
import re

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GHIDRA_DIR = os.path.join(PROJECT_ROOT, "src", "overlays", "SOP", "ghidra_dumps")
MAPPED_DIR = os.path.join(PROJECT_ROOT, "src", "overlays", "SOP", "mapped")
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

SOP_BASE = 0x80100000

# offset -> (descriptive_name, comment)
MAPPINGS = {
    # Core Loop
    0x0318: ("SOP_MainUpdate", "Main SOP state machine: title screen update loop, manages sub-states and CD loading"),
    0x04B4: ("SOP_StateDispatch", "Jump table dispatcher: 5 sub-states via param+0x50, dispatches to sub-functions"),
    0x094C: ("SOP_ActivateRendering", "Activates entity loop and rendering: calls EntityLoop_Active and screen setup"),

    # CD / Texture Loading
    0x07B4: ("SOP_TextureLoad", "Loads texture pack from CD-ROM: CD_LoadSectors for sector table + data, then Texture_LoadPack"),
    0x0998: ("SOP_CDLoadStateHandler", "CD load state handler: checks CD ready status, initiates sector loads, sets up DMA"),
    0x0848: ("SOP_LoadingStateCheck", "Checks game loading state (DAT_800e8008 + DAT_800e806c) during boot sequence"),

    # GTE 3D Rendering
    0x0A18: ("SOP_GTE_TriangleProcessor", "GTE-based 3D triangle processing: transforms 9-word primitives, bounds check (0x140, 0xF0)"),
    0x0CE4: ("SOP_GTE_QuadProcessor", "GTE-based 4-point quad processing: transforms 11-word entries with 2 cop2 operations"),
    0x1044: ("SOP_MaterialColorProcessor", "Processes material/color data via GTE cop2 registers, iterates lookup table"),

    # Screen / Rasterizer
    0x1144: ("SOP_ScreenSpaceTransform", "2D screen-space coordinate transform: computes perspective projection from 3D points"),
    0x1410: ("SOP_RasterizerFill", "Triangle rasterizer: sorts 3 vertices by Y, fills horizontal scanline spans with bounds check"),

    # Entity Spawners / Creators
    0x08C4: ("SOP_CreateIntroEntities", "Creates 3 intro entities from data table at 0x8010C98C using Entity_AllocByPoolId"),
    0x1E94: ("SOP_CreateSpriteEntity", "Allocates a sprite entity (pool 0, type 6) with draw function 0x8002AB5C"),
    0x24B0: ("SOP_SpawnEntityByType", "Spawns entity by type: pool 3, subtype 0x1A, sets behavior to 0x8010B2D4"),
    0x2E1C: ("SOP_SpawnEntitySubtype1E", "Spawns entity: pool 0, type 3, subtype 0x1E, sets behavior to 0x8010BC8C"),

    # Entity State Machines
    0x1964: ("SOP_EntityStateDispatch", "Entity state jump table dispatcher: 8 sub-states via param+0x78"),
    0x1B9C: ("SOP_FadeTransitionEntity", "Fade/color transition entity: manages RGB alpha channels, interpolates between states"),
    0x1D60: ("SOP_TitleEntitySpawner", "Title screen entity spawner: 4-state machine, spawns entity at saved position"),
    0x1F00: ("SOP_GameStateTransition", "Game state transition handler: sets g_GameState=2, initializes camera and sprite"),
    0x1FC4: ("SOP_TimerStateHandler", "Timer-based state machine: 4 sub-states with countdown, triggers state transitions"),
    0x20DC: ("SOP_FinalStateTransition", "Final state transition: sets g_GameState=5, camera init, countdown timer"),
    0x2180: ("SOP_ColorFadeAnimation", "Color fade animation: increments RGB channels, uses sin/cos for position offset"),
    0x2338: ("SOP_CutsceneEntitySpawner", "Cutscene entity spawner: 4-state machine, sets up animation and camera"),
    0x27FC: ("SOP_EntitySpawner2", "Entity spawner variant 2: spawns with camera shake, sets position/rotation"),
    0x2910: ("SOP_VerticalMovementEntity", "Vertical movement entity: applies gravity, moves upward with velocity cap"),
    0x29F4: ("SOP_TitleCardEntity", "Title card/collectible display entity: moves upward, shows collectible count"),
    0x2B5C: ("SOP_ChildEntityTracker", "Child entity that tracks parent entity position, applies gravity"),
    0x2CF0: ("SOP_ParentTrackedEntitySpawner", "Spawns entity that follows parent at offset, sets up animation"),
    0x2F10: ("SOP_ScrollTextEntity", "Scroll/credits text entity: slide timer with wrap-around, pan effect"),
    0x2FB8: ("SOP_MatrixTransformEntity", "GTE matrix transform entity: applies 3D transform in 2 iterations"),

    # Background / Tile Rendering
    0x32D0: ("SOP_TileMapRenderer", "Tile map renderer: builds OT primitives from texture page, processes tile animations"),
    0x3704: ("SOP_TileAnimationUpdate", "Tile animation update: cycles tile textures based on timer, updates VRAM"),
    0x3800: ("SOP_BackgroundRenderMain", "Background rendering main loop: iterates entities, builds display list"),

    # Entity Helpers / Initializers
    0x24FC: ("SOP_InitEntityPosition", "Initializes entity position (16000, 0xF0D0, 0x4EB5) and sprite attributes"),
    0x2E68: ("SOP_InitEntityFromParent", "Initializes entity with position from parent entity at offset (+0x14, -0x50)"),

    # Entity Dispatchers
    0x2544: ("SOP_EntityAnimStateHandler", "Entity animation state handler: checks animation completion, transitions"),
    0x25EC: ("SOP_EntityDispatcher", "Jump table entity dispatcher: 7 sub-states via param+6"),
}


def main():
    # Read existing symbol_addrs.txt
    with open(SYMBOL_FILE) as f:
        sym_content = f.read()

    new_entries = []
    mapped_count = 0

    for offset, (name, comment) in sorted(MAPPINGS.items()):
        full_addr = SOP_BASE + offset
        ghidra_name = f"FUN_{offset:08x}"
        ghidra_path = os.path.join(GHIDRA_DIR, f"{ghidra_name}.c")

        if not os.path.exists(ghidra_path):
            print(f"  SKIP: {ghidra_path} not found")
            continue

        # Read ghidra dump
        with open(ghidra_path) as f:
            content = f.read()

        # Replace FUN_ name in header comment and function definition
        content = content.replace(f"// {ghidra_name}", f"// {name} ({ghidra_name}) - {comment}")
        content = content.replace(f"void {ghidra_name}(", f"void {name}(")
        # Also handle non-void return types
        content = re.sub(rf'\b{ghidra_name}\b(?!\.)', name, content)

        # Write mapped file
        mapped_path = os.path.join(MAPPED_DIR, f"{name}.c")
        with open(mapped_path, 'w') as f:
            f.write(content)

        # Check if address already in symbol_addrs
        addr_hex = f"0x{full_addr:08X}"
        if addr_hex not in sym_content and name not in sym_content:
            new_entries.append(f"{name} = {addr_hex};\n")
            mapped_count += 1

    # Append new entries to symbol_addrs.txt
    if new_entries:
        with open(SYMBOL_FILE, 'a') as f:
            f.write("\n# -- SOP.BIN overlay (title screen / opening sequence) --\n")
            for entry in new_entries:
                f.write(entry)

    print(f"Mapped: {mapped_count} functions")
    print(f"Output: {MAPPED_DIR}/")
    print(f"Updated: {SYMBOL_FILE}")


if __name__ == "__main__":
    main()
