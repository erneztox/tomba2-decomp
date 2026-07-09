// FUN_80112a60

void FUN_80112a60(void)

{
  short sVar1;
  short in_v0;
  int iVar2;
  int in_v1;
  int unaff_s0;
  
  *(ushort *)(unaff_s0 + 0x5a) = in_v0 - 0x100U & 0xfff;
  *(int *)(unaff_s0 + 0x2c) = in_v1 + *(short *)(unaff_s0 + 0x48) * 0x100;
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + *(short *)(unaff_s0 + 0x4c) * 0x100;
  sVar1 = *(short *)(unaff_s0 + 0x50);
  *(short *)(unaff_s0 + 0x50) = *(short *)(unaff_s0 + 0x50) + *(short *)(unaff_s0 + 0x52);
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + sVar1 * 0x100;
  func_0x8006cba8(unaff_s0 + 0x2c);
  sVar1 = *(short *)(unaff_s0 + 0x40);
  *(short *)(unaff_s0 + 0x40) = sVar1 + -1;
  if (sVar1 == 1) {
    *(char *)(unaff_s0 + 5) = *(char *)(unaff_s0 + 5) + '\x01';
    iVar2 = func_0x8003116c(0x107,unaff_s0 + 0x2c,0xfffffff6);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    }
    func_0x80074590(7,0,0);
    return;
  }
  func_0x80077b5c();
  if (*(char *)(unaff_s0 + 1) != '\0') {
    func_0x80077e7c();
  }
  return;
}

