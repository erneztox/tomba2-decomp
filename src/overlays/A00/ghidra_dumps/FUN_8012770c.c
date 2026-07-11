// FUN_8012770c

void FUN_8012770c(void)

{
  int unaff_s0;
  
  *(undefined2 *)(unaff_s0 + 0x40) = 10;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  FUN_80130758();
  return;
}

