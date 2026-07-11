/**
 * @brief Sets up tile primitive header: code=4 (TILE_1), size=100
 * @note Original: func_80083CC0 at 0x80083CC0
 */
// GPU_SetTilePrimHeader



void FUN_80083cc0(int param_1)

{
  param_1->sub_type = 4;
  param_1->sub_action = 100;
  return;
}
