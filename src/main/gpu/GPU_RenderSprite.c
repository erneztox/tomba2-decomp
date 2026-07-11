/**
 * @brief GPU sprite renderer: dispatches via function table at 0x80017334 + param index
 * @note Original: func_8007E8DC at 0x8007E8DC
 */
// GPU_RenderSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GPU_RenderSprite(s16 param_1,s16 param_2,u8 param_3,int param_4)

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
  local_17 = param_3;
  local_10 = param_1;
  local_e = param_2;
  GPU_SpriteDrawMain(&local_10,*(s32 *)((int)&PTR_DAT_80017334 + ((param_4 << 0x10) >> 0xe)),
               _g_OT_Data,&local_18);
  return;
}
