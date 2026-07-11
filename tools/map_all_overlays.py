#!/usr/bin/env python3
"""
Batch map ALL small overlays at once: GAME, OPN, DEMO, CRD, A0A, A0C, A0D, A0E, A0F.
Reads ghidra dumps, generates mapped .c files in category folders, updates symbol_addrs.txt.
"""
import os, re, shutil

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SYMBOL_FILE = os.path.join(PROJECT_ROOT, "symbol_addrs.txt")

# Load base addresses from ROM config / convention
# Overlays loaded at 0x80180000+ (gameplay overlays), 0x80140000+ (system)
OVERLAY_BASES = {
    "GAME": 0x80180000,
    "OPN": 0x80140000,
    "DEMO": 0x80180000,
    "CRD": 0x80140000,
    "A0A": 0x80000000,
    "A0C": 0x80000000,
    "A0D": 0x80000000,
    "A0E": 0x80000000,
    "A0F": 0x80000000,
}

GHIDRA_BASE = 0x08010000  # All overlays use this in Ghidra

OVERLAYS = {
    "GAME": {
        "category": "game",
        "mappings": [
            (0x07FC, "GAME_StateDispatch", "Main state dispatcher: 5 states via entity field_0x4c"),
            (0x0970, "GAME_SubStateDispatch", "Sub-state dispatcher: 12 states via entity field_0x4e"),
            (0x0E8C, "GAME_MainUpdate", "Main game state update handler: checks flags DAT_800bf80d/f, manages transitions"),
            (0x1008, "GAME_LoadingDispatch", "Loading screen dispatcher: 6 states via entity field_0x4e"),
            (0x1444, "GAME_Init", "Game initialization: pool clear, entity init, render init, sound init"),
            (0x1568, "GAME_FrameUpdate", "Per-frame update: increments counters, calls entity/render/sound updates"),
            (0x1784, "GAME_LevelSetup", "Level setup: sets player position (1000,-1000,3000), spawns camera entities"),
            (0x18D4, "GAME_PlayDispatch", "Play state dispatcher: 5 states via entity field_0x4e"),
            (0x1B14, "GAME_StateTransition1", "State transition: loads level data, checks completion flag DAT_1f80019b"),
            (0x1BF8, "GAME_StateTransitionAudio", "State transition with audio: sets bank 9, loads level, checks flag"),
            (0x1D14, "GAME_ResultsDispatch", "Results/summary screen dispatcher: 7 states via field_0x4e"),
            (0x1EE4, "GAME_MenuDispatch", "Menu dispatcher: 12 states via field_0x6b, handles input flags"),
            (0x22D0, "GAME_InputHandler", "Input/flag handler: reads _DAT_800e7e68 buttons, triggers transitions"),
            (0x23FC, "GAME_EventDispatch", "Event/sequence dispatch: processes event results, manages camera events"),
            (0x24B8, "GAME_ResetToTitle", "Reset to title screen: resets entity state, calls pool init"),
            (0x24F8, "GAME_InitPlayState", "Initialize play state: clears flags, sets entity sub-states"),
            (0x255C, "GAME_TopLevelDispatch", "Top-level dispatcher: 6 states via entity field_0x4a"),
            (0x2604, "GAME_DualStateCheck", "Dual state checker: checks field_0x4c and field_0x4e interdependently"),
            (0x26B0, "GAME_OptionsDispatch", "Options screen dispatcher: 7 states via field_0x4c"),
            (0x279C, "GAME_UnloadState", "Unload/reset state: clears entity sub-states, calls UI reset"),
            (0x2838, "GAME_SaveDispatch", "Save screen dispatcher: 10 states via field_0x4c"),
            (0x2BCC, "GAME_SystemInit", "System init (without game-specific): pool init, entity init, render init"),
            (0x2C30, "GAME_ScreenFadeOut", "Screen fade out effect: modulates entity color RGB channels down"),
            (0x2C94, "GAME_ScreenFadeIn", "Screen fade in effect: modulates entity color RGB channels up"),
            (0x2CFC, "GAME_SequenceCleanup", "Sequence cleanup: clears flags, resets to menu dispatch state"),
        ]
    },
    "OPN": {
        "category": "opn",
        "mappings": [
            (0x0300, "OPN_EntityDispatch", "Entity dispatcher: 15 states via entity field_0x06 (color_mode)"),
            (0x0B78, "OPN_CalcDistance", "Distance/angle calculation: atan2 between 2 points, returns dist < 0x50"),
            (0x0C84, "OPN_StateDispatch", "State dispatcher: 12 states via entity field_0x03"),
            (0x1924, "OPN_CameraUpdate", "Camera matrix update: GTE registers, sin/cos rotation, produces view matrix"),
            (0x1D30, "OPN_PlayerState", "Player state machine: checks input (_DAT_1f80017c), spawns entities, plays SFX"),
            (0x1E40, "OPN_PlayerAnimCheck", "Player animation check: sets completion flag DAT_800bf80e, triggers next state"),
            (0x1F08, "OPN_CameraOffsetSetup", "Camera offset setup: writes camera pos from entity, plays animation sequence"),
            (0x2574, "OPN_MoveInterpolate", "Movement interpolation: interpolates entity to target in 20 frames with gravity"),
            (0x27D8, "OPN_SpawnEntity", "Entity spawner: pool 0, type 3, subtype 0x10, behavior 0x8012DA04"),
            (0x2820, "OPN_CinematicSequence", "Cinematic sequence: checks frame counter DAT_800bf9ed, sound, camera zoom"),
            (0x2A1C, "OPN_EntityGroupManager", "Entity group/sequence manager: manages child entities via slot array"),
            (0x2CFC, "OPN_ChildSpawner", "Child entity spawner: spawns explosion/particle children with SFX"),
        ]
    },
    "DEMO": {
        "category": "demo",
        "mappings": [
            (0x05FC, "DEMO_MainUpdate", "Demo main update loop"),
            (0x0744, "DEMO_StateDispatch", "Demo state dispatcher"),
            (0x089C, "DEMO_Init", "Demo initialization"),
            (0x09FC, "DEMO_InputCheck", "Demo input check: aborts demo on button press"),
            (0x0C00, "DEMO_CameraSetup", "Demo camera setup"),
            (0x0CBC, "DEMO_EntitySpawn", "Demo entity spawning"),
            (0x10CC, "DEMO_SequencePlayer", "Demo sequence/recording player"),
            (0x1294, "DEMO_TimerHandler", "Demo timer handler"),
            (0x1334, "DEMO_TransitionHandler", "Demo transition handler"),
            (0x13D0, "DEMO_Cleanup", "Demo cleanup/reset handler"),
            (0x1488, "DEMO_SoundControl", "Demo sound/music control"),
        ]
    },
    "CRD": {
        "category": "crd",
        "mappings": [
            (0x0428, "CRD_MainUpdate", "Card game main update"),
            (0x0EB8, "CRD_StateDispatch", "Card game state dispatch"),
            (0x1020, "CRD_Init", "Card game initialization"),
            (0x11A4, "CRD_InputHandler", "Card game input handler"),
            (0x1478, "CRD_CardDeal", "Card dealing logic"),
            (0x1660, "CRD_CardDraw", "Card drawing/sprite display"),
            (0x17E4, "CRD_HandManager", "Hand/card management"),
            (0x1A68, "CRD_AISelect", "AI card selection"),
            (0x1F74, "CRD_ScoreCalc", "Score calculation"),
            (0x24B4, "CRD_RoundManager", "Round/turn management"),
            (0x2790, "CRD_AnimDeal", "Card deal animation"),
            (0x2CCC, "CRD_AnimFlip", "Card flip animation"),
            (0x2E40, "CRD_AnimCollect", "Card collect/remove animation"),
            (0x326C, "CRD_StatusText", "Status text display"),
            (0x3418, "CRD_SoundControl", "Card game sound effects"),
            (0x374C, "CRD_EndCheck", "End of game check"),
            (0x3B28, "CRD_WinDisplay", "Win/loss display"),
            (0x3D38, "CRD_Cleanup", "Card game cleanup"),
            (0x3FEC, "CRD_CameraSetup", "Card game camera setup"),
            (0x42B4, "CRD_EntitySetup", "Card game entity setup"),
            (0x454C, "CRD_TimerHandler", "Card game timer handler"),
            (0x46BC, "CRD_ResultDispatch", "Results screen dispatch"),
            (0x495C, "CRD_FlashEffect", "Card flash/highlight effect"),
            (0x4C00, "CRD_Shuffle", "Card shuffling logic"),
            (0x4D94, "CRD_TableRender", "Card table/bg render"),
            (0x4FDC, "CRD_PlayerTurn", "Player turn handler"),
            (0x5280, "CRD_OpponentTurn", "Opponent turn handler"),
            (0x5414, "CRD_MatchCheck", "Match check logic"),
            (0x5548, "CRD_RuleCheck", "Rule/special card check"),
            (0x5660, "CRD_CutscenePlayer", "Card game cutscene sequence"),
            (0x5854, "CRD_GameOver", "Game over handler"),
            (0x5A88, "CRD_FadeTransition", "Card game fade transition"),
            (0x5BCC, "CRD_DeckManager", "Deck management"),
        ]
    },
    "A0A": {
        "category": "a0a",
        "mappings": [
            (0x1CF2C, "A0A_MainEntry", "A0A overlay main entry point"),
            (0x1D2A8, "A0A_Init", "A0A overlay initialization"),
        ]
    },
    "A0C": {
        "category": "a0c",
        "mappings": [
            (0x1CF2C, "A0C_MainEntry", "A0C overlay main entry point"),
            (0x1D2A8, "A0C_StateHandler", "A0C overlay state handler"),
            (0x1DC9C, "A0C_EntitySetup", "A0C overlay entity setup"),
        ]
    },
    "A0D": {
        "category": "a0d",
        "mappings": [
            (0x1CF2C, "A0D_MainEntry", "A0D overlay main entry point"),
            (0x1D2A8, "A0D_Init", "A0D overlay initialization"),
        ]
    },
    "A0E": {
        "category": "a0e",
        "mappings": [
            (0x1CF2C, "A0E_MainEntry", "A0E overlay main entry point"),
            (0x1D2A8, "A0E_Init", "A0E overlay initialization"),
        ]
    },
    "A0F": {
        "category": "a0f",
        "mappings": [
            (0x1CF2C, "A0F_MainEntry", "A0F overlay main entry point"),
            (0x1D2A8, "A0F_StateHandler", "A0F state handler"),
            (0x1E860, "A0F_Init", "A0F overlay initialization"),
            (0x1F40C, "A0F_EntitySpawn", "A0F entity spawning"),
            (0x1F650, "A0F_CameraSetup", "A0F camera setup"),
            (0x1FDB4, "A0F_Transition", "A0F screen transition/fade"),
            (0x20F7C, "A0F_Cleanup", "A0F overlay cleanup"),
        ]
    },
}


def main():
    # Read existing symbol_addrs
    with open(SYMBOL_FILE) as f:
        sym_content = f.read()

    new_symbols = []
    total_mapped = 0

    for overlay_name, data in OVERLAYS.items():
        print(f"\n{'='*60}")
        print(f"  {overlay_name}.BIN")
        print(f"{'='*60}")

        base = OVERLAY_BASES.get(overlay_name, 0x80100000)
        ghidra_dir = os.path.join(PROJECT_ROOT, "src", "overlays", overlay_name, "ghidra_dumps")
        mapped_dir = os.path.join(PROJECT_ROOT, "src", "overlays", overlay_name, "mapped")
        out_dir = os.path.join(PROJECT_ROOT, "src", "overlays", overlay_name, data["category"])

        os.makedirs(mapped_dir, exist_ok=True)
        os.makedirs(out_dir, exist_ok=True)

        overlay_symbols = []
        count = 0

        for offset, name, comment in data["mappings"]:
            full_addr = base + offset
            ghidra_addr = GHIDRA_BASE + offset
            ghidra_name = f"FUN_{ghidra_addr:08x}"
            ghidra_path = os.path.join(ghidra_dir, f"{ghidra_name}.c")

            if not os.path.exists(ghidra_path):
                print(f"  SKIP: {ghidra_name}.c not found")
                continue

            with open(ghidra_path) as f:
                content = f.read()

            # Replace header and function name
            content = content.replace(f"// {ghidra_name}", f"// {name} ({ghidra_name}) - {comment}")
            content = re.sub(rf'\b{ghidra_name}\b(?!\.)', name, content)

            # Write to mapped/
            mapped_path = os.path.join(mapped_dir, f"{name}.c")
            with open(mapped_path, 'w') as f:
                f.write(content)

            # Copy to category folder
            out_path = os.path.join(out_dir, f"{name}.c")
            shutil.copy2(mapped_path, out_path)

            # Symbol entry
            addr_hex = f"0x{full_addr:08X}"
            if addr_hex not in sym_content and name not in sym_content:
                overlay_symbols.append(f"{name} = {addr_hex};\n")
                count += 1

        if overlay_symbols:
            new_symbols.append(f"\n# -- {overlay_name}.BIN overlay --\n")
            new_symbols.extend(overlay_symbols)

        total_mapped += count
        print(f"  Mapped: {count} functions -> {out_dir}/")

    # Append to symbol_addrs.txt
    if new_symbols:
        with open(SYMBOL_FILE, 'a') as f:
            f.write(''.join(new_symbols))

    print(f"\n{'='*60}")
    print(f"TOTAL: {total_mapped} functions mapped across {len(OVERLAYS)} overlays")
    print(f"Updated: {SYMBOL_FILE}")


if __name__ == "__main__":
    main()
