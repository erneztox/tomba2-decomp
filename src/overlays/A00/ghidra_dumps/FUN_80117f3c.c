// FUN_80117f3c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80117f3c(void)

{
  int in_v0;
  int unaff_s0;
  
  *(undefined1 *)(in_v0 + 5) = 0x12;
  *(undefined1 *)(in_v0 + 6) = 0;
  *(undefined1 *)(in_v0 + 7) = 0;
  DAT_800bf80a = 3;
  _DAT_800bf83a = 0x810;
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  FUN_80120f2c();
  return;
}

