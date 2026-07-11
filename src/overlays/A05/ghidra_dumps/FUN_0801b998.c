// FUN_0801b998

void FUN_0801b998(int param_1)

{
  if ((*(char *)(param_1 + 0x5f) != '\0') ||
     ((*(char *)(param_1 + 0x29) != '\0' && (*(char *)(param_1 + 0x29) != -0x80)))) {
    func_0x00027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x700,8);
    func_0x00074590(0xc,0,0);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

