// FUN_80104bbc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80104bbc(int param_1,short param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  undefined1 *unaff_s0;
  
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    cVar2 = *(char *)(DAT_800bf871 + 0x80146eec);
    *(char *)(param_1 + 3) = cVar2;
    if (cVar2 == '\t') {
      _DAT_1f8000d2 = 0x354f;
      _DAT_1f8000d6 = 0xf073;
      _DAT_1f8000da = 0x1bfd;
    }
  }
  else if (bVar1 != 1) {
    *(ushort *)(unaff_s0 + 0x36) = (ushort)bVar1 + param_2;
    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x50) + 1;
    if (*(short *)(unaff_s0 + 0x40) == 0x3c) {
      *unaff_s0 = 1;
    }
    sVar3 = *(short *)(unaff_s0 + 0x4a);
    *(short *)(unaff_s0 + 0x4a) = sVar3 + 0x100;
    if (0x3000 < (short)(sVar3 + 0x100)) {
      *(undefined2 *)(unaff_s0 + 0x4a) = 0x3000;
    }
    *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x4a) * 0x100;
    *(short *)(unaff_s0 + 0x58) = *(short *)(unaff_s0 + 0x58) + 0x40;
    func_0x8006cba8(unaff_s0 + 0x2c);
    unaff_s0[0x29] = 0;
    FUN_80116cac();
    return;
  }
  FUN_8010cf90();
  return;
}

