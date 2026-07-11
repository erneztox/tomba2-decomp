// FUN_08040400

void FUN_08040400(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    DAT_800bf9b4 = DAT_800bf9b4 | 2;
    *(undefined1 *)(param_1 + 4) = 3;
    func_0x0003116c(0x504,param_1 + 0x2c,0xffffffce);
    func_0x0003116c(0x503,param_1 + 0x2c,0xffffffce);
    iVar1 = func_0x00072ddc(0,0,4,0x37);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x80121a58;
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar1 + 0x32) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(param_1 + 0x36);
    }
  }
  return;
}

