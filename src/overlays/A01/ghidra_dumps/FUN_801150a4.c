// FUN_801150a4

void FUN_801150a4(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 4) = 3;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_80112dd8(param_1);
  func_0x8003116c(0x24,param_1 + 0x2c,0xfffffff6);
  DAT_800bf9ec = DAT_800bf9ec + (char)(1 << ((*(byte *)(param_1 + 3) & 0xf) << 1));
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}

