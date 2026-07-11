// FUN_80118870

/* WARNING: Removing unreachable block (ram,0x80118890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80118870(uint param_1,short param_2)

{
  int in_v0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_s1;
  
  if (in_v0 == 0) {
    *(undefined2 *)(unaff_s1 + 0x36) = 0x36d8;
    FUN_80121824();
    return;
  }
  uVar4 = 0;
  if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
    iVar1 = (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(unaff_s1 + 0x2e)) * 0x10000) >> 0x10;
    iVar1 = iVar1 * iVar1;
    iVar2 = (int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(unaff_s1 + 0x36)) * 0x10000) >> 0x10;
    iVar5 = (uint)_DAT_1f800162 - (uint)*(ushort *)(unaff_s1 + 0x32);
    iVar3 = iVar5 * 0x10000 >> 0x10;
    param_1 = func_0x80084080(iVar1 + iVar2 * iVar2 + iVar3 * iVar3);
    param_2 = (short)iVar1;
    param_1 = param_1 & 0xffff;
    if ((2000 < param_1) || (0x44c < (iVar5 + 800U & 0xffff))) {
      FUN_80121900();
      return;
    }
    uVar4 = 2;
    if (1000 < param_1) {
      uVar4 = 1;
    }
  }
  if (uVar4 == 1) {
    *(undefined1 *)(unaff_s1 + 6) = 0;
  }
  else if (uVar4 < 2) {
    if (uVar4 == 0) {
      *(undefined1 *)(unaff_s1 + 5) = 0;
      FUN_80121b88();
      return;
    }
  }
  else if (uVar4 == 2) {
    *(undefined1 *)(unaff_s1 + 5) = 4;
    *(undefined1 *)(unaff_s1 + 6) = 0;
    *(undefined1 *)(unaff_s1 + 7) = 0;
    FUN_801208b4();
    return;
  }
  func_0x800778e4(param_1,(int)param_2);
  return;
}

