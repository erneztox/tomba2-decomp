// FUN_0801e8c8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801e8c8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)_DAT_1f8000d2) * 0x10000) >> 0x10;
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)_DAT_1f8000d6) * 0x10000) >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)_DAT_1f8000da) * 0x10000) >> 0x10;
  uVar1 = func_0x00077fb0(iVar4 * iVar4 + iVar3 * iVar3 + iVar2 * iVar2);
  uVar1 = uVar1 & 0xffff;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((0x1ff < uVar1) && (uVar1 < 0x2301)) {
    iVar2 = _DAT_1f8000e8 * iVar4 + _DAT_1f8000ea * iVar3 + _DAT_1f8000ec * iVar2;
    if (uVar1 == 0) {
      trap(0x1c00);
    }
    if ((uVar1 << 2 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    if (0x357 < iVar2 / (int)(uVar1 << 2)) {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077ebc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0;
}

