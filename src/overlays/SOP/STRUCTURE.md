# SOP.BIN - Title Screen / Opening Sequence Overlay

**Load address:** `0x80100000` (RAM)
**Functions:** 37 mapped
**Source:** `rom/extracted/BIN/SOP.BIN`

## Structure

```
src/overlays/SOP/
├── core/           # Main loop, state dispatch, rendering activation
├── cd_loading/     # CD sector reading, texture loading
├── gte/            # GTE cop2 3D triangle/quad processing
├── render/         # Screen-space transform, rasterizer
├── entity_spawn/   # Entity creation/alloc helpers
├── entity_state/   # Entity state machines (title, transition, cutscene, etc.)
├── entity_util/    # Entity utility dispatchers, animation, init helpers
├── background/     # Tile map renderer, tile animation, background main loop
├── ghidra_dumps/   # Raw Ghidra decompilation output
└── mapped/         # Intermediate mapped files (used during refactoring)
```

## Category Summary

### `core/` (3 functions)
Main SOP state machine and orchestration.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_MainUpdate | 0x80100318 | Main update loop: manages sub-states (CD loading, rendering), countdown timer |
| SOP_StateDispatch | 0x801004B4 | Jump table dispatcher: 5 sub-states via `g_SOP_Entity->sprite_param2` |
| SOP_ActivateRendering | 0x8010094C | Activates entity loop (`EntityLoop_Active`) and rendering pipeline |

### `cd_loading/` (3 functions)
CD-ROM sector reading and texture pack loading for the title screen.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_TextureLoad | 0x801007B4 | Loads texture pack: `CD_LoadSectors` for sector table + data, then `Texture_LoadPack` |
| SOP_LoadingStateCheck | 0x80100848 | Checks loading state (`DAT_800e8008`, `DAT_800e806c`) during boot |
| SOP_CDLoadStateHandler | 0x80100998 | CD load state handler: checks CD ready, initiates sector reads |

### `gte/` (3 functions)
GTE coprocessor-based 3D geometry processing for the title screen.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_GTE_TriangleProcessor | 0x80100A18 | 3D triangle transform: 9-word primitives, screen bounds check (0x140×0xF0) |
| SOP_GTE_QuadProcessor | 0x80100CE4 | 4-point quad transform: 11-word entries, dual cop2 operation |
| SOP_MaterialColorProcessor | 0x80101044 | Material/color processing via GTE cop2 registers |

### `render/` (2 functions)
Screen-space coordinate transforms and rasterization.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_ScreenSpaceTransform | 0x80101144 | 2D screen-space transform: perspective projection from 3D points |
| SOP_RasterizerFill | 0x80101410 | Triangle rasterizer: sorts vertices by Y, fills horizontal scanlines |

### `entity_spawn/` (4 functions)
Entity creation/allocation helpers.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_CreateIntroEntities | 0x801008C4 | Creates 3 intro entities from data table via `Entity_AllocByPoolId` |
| SOP_CreateSpriteEntity | 0x80101E94 | Allocates sprite entity (pool 0, type 6) with draw function `0x8002AB5C` |
| SOP_SpawnEntityByType | 0x801024B0 | Spawns entity: pool 3, subtype 0x1A, behavior `0x8010B2D4` |
| SOP_SpawnEntitySubtype1E | 0x80102E1C | Spawns entity: pool 0, type 3, subtype 0x1E, behavior `0x8010BC8C` |

### `entity_state/` (15 functions)
Entity state machines that drive the title screen sequence.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_EntityStateDispatch | 0x80101964 | Entity state jump table: 8 sub-states via `entity->sub_state` |
| SOP_FadeTransitionEntity | 0x80101B9C | Fade/color transition: manages RGB alpha channels, interpolates between states |
| SOP_TitleEntitySpawner | 0x80101D60 | Title screen entity spawner: 4-state machine, spawns at saved position |
| SOP_GameStateTransition | 0x80101F00 | Game state transition: sets `g_GameSubState=2`, camera init, sprite setup |
| SOP_TimerStateHandler | 0x80101FC4 | Timer-based state machine: 4 sub-states with countdown to trigger transitions |
| SOP_FinalStateTransition | 0x801020DC | Final state transition: sets `g_GameSubState=5`, completes SOP sequence |
| SOP_ColorFadeAnimation | 0x80102180 | Color fade animation: increments RGB channels, sin/cos position |
| SOP_CutsceneEntitySpawner | 0x80102338 | Cutscene entity spawner: 4-state machine, animation and camera setup |
| SOP_EntitySpawner2 | 0x801027FC | Entity spawner variant 2: camera shake, position/rotation setup |
| SOP_VerticalMovementEntity | 0x80102910 | Vertical movement: applies gravity, moves upward with velocity cap |
| SOP_TitleCardEntity | 0x801029F4 | Title card/collectible display: moves upward, shows collectible count |
| SOP_ChildEntityTracker | 0x80102B5C | Child entity: tracks parent position, applies gravity |
| SOP_ParentTrackedEntitySpawner | 0x80102CF0 | Spawns entity following parent at offset (+0x14, -0x50) |
| SOP_ScrollTextEntity | 0x80102F10 | Scroll/credits text: slide timer with wrap-around pan effect |
| SOP_MatrixTransformEntity | 0x80102FB8 | GTE matrix transform entity: applies 3D transform in 2 iterations |

### `entity_util/` (4 functions)
Entity utility dispatchers, animation handlers, and initializers.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_EntityAnimStateHandler | 0x80102544 | Animation state handler: checks completion, transitions |
| SOP_EntityDispatcher | 0x801025EC | Jump table dispatcher: 7 sub-states via `entity->color_mode` |
| SOP_InitEntityPosition | 0x801024FC | Initializes entity position (16000, 0xF0D0, 0x4EB5) and sprite |
| SOP_InitEntityFromParent | 0x80102E68 | Initializes entity from parent at offset (+0x14, -0x50) |

### `background/` (3 functions)
Background tile map rendering and animation.
| Function | Address | Description |
|----------|---------|-------------|
| SOP_TileMapRenderer | 0x801032D0 | Tile map renderer: builds OT primitives from texture page, animates tiles |
| SOP_TileAnimationUpdate | 0x80103704 | Tile animation update: cycles tile textures based on timer |
| SOP_BackgroundRenderMain | 0x80103800 | Background rendering main loop: iterates entities, builds display list |

## Key Globals

| Name | Address | Description |
|------|---------|-------------|
| `g_SOP_Entity` | 0x1F800138 | Main SOP entity (in scratchpad) - controls the entire title sequence |
| `g_GameSubState` | 0x800BF9B4 | Game sub-state (2=title loading, 3=playing, 5=complete) |
| `g_SOP_Complete` | 0x800BF80F | SOP sequence completion flag |
| `g_SOP_LoadingFlag` | 0x1F800234 | Loading/active flag during SOP boot |

## SOP Sequence Flow

```
SOP_MainUpdate
  ├─ [draw_x==0] Init: Screen_FadeTransition, Entity_UpdateLoop
  │   ├─ LoadingStateCheck (DAT_800e8008 state machine)
  │   └─ Camera_SetModeSeq → Audio_SeqPlay2 → EntityLoop_Active
  ├─ [draw_x>0] Countdown timer
  ├─ [sprite_y==0] Engine_LoadOverlayEntry(0xE)
  └─ [sprite_y==1] CD ready check

SOP_StateDispatch (5 states via g_SOP_Entity->sprite_param2)
  ├─ State 0: SOP_CreateIntroEntities
  ├─ State 1-4: not yet identified

Entities spawned:
  ├─ SOP_TitleEntitySpawner → spawns title entity
  ├─ SOP_FadeTransitionEntity → color fade effect
  ├─ SOP_TitleCardEntity → collectible card display
  ├─ SOP_ColorFadeAnimation → RGB channel animation
  ├─ SOP_CutsceneEntitySpawner → cutscene sequence
  ├─ SOP_ChildEntityTracker → tracks parent movement
  └─ SOP_ScrollTextEntity → credits scroll

Background rendered via:
  SOP_BackgroundRenderMain → SOP_TileMapRenderer → SOP_TileAnimationUpdate
```
