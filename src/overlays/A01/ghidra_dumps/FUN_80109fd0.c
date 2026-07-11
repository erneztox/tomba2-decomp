// FUN_80109fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80109fd0(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_s1;
  
  uVar2 = (uint)DAT_800bf871;
  if (uVar2 == 0x1a) {
    param_1[0xb] = 0x10;
    *(undefined2 *)(param_1 + 0x5a) = 0;
    param_1[0x47] = 0;
    *(undefined2 *)(param_1 + 0x5c) = 0;
    param_1[0xd] = 0;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x80077b38(param_1,0x80139294,0xe);
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x20;
    *(undefined2 *)(param_1 + 0x82) = 0x40;
    *(undefined2 *)(param_1 + 0x84) = 0x20;
    *(undefined2 *)(param_1 + 0x86) = 0x40;
    func_0x8004b354(param_1,0);
    *(undefined2 *)(param_1 + 0x68) = 0x92;
    return;
  }
  param_1[4] = 3;
  if (((((3 >> (uVar2 & 0x1f) & 1U) != 0) && ((_DAT_800bf850 & unaff_s1 << (uVar2 & 0x1f)) == 0)) &&
      (iVar1 = FUN_8010fb64(param_1), iVar1 != 0)) &&
     (iVar1 = func_0x8004c0e4(param_1,*(short *)(param_1 + 0x60) + 3,0), iVar1 != 0)) {
    *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
    *(short *)(iVar1 + 0x32) = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x84);
    *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    _DAT_800bf850 = _DAT_800bf850 | unaff_s1 << ((int)*(short *)(param_1 + 0x60) & 0x1fU);
    FUN_8011c054();
    return;
  }
  return;
}

