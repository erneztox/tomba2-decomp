// FUN_80124e98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124e98(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if (DAT_800bf9dd == '\t') {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x80077b38(param_1,0x8014c808,0xf);
      *(undefined2 *)(param_1 + 0x60) = 0x40;
      *(undefined2 *)(param_1 + 0x62) = 0;
      *(undefined2 *)(param_1 + 100) = 0xffe0;
      FUN_8012def4();
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 5) != '\x01') {
      FUN_8012def4();
      return;
    }
    func_0x8004bd64(param_1,2,_DAT_800e7f5c,_DAT_800e7f50,param_1 + 0x60);
    *(undefined1 *)(param_1 + 1) = 1;
    if (DAT_800bf9dd == '\v') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  return;
}

