// FUN_000270f8

void FUN_000270f8(void)

{
  int in_v0;
  int unaff_s0;
  undefined2 uStack00000022;
  
  uStack00000022 = (undefined2)in_v0;
  *(byte *)(in_v0 + 0x28) = *(byte *)(in_v0 + 0x28) | 0x80;
  func_0x00074590(7,0,0);
  *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
  if (DAT_800bf816 == '\0') {
    *(undefined1 *)(unaff_s0 + 4) = 3;
  }
  return;
}

