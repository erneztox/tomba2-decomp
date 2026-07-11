// FUN_8010e078

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010e078(void)

{
  int in_v0;
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined6 uVar4;
  
  if (in_v0 != 0x11) {
    *(undefined1 *)(unaff_s0 + 0x46) = 0x11;
    *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 0x4c);
    func_0x80077c40();
  }
  uVar4 = func_0x80077768((uint)*(byte *)(unaff_s0 + 0x2b) << 4,(int)*(short *)(unaff_s1 + 4),0);
  if ((int)uVar4 == 0) {
    *(ushort *)(unaff_s1 + 6) = *(ushort *)(unaff_s1 + 6) | 1;
    *(undefined2 *)(unaff_s0 + 0x4e) = 0xfe00;
    *(undefined2 *)(unaff_s0 + 0x50) = 0xffd8;
    *(undefined1 *)(unaff_s0 + 0x29) = 0;
    *(undefined1 *)(unaff_s0 + 6) = 1;
    *(byte *)(unaff_s0 + 0x1b) = *(byte *)(unaff_s0 + 0x1b) & 0xbf;
    sVar3 = func_0x80074590(0x8f,0,0);
  }
  else {
    *(byte *)(unaff_s0 + 0x28) = (byte)*(undefined2 *)(unaff_s1 + 6) & 0xfe;
    *(short *)(unaff_s0 + 0x2e) = (short)((uint6)uVar4 >> 0x20);
    iVar1 = func_0x80083f50((int)*(short *)(unaff_s1 + 0x54));
    sVar3 = (short)(iVar1 >> 6);
    *(short *)(unaff_s0 + 0x2e) = *(short *)(unaff_s0 + 0x2e) - (sVar3 + (sVar3 >> 1));
    iVar1 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x54));
    sVar3 = (short)(iVar1 >> 6);
    *(short *)(unaff_s0 + 0x30) = *(short *)(unaff_s0 + 0x30) - (sVar3 + (sVar3 >> 1));
    if (*(short *)(unaff_s1 + 0x32) < -6000) {
      return 0;
    }
    *(undefined2 *)(unaff_s1 + 0x32) = 0xe890;
    iVar1 = func_0x800310f4(0x20,0);
    if (iVar1 == 0) goto LAB_801171c4;
    *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    *(undefined2 *)(iVar1 + 0x50) = *(undefined2 *)(unaff_s1 + 0x2e);
    unaff_s0 = iVar1 + 0x50;
    *(undefined2 *)(iVar1 + 0x58) = *(undefined2 *)(unaff_s1 + 0x2e);
    *(short *)(iVar1 + 0x52) = *(short *)(unaff_s1 + 0x32) + 0x30;
    iVar1 = func_0x80083f50((int)*(short *)(unaff_s1 + 0x54),1);
    sVar3 = (short)(iVar1 >> 6);
  }
  sVar3 = *(short *)(unaff_s0 + 2) - (sVar3 + (sVar3 >> 1));
  *(short *)(unaff_s0 + 2) = sVar3;
  *(short *)(unaff_s0 + 10) = sVar3 + 100;
  *(undefined2 *)(unaff_s0 + 4) = *(undefined2 *)(unaff_s1 + 0x36);
  iVar1 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x54));
  sVar3 = (short)(iVar1 >> 6);
  sVar3 = *(short *)(unaff_s0 + 4) - (sVar3 + (sVar3 >> 1));
  *(short *)(unaff_s0 + 4) = sVar3;
  *(short *)(unaff_s0 + 0xc) = sVar3 + -400;
  func_0x80074590(7,0,0);
LAB_801171c4:
  func_0x80051b04(*(undefined4 *)(unaff_s1 + 0xc0),1,0);
  *(undefined2 *)(unaff_s2 + 0x40) = 0;
  *(ushort *)(unaff_s2 + 0xc0) = (ushort)*(byte *)(unaff_s2 + 0x78);
  *(undefined2 *)(unaff_s2 + 0xc2) = *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0x30);
  *(undefined2 *)(unaff_s2 + 0xc4) = *(undefined2 *)(*(int *)(unaff_s3 + 0xc0) + 0x34);
  func_0x80084110(unaff_s1 + 0xf8,*(int *)(unaff_s3 + 0xc0) + 0x18,0x1f800000);
  func_0x80084220(unaff_s2 + 0xc0,&DAT_1f800014);
  _DAT_1f800014 = _DAT_1f800014 + *(int *)(unaff_s1 + 0x10c);
  _DAT_1f800018 = _DAT_1f800018 + *(int *)(unaff_s1 + 0x110);
  _DAT_1f80001c = _DAT_1f80001c + *(int *)(unaff_s1 + 0x114);
  func_0x80084660(0x1f800000);
  func_0x80084690(0x1f800000);
  uVar2 = FUN_80128b08();
  return uVar2;
}

