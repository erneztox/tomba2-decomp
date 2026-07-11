/**
 * @brief Sets camera height: param2=0 uses entity[0x26], else cos(entity[0x6E])*radius
 * @note Original: func_8006DF88 at 0x8006DF88
 */
// Camera_SetHeight



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006df88(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    _DAT_1f8000d6 = _DAT_1f8000e2 + *(short *)(param_1 + 0x26) + -0x140;
  }
  else {
    iVar1 = FUN_80083e80((int)*(short *)(param_1 + 0x6e));
    _DAT_1f8000d6 = _DAT_1f8000e2 - (short)(iVar1 * *(short *)(param_1 + 0x6c) >> 0xc);
  }
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
  return;
}
