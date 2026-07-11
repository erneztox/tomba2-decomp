// FUN_8011d72c

void FUN_8011d72c(undefined1 *param_1)

{
  short sVar1;
  uint uVar2;
  
  func_0x8004766c();
  if (param_1[6] == '\0') {
    sVar1 = *(short *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = sVar1 - 1U;
    if ((int)((uint)(ushort)(sVar1 - 1U) << 0x10) < 0) {
      func_0x80077b38(param_1,0x8014c808,0x17);
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (param_1[6] != '\x01') {
    FUN_80126808();
    return;
  }
  func_0x80077b5c(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
  uVar2 = func_0x80049250(param_1,0,0x1e);
  if (uVar2 != 0) {
    if (param_1[1] != '\0') {
      func_0x80074590(0x98,0x12,0);
      return;
    }
    if ((uVar2 & 1) != 0) {
      func_0x80049674(param_1);
      *(undefined2 *)(param_1 + 100) = 0;
      FUN_801267b8();
      return;
    }
    func_0x80049760(param_1);
    *(undefined2 *)(param_1 + 100) = 4;
    func_0x80077b38(param_1,0x8014c808,0x17);
    *(undefined2 *)(param_1 + 0x44) = 0x800;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x1e;
    *(undefined2 *)(param_1 + 0x82) = 0x3c;
    *(undefined2 *)(param_1 + 0x84) = 0x3c;
    *(undefined2 *)(param_1 + 0x86) = 0x5a;
    param_1[5] = 2;
    param_1[6] = 4;
  }
  return;
}

