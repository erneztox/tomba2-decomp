// FUN_80116ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80116ff0(void)

{
  ushort uVar1;
  short in_v0;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short in_v1;
  short sVar5;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  *(short *)(unaff_s2 + 0x4a) = in_v0 + in_v1;
  if (0x3fff < (short)(in_v0 + in_v1)) {
    *(undefined2 *)(unaff_s2 + 0x4a) = 0x4000;
    *(char *)(unaff_s2 + 0x78) = *(char *)(unaff_s2 + 0x78) + '\x01';
  }
  if (unaff_s1 != 0) {
    *(int *)(unaff_s1 + 0x30) = *(int *)(unaff_s1 + 0x30) + *(short *)(unaff_s2 + 0x4a) * 0x100;
    uVar1 = _DAT_1f80017c & 1;
    *(short *)(unaff_s1 + 0x54) = *(short *)(unaff_s1 + 0x54) + 0x188;
    if ((uVar1 != 0) && (iVar2 = func_0x8003116c(8,unaff_s1 + 0x2c,0xfffffff6), iVar2 != 0)) {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
      *(short *)(iVar2 + 0x2e) = *(short *)(iVar2 + 0x2e) + 0x30;
      iVar3 = func_0x80083f50((int)*(short *)(unaff_s1 + 0x54));
      sVar5 = (short)(iVar3 >> 6);
      *(short *)(iVar2 + 0x2e) = *(short *)(iVar2 + 0x2e) - (sVar5 + (sVar5 >> 1));
      iVar3 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x54));
      sVar5 = (short)(iVar3 >> 6);
      *(short *)(iVar2 + 0x30) = *(short *)(iVar2 + 0x30) - (sVar5 + (sVar5 >> 1));
    }
    if (-0x1771 < *(short *)(unaff_s1 + 0x32)) {
      *(undefined2 *)(unaff_s1 + 0x32) = 0xe890;
      iVar2 = func_0x800310f4(0x20,0);
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
        *(undefined2 *)(iVar2 + 0x50) = *(undefined2 *)(unaff_s1 + 0x2e);
        *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)(unaff_s1 + 0x2e);
        *(short *)(iVar2 + 0x52) = *(short *)(unaff_s1 + 0x32) + 0x30;
        iVar3 = func_0x80083f50((int)*(short *)(unaff_s1 + 0x54),1);
        sVar5 = (short)(iVar3 >> 6);
        sVar5 = *(short *)(iVar2 + 0x52) - (sVar5 + (sVar5 >> 1));
        *(short *)(iVar2 + 0x52) = sVar5;
        *(short *)(iVar2 + 0x5a) = sVar5 + 100;
        *(undefined2 *)(iVar2 + 0x54) = *(undefined2 *)(unaff_s1 + 0x36);
        iVar3 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x54));
        sVar5 = (short)(iVar3 >> 6);
        sVar5 = *(short *)(iVar2 + 0x54) - (sVar5 + (sVar5 >> 1));
        *(short *)(iVar2 + 0x54) = sVar5;
        *(short *)(iVar2 + 0x5c) = sVar5 + -400;
        func_0x80074590(7,0,0);
      }
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
      uVar4 = FUN_80128b08();
      return uVar4;
    }
  }
  return 0;
}

