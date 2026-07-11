/**
 * @brief Renders sprite variant 1: sets flag 0x20, calls FUN_80078ca8 with mode 0x100008
 * @note Original: func_80079374 at 0x80079374
 */
// GPU_RenderSprite_V1



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80079374(short param_1,int param_2,short param_3,undefined4 param_4,undefined4 param_5)

{
  _DAT_1f800180 = 0x20;
  FUN_80078ca8((int)param_1 | param_2 << 0x10,0x100008,(int)param_3,param_4,param_5);
  return;
}
