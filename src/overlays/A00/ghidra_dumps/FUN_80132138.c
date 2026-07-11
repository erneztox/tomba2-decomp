// FUN_80132138

void FUN_80132138(void)

{
  int unaff_s0;
  
  if (*(char *)(unaff_s0 + 0x29) == '\x02') {
    *(undefined2 *)(unaff_s0 + 0x50) = 0;
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    func_0x8003116c(8,unaff_s0 + 0x2c,0xffffffe0);
    FUN_8013b2d0();
    return;
  }
  return;
}

