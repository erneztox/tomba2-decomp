// FUN_80111ba8

undefined4 FUN_80111ba8(void)

{
  int unaff_s0;
  int unaff_s1;
  
  if (*(char *)(unaff_s1 + 0x70) == -1) {
    *(undefined1 *)(unaff_s1 + 6) = 0;
    func_0x80042310();
    *(undefined2 *)(unaff_s0 + 0x80) = 200;
    *(undefined2 *)(unaff_s0 + 0x82) = 400;
    *(undefined2 *)(unaff_s0 + 0x84) = 0x2d0;
    *(int *)(unaff_s0 + 0x14) = unaff_s1;
    *(undefined2 *)(unaff_s0 + 0x86) = 0x310;
    *(undefined1 *)(unaff_s0 + 0x5e) = 0;
    return 0x310;
  }
  return 0;
}

