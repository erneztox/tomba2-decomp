// FUN_80125320

void FUN_80125320(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x40) < 1) {
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      FUN_8012e454();
      return;
    }
    *(undefined1 *)(param_1 + 5) = 2;
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
    func_0x8009a450();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_8012e454();
      return;
    }
    *(undefined1 *)(param_1 + 0x2a) = 3;
    func_0x8004766c(param_1);
    func_0x80049760(param_1);
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    FUN_8012e454();
    return;
  }
  if (bVar1 != 2) {
    FUN_8012e454();
    return;
  }
  sVar2 = *(short *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = sVar2 + -1;
  if (sVar2 == 1) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}

