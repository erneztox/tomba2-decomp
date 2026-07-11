// FUN_8011b54c

void FUN_8011b54c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    if (param_2 == 0) {
      *(short *)(param_1 + 0x2e) = *(short *)(iVar1 + 0x2c) + -0x14;
      *(short *)(param_1 + 0x32) = *(short *)(iVar1 + 0x30) + -200;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar1 + 0x34);
      FUN_8012459c();
      return;
    }
    iVar1 = (*(short *)(param_1 + 0x60) + -2) * 6;
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar1 + -0x7feb6750);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar1 + -0x7feb674e);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar1 + -0x7feb674c);
    *(undefined1 *)(param_1 + 0xb) = 0x13;
    *(undefined2 *)(param_1 + 0x54) = 0x100;
    func_0x80077b38(param_1,0x8014c808,3);
    FUN_80124698();
    return;
  }
  if (*(char *)(param_1 + 5) != '\x01') {
    FUN_80124698();
    return;
  }
  iVar1 = func_0x8007778c(param_1);
  if (iVar1 != 0) {
    iVar1 = param_1 + 0x98;
    func_0x80051794(iVar1);
    func_0x800847f0(param_1 + 0x54,iVar1);
    func_0x80084360(&DAT_1f8000f8,iVar1);
    func_0x80077b5c(param_1);
  }
  if (DAT_800bf9dd == 0xe) {
    func_0x8009a450();
    return;
  }
  if (DAT_800bf9dd < 0xe) {
    FUN_80124328(param_1);
  }
  return;
}

