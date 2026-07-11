/**
 * @brief MDEC status getter: returns status u8 from entity at offset
 * @note Original: func_80087BB8 at 0x80087BB8
 */
// MDEC_GetStatus



uint FUN_80087bb8(s32 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)(*DAT_800abe4c)();
  if (param_2 == 3) {
    uVar2 = (uint)*(u8 *)(piVar1 + 0x39);
  }
  else if (param_2 < 4) {
    if (param_2 == 1) {
      uVar2 = (uint)*(u8 *)(piVar1 + 0x3a);
    }
    else {
      uVar2 = 0;
      if (param_2 == 2) {
        uVar2 = (uint)*(u16 *)((int)piVar1 + 0xe6);
      }
    }
  }
  else if (param_2 == 4) {
    if (param_3 < 0) {
      uVar2 = (uint)*(u8 *)((int)piVar1 + 0xe3);
    }
    else if (param_3 < (int)(uint)*(u8 *)((int)piVar1 + 0xe3)) {
      uVar2 = (uint)*(u16 *)(param_3 * 2 + *piVar1);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
    if (param_2 == 100) {
      uVar2 = piVar1[0x13];
    }
  }
  return uVar2;
}
