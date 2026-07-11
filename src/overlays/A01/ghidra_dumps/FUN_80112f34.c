// FUN_80112f34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80112f34(undefined1 *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                 0x10000) >> 0x10);
    if ((((((int)(uint)DAT_800bf9f4 >> ((int)*(short *)(param_1 + 0x60) & 0x1fU) & 1U) != 0) &&
         ((_DAT_800bf850 & 1 << ((int)*(short *)(param_1 + 0x60) & 0x1fU)) == 0)) &&
        (iVar2 = FUN_8010fb64(param_1), iVar2 != 0)) &&
       (iVar2 = func_0x8004c0e4(param_1,*(short *)(param_1 + 0x60) + 3,0), iVar2 != 0)) {
      *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(iVar2 + 0x32) = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x84);
      *(undefined2 *)(iVar2 + 0x36) = *(undefined2 *)(param_1 + 0x36);
      _DAT_800bf850 = _DAT_800bf850 | 1 << ((int)*(short *)(param_1 + 0x60) & 0x1fU);
      FUN_8011c054();
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_8011c054();
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x78;
      *(undefined2 *)(param_1 + 0x82) = 0xf0;
      *(undefined2 *)(param_1 + 0x84) = 200;
      *(undefined2 *)(param_1 + 0x86) = 400;
      *param_1 = 1;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[0xb] = 0;
      param_1[4] = param_1[4] + '\x01';
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 100;
      FUN_8011c054();
      return;
    }
    if (bVar1 == 2) {
      FUN_8011bdc4(param_1);
      FUN_8011c054();
      return;
    }
    if (bVar1 != 3) {
      FUN_8011c054();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

