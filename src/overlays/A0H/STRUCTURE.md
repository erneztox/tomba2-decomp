# A0H.BIN - Water/Swim Level (variant)
**Functions:** 29 | **Base:** 0x80100000
Same template as A0I with per-level data differences. See A0I/STRUCTURE.md for category layout.

| Function | Offset | Description |
|----------|--------|-------------|
| A0H_BgEntityLoop | 0x0338 | Background entity iterator |
| A0H_GameStateDispatch | 0x055C | Game state dispatch |
| A0H_StateSwitch | 0x0900 | Player state switch |
| A0H_GroundClamp | 0x0D28 | Ground clamp |
| A0H_GroundClampConditional | 0x0D88 | Ground clamp conditional |
| A0H_DamageHandler | 0x0DF8 | Damage/collision handler |
| A0H_Stub | 0x0E74 | Dead stub |
| A0H_ActiveEntityLoop | 0x0F4C | Active entity iterator |
| A0H_BgEntityLoop2 | 0x1010 | Background entity var2 |
| A0H_EntityBehaviorInit | 0x1248 | Behavior init |
| A0H_SpawnWithGTE | 0x12AC | Spawn with GTE |
| A0H_LevelInit | 0x13A0 | Level init |
| A0H_LevelCleanup | 0x1400 | Level cleanup |
| A0H_EntityDispatch6 | 0x1458 | Entity dispatch 6 |
| A0H_EntityStateHandler | 0x15D8 | Entity state handler |
| A0H_TimerSpawnHelper | 0x18B8 | Timer spawn |
| A0H_EntityStateHandler2 | 0x197C | State handler 2 |
| A0H_GridSpawner | 0x1C4C | Grid spawner |
| A0H_DialogHandler | 0x1D5C | Dialog handler |
| A0H_CollisionStateHandler | 0x1ED4 | Collision state |
| A0H_GTE_TriangleProc | 0x1FBC | GTE triangles |
| A0H_GTE_QuadProc | 0x22A4 | GTE quads |
| A0H_MaterialProcessor | 0x2620 | Material processor |
| A0H_GTE_Transform | 0x2720 | GTE transform |
| A0H_GTE_Projection | 0x29C4 | GTE projection |
| A0H_MaterialHelper | 0x2CF8 | Material helper |
| A0H_ScreenTransform | 0x2D40 | Screen transform |
| A0H_TriangleRasterizer | 0x3020 | Triangle rasterizer |
| A0H_OverlayLoader | 0x358C | Overlay loader |
