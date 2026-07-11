// FUN_8010d050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010d050(int param_1)

{
  _DAT_1f8000c0 = 0;
  _DAT_1f8000c2 = 0x62;
  _DAT_1f8000c4 = 0xffe0;
  func_0x8004bd64(param_1,2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xdc),
                  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xd0),&DAT_1f8000c0);
  if (DAT_800bfa3e == '\x01') {
    *(undefined1 *)(param_1 + 4) = 3;
    func_0x8004d4f4(0x1c,1);
    func_0x80026100(DAT_800bf87f);
    func_0x8004ed94(0x70,0x41);
    func_0x8004b2e8(param_1);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x800517f8(param_1);
  return;
}

