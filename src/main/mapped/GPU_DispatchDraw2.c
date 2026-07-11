/**
 * @brief GPU draw dispatch: reads word, calls draw funcs for low and high 16 bits
 * @note Original: func_800803DC at 0x800803DC
 */
// GPU_DispatchDraw2



void FUN_800803dc(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = FUN_8007fdb0(param_1 + 4,param_2,uVar2 & 0xffff);
  FUN_8008007c(uVar1,param_2,uVar2 >> 0x10);
  return;
}
