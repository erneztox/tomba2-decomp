/**
 * @brief GPU draw dispatch: reads word, calls draw funcs for low and high 16 bits
 * @note Original: func_800803DC at 0x800803DC
 */
// GPU_DispatchDraw2



void GPU_DispatchDraw2(uint *param_1,s32 param_2)

{
  s32 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = GPU_OT_Build(param_1 + 4,param_2,uVar2 & 0xffff);
  GPU_OT_Submit2(uVar1,param_2,uVar2 >> 0x10);
  return;
}
