# Tomba 2 Decompilation - Function Mapping Workflow

## Quick Start

Map functions from Ghidra dumps to descriptive names in 3 steps:

### 1. Analyze

Read the Ghidra dump to understand what the function does:

```bash
cat src/main/ghidra_dumps/FUN_8002918c.c
```

### 2. Add to Mappings

Edit `tools/map_functions.py` and add entries to the `MAPPINGS` dict:

```python
MAPPINGS = {
    # Format: address: ("DescriptiveName", "Brief comment about what it does")
    0x8002918C: ("Entity_Behavior_Wander", "Random wander/patrol with visibility check"),
    0x800292B8: ("Entity_Behavior_AnimPlayer1", "Sprite animation player variant 1"),
}
```

### 3. Run

```bash
python3 tools/map_functions.py
```

This automatically:
- Creates `src/main/mapped/Entity_Behavior_Wander.c` from the Ghidra dump
- Creates `src/main/mapped/Entity_Behavior_AnimPlayer1.c`
- Appends entries to `symbol_addrs.txt`

## Naming Conventions

| Prefix | Category | Example |
|--------|----------|---------|
| `Entity_` | Entity system | `Entity_SpawnWithPos` |
| `Entity_Alloc` | Entity allocator | `Entity_AllocPool0` |
| `Entity_Behavior_` | Entity state machines | `Entity_Behavior_Wander` |
| `EntityLoop_` | Main loop iterators | `EntityLoop_Active` |
| `Engine_` | Core engine | `Engine_ExecuteGameLoop` |
| `GPU_` | GPU/rendering | `GPU_ProcessRenderQueue` |
| `GTE_` | GTE coprocessor | `GTE_LoadIdentityMatrix` |
| `Math_` | Math helpers | `Math_Sin` |
| `Audio_` | Sound/music | `Audio_PlaySoundEffect` |
| `Input_` | Controller input | `Input_UpdateState` |
| `HUD_` | Heads-up display | `HUD_DrawElement` |
| `Render_` | Rendering pipeline | `Render_ProcessQueueItem` |
| `OT_` | Ordering table | `OT_DrawRectSprite` |
| `Player_` | Player-specific | `Player_Update` |

## File Structure

```
src/main/
  ghidra_dumps/      # Raw Ghidra decompilation (1620 functions)
    FUN_8002918c.c
    FUN_800292b8.c
    ...
  mapped/            # Functions with descriptive names
    Entity_Behavior_Wander.c
    Entity_SpawnWithPos.c
    ...
  Entity_Allocator.c # Combined source files (byte-matching)
  Entity_Actions.c
  ...

symbol_addrs.txt     # Master symbol map
tools/
  map_functions.py   # Batch mapper script
  score.py           # Auto-scoring tool
  symbol_addrs.py    # Symbol lookup helper
```

## Overlays

Overlay dumps live under `src/overlays/`:

```
src/overlays/
  A00/ghidra_dumps/  # 1586 functions from A00.BIN
  A01/ghidra_dumps/  # A01.BIN
  ...
  aa0/ghidra_dumps/  # aa0.BIN
```

To map overlay functions, extend `map_functions.py` to support an overlay path parameter, or create a separate mappings dict.

## Current Stats

- **Main binary**: 1620 Ghidra dumps, ~52 mapped (3.2%)
- **Overlays**: 28 binaries, ~1500+ functions each
- **symbol_addrs.txt**: 123 entries
