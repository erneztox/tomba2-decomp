// FUN_8010dd34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010dd34(void)

{
  short in_v0;
  int iVar1;
  char cVar2;
  short sVar3;
  int in_v1;
  undefined1 *puVar4;
  undefined1 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  if (in_v1 != 0) goto LAB_80117154;
  *(undefined4 *)(unaff_s0 + 0x54) = 0;
  *(undefined2 *)(unaff_s0 + 0x58) = 0;
  func_0x80026100(8);
  if (unaff_s0[0x46] != '\x0f') {
    unaff_s0[0x46] = 0xf;
    *(int *)(*(int *)(unaff_s0 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 0x4c);
    func_0x80077c40();
  }
  *(undefined2 *)(unaff_s0 + 0x84) = 0x14;
  *(undefined2 *)(unaff_s0 + 0x86) = 100;
  unaff_s0[0x1b] = unaff_s0[0x1b] & 0xbf;
  func_0x80074590(0x90,0,0);
  *(undefined2 *)(unaff_s0 + 0x4e) = 0x100;
  *(undefined2 *)(unaff_s0 + 0x50) = 0;
  *unaff_s0 = 6;
  unaff_s0[0xd] = unaff_s0[0xd] & 0xfd;
  *(undefined2 *)(unaff_s1 + 0x10) = 0;
  unaff_s0[6] = (char)unaff_s2;
  FUN_80116620();
  if ((byte)unaff_s0[3] < 3) {
    cVar2 = unaff_s0[0x2a];
    if (cVar2 == '\v') {
      if (*(short *)(unaff_s0 + 0x36) < 0x19c8) {
        *(undefined2 *)(unaff_s0 + 0x36) = 0x19c8;
        goto LAB_8010de38;
      }
      goto LAB_8010de3c;
    }
LAB_8010de64:
    if ((cVar2 == '\x18') && (*(short *)(unaff_s0 + 0x2e) < 0x237a)) {
      *(undefined2 *)(unaff_s0 + 0x2e) = 0x237a;
    }
  }
  else {
LAB_8010de38:
    cVar2 = unaff_s0[0x2a];
LAB_8010de3c:
    if (cVar2 != '\v') goto LAB_8010de64;
    if (*(short *)(unaff_s0 + 0x36) < 0x1450) {
      *(undefined2 *)(unaff_s0 + 0x36) = 0x1450;
      FUN_80116e20();
      return;
    }
  }
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
  iVar1 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x10));
  *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + iVar1 * 0x80;
  func_0x8004766c();
  func_0x80049760();
  *(undefined2 *)(unaff_s1 + 4) = _DAT_1f8001a0;
  func_0x8004954c();
  func_0x800493e8();
  puVar4 = unaff_s0;
  func_0x80049250();
  if (DAT_800e7fc7 == '\0') {
    if (*(char *)(unaff_s1 + 0x5e) == '\x02') {
      *(undefined1 **)(unaff_s1 + 0x14) = puVar4;
    }
    puVar4[0x5e] = 0;
    *(short *)(*(int *)(puVar4 + 0xc0) + 2) = *(short *)(*(int *)(puVar4 + 0xc0) + 2) + 0x30;
    if ((*(byte *)(unaff_s1 + 0x5e) & 2) == 0) {
      func_0x80040d68();
      *(undefined1 *)(unaff_s1 + 0x70) = 1;
      func_0x80042354(1,1);
      *(undefined1 *)(unaff_s1 + 5) = 1;
      return;
    }
    FUN_8011fec4();
    return;
  }
  *(ushort *)(unaff_s1 + 6) = *(ushort *)(unaff_s1 + 6) | 1;
  *(ushort *)(unaff_s0 + 0x56) = *(short *)(unaff_s1 + 4) - 0x800U & 0xfff;
  *(short *)(unaff_s0 + 0x4e) =
       *(short *)(unaff_s0 + 0x4e) - (short)(*(short *)(unaff_s0 + 0x4e) + -0x40 >> 4);
  iVar1 = (uint)*(ushort *)(unaff_s0 + 0x50) -
          ((int)((uint)*(ushort *)(unaff_s0 + 0x50) << 0x10) >> 0x14);
  *(short *)(unaff_s0 + 0x50) = (short)iVar1;
  iVar1 = iVar1 * 0x10000 >> 0x10;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 0x20) {
    *(undefined2 *)(unaff_s0 + 0x50) = 0;
  }
  *(short *)(unaff_s1 + 0x10) = *(short *)(unaff_s1 + 0x10) + 0x40;
  DAT_800e7eaa = unaff_s0[0x2a];
  in_v0 = 0;
LAB_80117154:
  sVar3 = *(short *)(unaff_s0 + 2) - (in_v0 + (in_v0 >> 1));
  *(short *)(unaff_s0 + 2) = sVar3;
  *(short *)(unaff_s0 + 10) = sVar3 + 100;
  *(undefined2 *)(unaff_s0 + 4) = *(undefined2 *)(unaff_s1 + 0x36);
  iVar1 = func_0x80083e80((int)*(short *)(unaff_s1 + 0x54));
  sVar3 = (short)(iVar1 >> 6);
  sVar3 = *(short *)(unaff_s0 + 4) - (sVar3 + (sVar3 >> 1));
  *(short *)(unaff_s0 + 4) = sVar3;
  *(short *)(unaff_s0 + 0xc) = sVar3 + -400;
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

