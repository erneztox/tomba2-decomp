// FUN_80119dbc

void FUN_80119dbc(undefined1 *param_1)

{
  int iVar1;
  
  if (param_1[5] == '\0') {
    param_1[5] = 1;
    *param_1 = 2;
    param_1[0xb] = 1;
    *(undefined2 *)(param_1 + 0x2e) = 0x3900;
    *(undefined2 *)(param_1 + 0x32) = 0xf520;
    *(undefined2 *)(param_1 + 0x36) = 0x240;
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    func_0x80077cfc(param_1,&DAT_8014e4ec,4,4);
  }
  iVar1 = func_0x8007778c(param_1);
  if (iVar1 != 0) {
    func_0x80076d68(param_1);
    func_0x800518fc(param_1);
  }
  return;
}

