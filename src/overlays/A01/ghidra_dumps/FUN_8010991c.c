// FUN_8010991c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010991c(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x80072ddc(param_1,1,5,3);
  if (iVar2 == 0) {
    return 0;
  }
  *(char *)(iVar2 + 3) = (char)param_2;
  *(undefined4 *)(iVar2 + 0x1c) = 0x80112100;
  if ((iVar2 == 0) &&
     (sVar1 = *(short *)(param_2 + 0x40), *(short *)(param_2 + 0x40) = sVar1 + -1, sVar1 == 1)) {
    *(char *)(param_2 + 6) = *(char *)(param_2 + 6) + '\x01';
    uVar3 = FUN_8011b8d8();
    return uVar3;
  }
  iVar2 = func_0x800778e4(param_2,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_2 + 0x32)) *
                                       0x10000) >> 0x10);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = func_0x80051844(param_2);
  }
  return uVar3;
}

