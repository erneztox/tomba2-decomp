// FUN_80101f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80101f30(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    func_0x80054198(param_1);
    func_0x80054d14(param_1,0x40,0);
    *(undefined1 *)(param_1 + 7) = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    FUN_8010b068();
    return;
  }
  if ((_DAT_800ecf54 & 0x10) != 0) {
    if ((_DAT_1f80017c & 3) == 0) {
      func_0x80074590(0x97,0,0xffffffe2);
      return;
    }
    FUN_8010afb0(param_1,0x41);
    return;
  }
  if ((_DAT_800ecf54 & 0x40) != 0) {
    if ((_DAT_1f80017c & 3) == 0) {
      func_0x80074590(0x97,0,0xffffffe2);
      return;
    }
    func_0x80054d14(param_1,0x43,0);
    func_0x80076d68(param_1);
    FUN_8010afe8(param_1);
    return;
  }
  func_0x80076d68(param_1);
  func_0x80054d14(param_1,0x40,4);
  iVar1 = func_0x8006271c(param_1,2);
  if ((iVar1 != 0) && (iVar1 = func_0x80055824(), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 5) = 4;
    *(undefined1 *)(param_1 + 6) = 2;
    *(undefined1 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x40) = 8;
    func_0x80074590(0x1d,0,0);
    return;
  }
  return;
}

