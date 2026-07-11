// FUN_80112714

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80112714(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_20 [2];
  undefined2 uStack_1e;
  short sStack_1a;
  undefined2 uStack_16;
  
  bVar1 = param_1[6];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        FUN_8011b8dc();
        return;
      }
      param_1[4] = 1;
      param_1[5] = 1;
      param_1[6] = 0;
      *param_1 = 1;
      goto LAB_80112940;
    }
    if (bVar1 != 0) {
      FUN_8011b8dc();
      return;
    }
    param_1[6] = 1;
    if (param_1[0x5e] != '\x01') {
      func_0x8003116c(0x24,param_1 + 0x2c,0xffffffce);
      if (param_1[3] == '\x01') {
        uStack_1e = *(undefined2 *)(param_1 + 0x2e);
        sStack_1a = *(short *)(param_1 + 0x32) + -200;
        uStack_16 = *(undefined2 *)(param_1 + 0x36);
        func_0x8003116c(0x24,auStack_20,0xffffffce);
        sStack_1a = *(short *)(param_1 + 0x32) + -400;
        func_0x8003116c(0x24,auStack_20,0xffffffce);
        sStack_1a = *(short *)(param_1 + 0x32) + -600;
        func_0x8003116c(0x24,auStack_20,0xffffffce);
        sStack_1a = *(short *)(param_1 + 0x32) + -800;
        func_0x8003116c(0x24,auStack_20,0xffffffce);
      }
    }
    param_1[0x5e] = 1;
    *(undefined2 *)(param_1 + 0x40) = 4;
    *(undefined2 *)(param_1 + 0xe) = 0;
    func_0x80074590(0x93,0,0);
    func_0x80040c00(9);
    func_0x80040b48(10);
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    thunk_FUN_80123f10(param_1);
  }
  uVar4 = *(ushort *)(param_1 + 0xe) + 1 & 7;
  *(short *)(param_1 + 0xe) = (short)uVar4;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = *(undefined2 *)(uVar4 * 6 + -0x7fec9ef4);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) =
       *(undefined2 *)(*(short *)(param_1 + 0xe) * 6 + -0x7fec9ef2);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) =
       *(undefined2 *)(*(short *)(param_1 + 0xe) * 6 + -0x7fec9ef0);
  if ((*(short *)(param_1 + 0xe) == 0) &&
     (sVar2 = *(short *)(param_1 + 0x40), *(short *)(param_1 + 0x40) = sVar2 + -1, sVar2 == 1)) {
    param_1[6] = param_1[6] + '\x01';
    FUN_8011b8d8();
    return;
  }
LAB_80112940:
  iVar3 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
  if (iVar3 != 0) {
    func_0x80051844(param_1);
  }
  return;
}

