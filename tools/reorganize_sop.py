#!/usr/bin/env python3
"""Reorganize SOP mapped files into category folders."""
import os, shutil

PROJECT_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MAPPED_DIR = os.path.join(PROJECT_ROOT, "src", "overlays", "SOP", "mapped")
SOP_DIR = os.path.join(PROJECT_ROOT, "src", "overlays", "SOP")

CATEGORIES = {
    "core": [
        "SOP_MainUpdate", "SOP_StateDispatch", "SOP_ActivateRendering",
    ],
    "cd_loading": [
        "SOP_TextureLoad", "SOP_LoadingStateCheck", "SOP_CDLoadStateHandler",
    ],
    "gte": [
        "SOP_GTE_TriangleProcessor", "SOP_GTE_QuadProcessor", "SOP_MaterialColorProcessor",
    ],
    "render": [
        "SOP_ScreenSpaceTransform", "SOP_RasterizerFill",
    ],
    "entity_spawn": [
        "SOP_CreateIntroEntities", "SOP_CreateSpriteEntity",
        "SOP_SpawnEntityByType", "SOP_SpawnEntitySubtype1E",
    ],
    "entity_state": [
        "SOP_EntityStateDispatch", "SOP_FadeTransitionEntity",
        "SOP_TitleEntitySpawner", "SOP_GameStateTransition",
        "SOP_TimerStateHandler", "SOP_FinalStateTransition",
        "SOP_ColorFadeAnimation", "SOP_CutsceneEntitySpawner",
        "SOP_EntitySpawner2", "SOP_VerticalMovementEntity",
        "SOP_TitleCardEntity", "SOP_ChildEntityTracker",
        "SOP_ParentTrackedEntitySpawner", "SOP_ScrollTextEntity",
        "SOP_MatrixTransformEntity",
    ],
    "entity_util": [
        "SOP_EntityAnimStateHandler", "SOP_EntityDispatcher",
        "SOP_InitEntityPosition", "SOP_InitEntityFromParent",
    ],
    "background": [
        "SOP_TileMapRenderer", "SOP_TileAnimationUpdate", "SOP_BackgroundRenderMain",
    ],
}

for cat, files in CATEGORIES.items():
    cat_dir = os.path.join(SOP_DIR, cat)
    os.makedirs(cat_dir, exist_ok=True)
    for fname in files:
        src = os.path.join(MAPPED_DIR, f"{fname}.c")
        dst = os.path.join(cat_dir, f"{fname}.c")
        if os.path.exists(src):
            shutil.copy2(src, dst)
            print(f"  {cat}/{fname}.c")

print(f"\nDone! {sum(len(v) for v in CATEGORIES.values())} files organized into {len(CATEGORIES)} folders")
