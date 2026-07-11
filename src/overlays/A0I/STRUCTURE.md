# A0I.BIN - Water/Swim Level Overlay
**Functions:** 28 | **Base:** 0x80100000

## Entity Loop & Dispatch
| Function | Address | Description |
|----------|---------|-------------|
| A0I_BgEntityLoop | 0x80100500 | Background entity iterator (DAT_1f800154) |
| A0I_ActiveEntityLoop | 0x80100C0C | Active entity iterator (DAT_1f80013c) |
| A0I_BgEntityLoop2 | 0x80100CD0 | Background entity var2 (DAT_1f800148) |
| A0I_GameStateDispatch | 0x80100724 | Player state switch (8 cases) |
| A0I_EntityDispatch5 | 0x80100FE0 | Entity state dispatch (5 states) |
| A0I_EntityDispatch6 | 0x801018A4 | Entity state dispatch (6 states) |

## Level Init / Cleanup
| Function | Address | Description |
|----------|---------|-------------|
| A0I_LevelInit_Swim | 0x801017EC | Level init: reset player, swim anim 0x24 |
| A0I_LevelCleanup | 0x8010184C | Cleanup: clear flags, reset state |

## Entity State Machines
| Function | Address | Description |
|----------|---------|-------------|
| A0I_EntityBehaviorInit | 0x801015B8 | Entity behavior init |
| A0I_EntityStateHandler | 0x80101A24 | State machine: action dispatch |
| A0I_EntityStateHandler2 | 0x80101DC8 | State machine variant |
| A0I_CollisionStateHandler | 0x80102358 | Collision state: anim, score |
| A0I_TimerSpawnHelper | 0x80101D04 | Timer spawn helper (0x5a countdown) |

## Spawning
| Function | Address | Description |
|----------|---------|-------------|
| A0I_SpawnWithGTE | 0x8010161C | Spawn entity with GTE position |
| A0I_GridSpawner | 0x801020D0 | Grid entity spawner |

## Physics
| Function | Address | Description |
|----------|---------|-------------|
| A0I_GroundClamp | 0x80100B3C | Clamp Y to ground DAT_800bf812 |
| A0I_GroundClampConditional | 0x80100B9C | Ground clamp with flag guard |

## GTE Pipeline
| Function | Address | Description |
|----------|---------|-------------|
| A0I_GTE_TriangleProc | 0x80102440 | GTE triangle processor |
| A0I_GTE_QuadProc | 0x80102728 | GTE quad processor |
| A0I_GTE_Transform | 0x80102BA4 | GTE matrix transform |
| A0I_GTE_Projection | 0x80102E48 | GTE projection |
| A0I_MaterialProcessor | 0x80102AA4 | Material/color processor |
| A0I_MaterialHelper | 0x8010317C | Material color helper |
| A0I_ScreenTransform | 0x801031C4 | Screen-space transform |
| A0I_TriangleRasterizer | 0x801034A4 | Triangle rasterizer |

## Other
| Function | Address | Description |
|----------|---------|-------------|
| A0I_DialogHandler | 0x801021E0 | Dialog/text script handler |
| A0I_Stub | 0x80100ED0 | Dead stub |
| A0I_OverlayLoader | 0x80103A10 | Loads next overlay via Sys_LoadOverlay |
