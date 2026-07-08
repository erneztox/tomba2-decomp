
void FUN_8001e09c(void)

{
  *(ushort *)(DAT_80026d88 + 0x1aa) = *(ushort *)(DAT_80026d88 + 0x1aa) & 0xffcf | 0x20;
  FUN_8001da40();
  return;
}

