// FUN_80126bec

void FUN_80126bec(int param_1)

{
  undefined2 uVar1;
  int unaff_s1;
  
  if ((*(ushort *)(unaff_s1 + 0x78) & 1) != 0) {
    uVar1 = 0xf;
    if ((*(ushort *)(unaff_s1 + 0x78) & 0x8000) == 0) {
      uVar1 = 0x1e;
    }
    *(undefined2 *)(unaff_s1 + 0x40) = uVar1;
    *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
    *(char *)(param_1 + 6) = (char)unaff_s1;
    *(undefined2 *)(param_1 + 0x50) = 0x400;
    func_0x80072efc();
    FUN_80141c00();
    return;
  }
  *(undefined2 *)(unaff_s1 + 0x48) = 0;
  *(undefined2 *)(unaff_s1 + 0x4e) = 0;
  *(undefined2 *)(unaff_s1 + 0x78) = 0;
  *(undefined1 *)(unaff_s1 + 5) = 0;
  *(undefined1 *)(unaff_s1 + 6) = 0;
  *(undefined1 *)(unaff_s1 + 0x5e) = 0;
  *(undefined2 *)(unaff_s1 + 0x76) = 0;
  return;
}

