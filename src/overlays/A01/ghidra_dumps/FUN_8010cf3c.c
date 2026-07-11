// FUN_8010cf3c

void FUN_8010cf3c(void)

{
  byte bVar1;
  int in_v0;
  int unaff_s0;
  
  if (in_v0 == 0) {
    bVar1 = *(byte *)(unaff_s0 + 2);
    *(undefined1 *)(unaff_s0 + 2) = 0x10;
    *(ushort *)(unaff_s0 + 0x60) = (ushort)bVar1;
    func_0x800517f8();
  }
  return;
}

