// FUN_80125170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125170(int param_1)

{
  int iVar1;
  int unaff_s2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x80077b38(param_1,0x8014c808,0x11);
    *(undefined2 *)(param_1 + 0x60) = 0xff38;
    *(undefined2 *)(param_1 + 0x62) = 0x20;
    *(undefined2 *)(param_1 + 100) = 0;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
    *(short *)(unaff_s2 + 0x68) = (short)param_1;
    *(undefined2 *)(unaff_s2 + 0x6a) = 0;
    *(undefined2 *)(unaff_s2 + 0x66) = 1;
    return;
  }
  func_0x8004bd64(param_1,2,0,*(undefined4 *)(iVar1 + 0xd0),param_1 + 0x60);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar1 + 1);
  if (DAT_800bf9b5 == '\x05') {
    func_0x8004d4c4(0xe,1);
    func_0x8004b0d8(param_1);
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

