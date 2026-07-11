/**
 * @brief Sprite draw with code 0x98: calls GPU_RenderSprite
 * @note Original: func_8007E998 at 0x8007E998
 */
// GPU_DrawSprite98



void GPU_DrawSprite98(s16 param_1,s16 param_2,s32 param_3)

{
  GPU_RenderSprite((int)param_1,(int)param_2,param_3,0x98);
  return;
}
