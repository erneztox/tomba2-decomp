/**
 * @brief Draws sprite without color modulation: sets GTE color to 0, calls submit
 * @note Original: func_800328EC at 0x800328EC
 */
// Entity_DrawSpriteNoColor



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Entity_DrawSpriteNoColor(s32 param_1)

{
  _DAT_1f800090 = 0;
  GTE_ProjectEntity2(param_1,0,0);
  return;
}
