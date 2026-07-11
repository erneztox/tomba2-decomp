/**
 * @brief MDEC frame processor: calls decode callbacks on entity[0xC] data
 * @note Original: func_80087530 at 0x80087530
 */
// MDEC_ProcessFrame



uint FUN_80087530(int param_1)

{
  uint uVar1;
  uint uVar2;
  s32 uVar3;
  
  if (DAT_800abeb8 != 0) {
    (*DAT_800abe50)(*(int *)(param_1 + 0xc) + 0x1e0);
    (*DAT_800abe50)(*(int *)(param_1 + 0xc) + 0x2d0);
  }
  uVar3 = 0;
  if (*(s8*)(param_1 + 0x37) == '\0') {
    uVar3 = DAT_800abe84;
  }
  uVar1 = FUN_800870b4(param_1,uVar3);
  if (-1 < (int)uVar1) {
    uVar2 = uVar1 & 0xf;
    DAT_800abeb0 = uVar2 << 1;
    uVar1 = 0;
    if (uVar2 == 0) {
      DAT_800abeb0 = 0x20;
      uVar1 = 0;
    }
  }
  return uVar1;
}
