/**
 * @brief Entity check loop: entity[0x24] counter, validates state
 * @note Original: func_800368D0 at 0x800368D0
 */
// Entity_CheckLoop



int FUN_800368d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  iVar1 = ((int)(*(u8 *)(param_1 + 0x24) + 1) >> 1) + -1;
  if ((*(u8 *)(param_1 + 0x24) & 1) == 0) {
    iVar2 = param_2 << 1;
  }
  else {
    if (param_2 == iVar1) {
      uVar3 = param_2 << 1;
      if (param_3 != 0) {
        return -1;
      }
      goto LAB_80036924;
    }
    iVar2 = param_2 * 2;
    if (iVar1 <= param_2) {
      uVar3 = (iVar2 + param_3) - 1;
      goto LAB_80036924;
    }
  }
  uVar3 = iVar2 + param_3;
LAB_80036924:
  if (uVar3 == (uint)DAT_800bf8a1 + (uint)DAT_800bf8a2) {
    return 999;
  }
  if ((int)((uint)DAT_800bf8a1 + (uint)DAT_800bf8a2) <= (int)uVar3) {
    return -1;
  }
  iVar2 = 0;
  if (iVar1 < param_2) {
    pcVar4 = &DAT_800a2be8;
    while ((((&DAT_800bfab4)[iVar2] == '\0' ||
            ((uint)(u8)(&DAT_800bfbb4)[iVar2] != uVar3 - DAT_800bf8a2)) || (*pcVar4 == '\0'))) {
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0xc;
      if (0xff < iVar2) {
        return -1;
      }
    }
  }
  else {
    pcVar4 = &DAT_800a2be8;
    while ((((&DAT_800bfab4)[iVar2] == '\0' || ((u8)(&DAT_800bfbb4)[iVar2] != uVar3)) ||
           (*pcVar4 != '\0'))) {
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0xc;
      if (0xff < iVar2) {
        return -1;
      }
    }
  }
  return iVar2;
}
