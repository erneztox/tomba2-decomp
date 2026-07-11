// FUN_8012763c

void FUN_8012763c(void)

{
  int in_v0;
  int unaff_s0;
  
  if (in_v0 != 0) {
    *(short *)(*(int *)(unaff_s0 + 0xc4) + 0x12) = -*(short *)(*(int *)(unaff_s0 + 0xc4) + 0x12);
  }
  *(undefined1 *)(unaff_s0 + 0x5e) = 4;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  FUN_80130758();
  return;
}

