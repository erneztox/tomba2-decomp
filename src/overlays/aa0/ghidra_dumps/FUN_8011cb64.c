// FUN_8011cb64

void FUN_8011cb64(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s5;
  
  uVar1 = *(short *)(unaff_s0 + 0x40) - 1;
  *(ushort *)(unaff_s0 + 0x40) = uVar1;
  if ((int)((uint)uVar1 << 0x10) < 1) {
    *(undefined2 *)(unaff_s0 + 0x2e) =
         *(undefined2 *)(*(int *)(unaff_s2 + (uint)*(byte *)(unaff_s0 + 0x5f) * 4 + 0xc0) + 0x2c);
    *(undefined2 *)(unaff_s0 + 0x36) =
         *(undefined2 *)(*(int *)(unaff_s2 + (uint)*(byte *)(unaff_s0 + 0x5f) * 4 + 0xc0) + 0x34);
    *(short *)(unaff_s0 + 0x32) =
         *(short *)(unaff_s0 + 0x32) + (short)(char)((ushort)*(undefined2 *)(unaff_s0 + 0x4a) >> 8);
    *(ushort *)(unaff_s0 + 0x54) =
         *(short *)(unaff_s0 + 0x54) + (*(short *)(unaff_s0 + 0x44) >> 4) & 0xfff;
    FUN_80126040();
    *(short *)(unaff_s0 + 0xb8) = *(short *)(unaff_s0 + 0xb8) + -0x40;
    *(short *)(unaff_s0 + 0xbc) = *(short *)(unaff_s0 + 0xbc) + -0x40;
    *(short *)(unaff_s0 + 0xba) = *(short *)(unaff_s0 + 0xba) + -0x40;
    FUN_80125c1c();
    return;
  }
  uVar2 = (uint)*(ushort *)(unaff_s0 + 0x2e) + (uint)*(ushort *)(unaff_s0 + 0x48);
  *(short *)(unaff_s0 + 0x2e) = (short)uVar2;
  *(short *)(unaff_s0 + 0x36) = *(short *)(unaff_s0 + 0x36) + *(short *)(unaff_s0 + 0x4c);
  while( true ) {
    if ((int)uVar2 <= unaff_s3) {
      return;
    }
    iVar3 = *(int *)(unaff_s0 + 0xc4);
    uVar2 = (uint)*(ushort *)(iVar3 + 6);
    if (*(short *)(iVar3 + 6) == -1) break;
    if ((unaff_s3 == 2) || ((unaff_s3 == 3 && ((*(ushort *)(unaff_s1 + 0x60) & 2) != 0)))) {
      func_0x80085480(iVar3 + 8,unaff_s5);
      func_0x80051794();
      if ((*(ushort *)(unaff_s1 + 0x60) & 1) != 0) {
        FUN_8012e9ec();
        return;
      }
      func_0x80085050((int)*(short *)(*(int *)(unaff_s1 + 0xc0) + 0xc));
      func_0x80084eb0((int)*(short *)(unaff_s1 + 0x56));
      func_0x80084110();
      func_0x80084470(*(int *)(unaff_s1 + ((int)(uVar2 << 0x10) >> 0xe) + 0xc0) + 0x18,
                      *(int *)(unaff_s0 + 0xc4),*(int *)(unaff_s0 + 0xc4) + 0x2c);
      FUN_8012eabc(uVar2 << 0x10);
      return;
    }
    if ((*(ushort *)(unaff_s1 + 0x60) & 1) != 0) {
      func_0x80051794();
      func_0x80084a80(*(int *)(unaff_s0 + 0xc4) + 8);
      FUN_80137a6c();
      return;
    }
    func_0x80085480(*(int *)(unaff_s0 + 0xc4) + 8,unaff_s5);
    func_0x80084110(*(int *)(unaff_s1 + ((int)(uVar2 << 0x10) >> 0xe) + 0xc0) + 0x18,unaff_s5,
                    *(int *)(unaff_s0 + 0xc4) + 0x18);
    func_0x80084220(*(int *)(unaff_s0 + 0xc4),*(int *)(unaff_s0 + 0xc4) + 0x2c);
    iVar3 = unaff_s1 + ((int)(uVar2 << 0x10) >> 0xe);
    *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x2c) =
         *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x2c) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x2c);
    *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x30) =
         *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x30) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x30);
    *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x34) =
         *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x34) + *(int *)(*(int *)(iVar3 + 0xc0) + 0x34);
    uVar2 = (uint)*(byte *)(unaff_s1 + 8);
    unaff_s3 = unaff_s3 + 1;
    unaff_s0 = unaff_s0 + 4;
  }
  func_0x80085480(iVar3 + 8);
  func_0x80084110(unaff_s1 + 0x98);
  func_0x80084220(*(int *)(unaff_s0 + 0xc4),*(int *)(unaff_s0 + 0xc4) + 0x2c);
  *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x2c) =
       *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x2c) + (int)*(short *)(unaff_s1 + 0x2e);
  *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x30) =
       *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x30) + (int)*(short *)(unaff_s1 + 0x32);
  *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x34) =
       *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x34) + (int)*(short *)(unaff_s1 + 0x36);
  FUN_8012eb18();
  return;
}

