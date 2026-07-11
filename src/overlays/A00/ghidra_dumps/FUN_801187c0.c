// FUN_801187c0

void FUN_801187c0(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 0x5e) = 0;
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    func_0x80077c40(param_1,0x8014e1a4,7);
    func_0x80026100(6);
    func_0x80074590(0x99,0,0);
    return;
  }
  if (*(short *)(param_1 + 0x72) == 0) {
    func_0x80076d68(param_1);
  }
  return;
}

