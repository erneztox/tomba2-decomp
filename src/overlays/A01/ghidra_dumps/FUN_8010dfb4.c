// FUN_8010dfb4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010dfb4(void)

{
  undefined1 in_v0;
  int iVar1;
  short sVar2;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  undefined6 uVar3;
  
  *(undefined1 *)(unaff_s0 + 6) = in_v0;
  uVar3 = func_0x80080750();
  if ((int)uVar3 == 0) {
    *(undefined1 *)(unaff_s0 + 5) = 2;
    FUN_80116ff0();
    return;
  }
  *(undefined1 *)(unaff_s0 + 4) = 3;
  *(short *)(unaff_s0 + 10) = (short)((uint6)uVar3 >> 0x20);
  *(undefined2 *)(unaff_s0 + 4) = *(undefined2 *)(unaff_s1 + 0x36);
  iVar1 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x54));
  sVar2 = (short)(iVar1 >> 6);
  sVar2 = *(short *)(unaff_s0 + 4) - (sVar2 + (sVar2 >> 1));
  *(short *)(unaff_s0 + 4) = sVar2;
  *(short *)(unaff_s0 + 0xc) = sVar2 + -400;
  func_0x80074590(7,0,0);
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
  FUN_80128b08();
  return;
}

