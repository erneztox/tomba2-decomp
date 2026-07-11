# A03.BIN - Boss/Collectible Level
**Functions:** 31 | **Base:** 0x80100000

| Function | Offset | Description |
|----------|--------|-------------|
| A03_EntityMain | 0x0088 | Main entity state: swim, collectibles, score |
| A03_CopyGTE_Matrix | 0x08D4 | Copies GTE matrix from parent |
| A03_EventBitChecker | 0x0C2C | Bit counter, triggers UI events |
| A03_AnimLoader | 0x0CAC | Animation loader |
| A03_PlayerStateMask | 0x0D44 | Player state flag modifier |
| A03_MainRenderUpdate | 0x0F50 | Main render/update |
| A03_RenderDispatch | 0x238C | Render chain dispatch |
| A03_EntitySpawnState | 0x23E0 | Entity spawn state (4 states) |
| A03_LevelInit_SpawnEntities | 0x279C | Level init spawn |
| A03_GTE_StateDispatch | 0x2974 | GTE state dispatch |
| A03_CollisionMath | 0x2C1C | Collision math |
| A03_EntityGroupSetup | 0x2E50 | Entity group setup |
| A03_GTE_SpawnEntity | 0x36DC | GTE entity spawn |
| A03_EntityMovementState | 0x39AC | Movement state |
| A03_BossState_Phase1 | 0x4258 | Boss phase 1 |
| A03_BossState_Phase2 | 0x49EC | Boss phase 2 |
| A03_EntitySpeedControl | 0x51C4 | Speed/timer control |
| A03_EntityCameraState | 0x5498 | Camera state |
| A03_EntityState_Dealloc | 0x55F4 | Dealloc state |
| A03_EntityCollisionState | 0x5898 | Collision state |
| A03_ScreenSpaceTransform | 0x59C8 | Screen transform |
| A03_TriangleRasterizer | 0x5C98 | Triangle rasterizer |
| A03_GPUPrimBuilder | 0x6204 | GPU prim builder |
| A03_GTE_PrimitiveProcessor | 0x72F4 | GTE prim processor |
| A03_MaterialProcessor | 0x7A38 | Material processor |
| A03_ScreenTransform2 | 0x7B64 | Screen transform 2 |
| A03_EntityBehaviorState | 0x7FC4 | Behavior state (4 states) |
| A03_EntityParentState | 0x81BC | Parent-tracking state |
| A03_SpriteDataUpload | 0x8418 | Sprite data upload |
| A03_EntityStateHandler | 0x8440 | State handler |
| A03_TopLevelDispatch | 0x88C0 | Top-level dispatch |
