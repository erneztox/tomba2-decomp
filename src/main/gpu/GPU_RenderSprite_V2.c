/**
 * @brief Renders sprite variant 2: sets flag 0xFFE0, calls FUN_80078ca8 with mode 0x80008
 * @note Original: func_80079324 at 0x80079324
 */
// GPU_RenderSprite_V2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80079324(s16 param_1,int param_2,s16 param_3,s32 param_4,s32 param_5)

{
  _DAT_1f800180 = 0xffe0;
  FUN_80078ca8((int)param_1 | param_2 << 0x10,0x80008,(int)param_3,param_4,param_5);
  return;
}
