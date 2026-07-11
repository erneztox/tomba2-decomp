/**
 * @brief Renders sprite variant 2: calls GPU_SpriteRender with function table lookup at 0x80017334
 * @note Original: func_8007E938 at 0x8007E938
 */
// GPU_RenderSprite2



void GPU_RenderSprite2(s32 param_1,s16 param_2,s16 param_3,u8 param_4,
                 int param_5)

{
  u8 local_18;
  u8 local_17;
  s16 local_16;
  s16 local_10;
  s16 local_e;
  s32 local_c;
  
  local_18 = 0;
  local_16 = 0;
  local_c = 0;
  local_17 = param_4;
  local_10 = param_2;
  local_e = param_3;
  GPU_SpriteRender(&local_10,*(s32 *)((int)&PTR_DAT_80017334 + ((param_5 << 0x10) >> 0xe)),
               param_1,&local_18);
  return;
}
