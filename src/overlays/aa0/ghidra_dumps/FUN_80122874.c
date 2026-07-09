// FUN_80122874

void FUN_80122874(void)

{
  int unaff_s2;
  
  *(undefined1 *)(unaff_s2 + 0x5f) =
       *(undefined1 *)((*(ushort *)(*(int *)(unaff_s2 + 0xc0) + 0x16) >> 6 & 7) + 0x8014a258);
  return;
}

