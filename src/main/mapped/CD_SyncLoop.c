/**
 * @brief CD sync loop: polls DAT_800ac308, waits for completion
 * @note Original: func_8008C960 at 0x8008C960
 */
// CD_SyncLoop



bool FUN_8008c960(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (DAT_800ac308 != 0) {
    iVar1 = FUN_80085900(0xffffffff);
    do {
      if (DAT_800ac308 == 0) goto LAB_8008c9dc;
      iVar2 = FUN_80085900(0xffffffff);
    } while ((uint)(iVar2 - iVar1) < 0x79);
    FUN_80089b84(DAT_800ac30c);
    DAT_800ac308 = 0;
  }
LAB_8008c9dc:
  if ((param_3 & 0x30) == 0) {
    DAT_800ac2f4 = 0x200;
  }
  else if ((param_3 & 0x30) == 0x20) {
    DAT_800ac2f4 = 0x249;
  }
  else {
    DAT_800ac2f4 = 0x246;
  }
  DAT_800ac2f0 = param_3 | 0x20;
  DAT_800ac2e4 = param_1;
  DAT_800ac2e8 = param_2;
  DAT_800ac30c = FUN_80089b84(0);
  DAT_800ac310 = FUN_80089b98(0);
  if ((DAT_800abf28 & 1) != 0) {
    DAT_800ac314 = FUN_80089fc8(0);
  }
  DAT_800ac300 = FUN_80085900(0xffffffff);
  uVar3 = FUN_80089a00();
  if ((uVar3 & 0xe0) != 0) {
    FUN_80089e1c(9,0,0);
  }
  iVar1 = FUN_8008c5d8(0);
  return 0 < iVar1;
}
