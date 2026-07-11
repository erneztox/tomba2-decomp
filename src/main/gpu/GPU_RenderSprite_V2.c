/**
 * @brief Renders sprite variant 2: sets flag 0xFFE0, calls GPU_SpriteRender2 with mode 0x80008
 * @note Original: func_80079324 at 0x80079324
 */
// GPU_RenderSprite_V2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GPU_RenderSprite_V2(s16 param_1,int param_2,s16 param_3,s32 param_4,s32 param_5)

{
  _DAT_1f800180 = 0xffe0;
  GPU_SpriteRender2((int)param_1 | param_2 << 0x10,0x80008,(int)param_3,param_4,param_5);
  return;
}
