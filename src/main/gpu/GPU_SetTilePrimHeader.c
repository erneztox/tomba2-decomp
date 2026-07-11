/**
 * @brief Sets up tile primitive header: code=4 (TILE_1), size=100
 * @note Original: func_80083CC0 at 0x80083CC0
 */
// GPU_SetTilePrimHeader



void FUN_80083cc0(int param_1)

{
  *(undefined1 *)(param_1 + 3) = 4;
  *(undefined1 *)(param_1 + 7) = 100;
  return;
}
