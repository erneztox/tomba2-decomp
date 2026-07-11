// FUN_8012fd38

void FUN_8012fd38(void)

{
  int in_v0;
  undefined1 *unaff_s0;
  
  if (*(char *)(in_v0 + -0x78f) == '\t') {
    *unaff_s0 = 2;
    *(undefined2 *)(unaff_s0 + 0x50) = 0x400;
    unaff_s0[6] = unaff_s0[6] + '\x01';
    func_0x80072efc();
    *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
    FUN_80138e70();
    return;
  }
  unaff_s0[6] = 3;
  FUN_80138e70();
  return;
}

