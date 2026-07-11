# A09.BIN - Boss/Cinematic Level
**Functions:** 45 | **Base:** 0x80100000
Features camera control, boss AI, dialog choices, and cutscene sequences.

| Function | Offset | Description |
|----------|--------|-------------|
| A09_BgEntityLoop | 0x03FC | Background entity iterator |
| A09_StateSwitch | 0x076C | Player state switch |
| A09_EntityDispatch10 | 0x082C | Entity dispatch 10 states |
| A09_EntityBehaviorInit | 0x0D04 | Behavior init |
| A09_SpawnWithGTE | 0x0D68 | Spawn with GTE |
| A09_LevelInit | 0x0E58 | Level init |
| A09_LevelCleanup | 0x0EB8 | Level cleanup |
| A09_DialogHandler | 0x0F10 | Dialog handler |
| A09_EntitySpawnSequence | 0x10C4 | Entity spawn sequence |
| A09_EntityState_Boss | 0x11EC | Boss state |
| A09_EntityStateHandler | 0x128C | State handler |
| A09_PlayerStateDispatch | 0x1450 | Player state dispatch |
| A09_EntityState_Damage | 0x163C | Damage state |
| A09_BossBehaviorHelper | 0x1884 | Boss behavior helper |
| A09_EntityState_Boss2 | 0x1A5C | Boss state 2 |
| A09_EntityDispatch5 | 0x1BB8 | Entity dispatch 5 |
| A09_EntityState_Rise | 0x1E00 | Rise/jump state |
| A09_EntityDispatch5b | 0x2018 | Dispatch variant |
| A09_EntitySpawnSequence2 | 0x240C | Spawn sequence 2 |
| A09_SequenceCheck | 0x252C | Sequence completion check |
| A09_EntityDispatch5c | 0x26C8 | Dispatch variant |
| A09_CameraZoomIn | 0x2918 | Camera zoom in |
| A09_CameraSetup1 | 0x29D8 | Camera setup mode 1 |
| A09_CameraSetup2 | 0x2A30 | Camera setup mode 2 |
| A09_EntityState_CameraTrack | 0x2A88 | Camera track state |
| A09_EntitySpawn_Cutscene | 0x2B84 | Cutscene spawn |
| A09_EntityState_CameraTrack2 | 0x2C60 | Camera track state 2 |
| A09_CameraZoomControl | 0x2D00 | Camera zoom control |
| A09_DialogChoice | 0x2D64 | Dialog choice handler |
| A09_SpawnWithGTE2 | 0x2E84 | Spawn with GTE 2 |
| A09_SpawnWithGTE3 | 0x3080 | Spawn with GTE 3 |
| A09_EntityState_Dealloc | 0x3344 | Dealloc state |
| A09_EventFlagCheck | 0x35EC | Event flag check |
| A09_EntityDispatch5d | 0x371C | Dispatch variant |
| A09_EntityState_Anim | 0x3C14 | Animation state |
| A09_EntityState_Anim2 | 0x3D3C | Animation state 2 |
| A09_ScrollPanEntity | 0x3DCC | Scroll/pan entity |
| A09_GTE_ScreenTransform | 0x3F28 | GTE screen transform |
| A09_GTE_ProjectionHelper | 0x4114 | GTE projection helper |
| A09_GTE_CoordTransform | 0x4370 | GTE coord transform |
| A09_EntityState_WaterCheck | 0x463C | Water collision check |
| A09_BossStateMachine | 0x4974 | Boss state machine |
| A09_EntityState_Cleanup | 0x4E90 | Cleanup state |
| A09_EntityMainLoop | 0x4F44 | Entity main loop |
| A09_OverlayEntry | 0x4FCC | Top-level entry |
