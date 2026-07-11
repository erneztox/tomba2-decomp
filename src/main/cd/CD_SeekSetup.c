/**
 * @brief CD seek setup: configures seek params at 0x800AAD1C, validates
 * @note Original: func_80085F5C at 0x80085F5C
 */
// CD_SeekSetup



int FUN_80085f5c(uint param_1,int param_2)

{
  u16 uVar1;
  int *piVar2;
  u16 uVar3;
  int iVar4;
  
  piVar2 = &DAT_800aad1c + param_1;
  iVar4 = *piVar2;
  if ((param_2 != iVar4) && (DAT_800aad18 != 0)) {
    uVar3 = *DAT_800abda8;
    *DAT_800abda8 = 0;
    if (param_2 == 0) {
      uVar1 = ~(u16)(1 << (param_1 & 0x1f));
      *piVar2 = 0;
      uVar3 = uVar3 & uVar1;
      DAT_800aad48 = DAT_800aad48 & uVar1;
    }
    else {
      *piVar2 = param_2;
      uVar1 = (u16)(1 << (param_1 & 0x1f));
      uVar3 = uVar3 | uVar1;
      DAT_800aad48 = DAT_800aad48 | uVar1;
    }
    if (param_1 == 0) {
      FUN_80080920(param_2 == 0);
      FUN_80085b10(3,param_2 == 0);
    }
    if (param_1 == 4) {
      FUN_80085b10(0,param_2 == 0);
    }
    if (param_1 == 5) {
      FUN_80085b10(1,param_2 == 0);
    }
    if (param_1 == 6) {
      FUN_80085b10(2,param_2 == 0);
    }
    *DAT_800abda8 = uVar3;
  }
  return iVar4;
}
