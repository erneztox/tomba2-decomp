// FUN_80137be8

/* WARNING: Control flow encountered bad instruction data */

void FUN_80137be8(void)

{
  short sVar1;
  uint in_v0;
  uint uVar2;
  int iVar3;
  ushort in_v1;
  char *unaff_s0;
  int unaff_s1;
  
  uVar2 = (in_v0 & 0xfff) - 0x401;
  if ((in_v1 & 1) == 0) {
    if (uVar2 < 0x7ff) {
      *(ushort *)(unaff_s1 + 2) = in_v1 ^ 1;
      FUN_80140bc8();
      return;
    }
  }
  else if (0x7fe < uVar2) {
    *(ushort *)(unaff_s1 + 2) = in_v1 ^ 1;
    FUN_80140bc8();
    return;
  }
  unaff_s0[0x4e] = -0x30;
  unaff_s0[0x4f] = '3';
  unaff_s0[0x50] = -0x2c;
  unaff_s0[0x51] = -1;
  unaff_s0[0x40] = '\x16';
  unaff_s0[0x41] = '\0';
  unaff_s0[0x58] = '\0';
  unaff_s0[0x59] = '\0';
  if (*unaff_s0 == '\x03') {
    func_0x800331d8();
    unaff_s0[0x1b] = unaff_s0[0x1b] | 0x40;
  }
  FUN_801406e4();
  unaff_s0[7] = unaff_s0[7] + '\x01';
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(unaff_s0 + 0x2c) =
       *(int *)(unaff_s0 + 0x2c) +
       (int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + *(short *)(unaff_s0 + 0x50);
  if (*(short *)(unaff_s0 + 0x50) < 0x3c) {
    *(short *)(unaff_s0 + 0x50) = *(short *)(unaff_s0 + 0x50) + 4;
  }
  sVar1 = *(short *)(unaff_s0 + 0x4e) + -0x300;
  if (*(short *)(unaff_s0 + 0x4e) < 0) {
    sVar1 = *(short *)(unaff_s0 + 0x4e) + 0x300;
    *(short *)(unaff_s0 + 0x4e) = sVar1;
    if (-0x1145 < sVar1) {
      unaff_s0[0x4e] = -0x45;
      unaff_s0[0x4f] = -0x12;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(short *)(unaff_s0 + 0x4e) = sVar1;
    if (sVar1 < 0x1145) {
      unaff_s0[0x4e] = 'E';
      unaff_s0[0x4f] = '\x11';
    }
  }
  if (0 < *(short *)(unaff_s0 + 0x40)) {
    *(short *)(unaff_s0 + 0x40) = *(short *)(unaff_s0 + 0x40) + -1;
  }
  iVar3 = func_0x80083e80(*(short *)(unaff_s0 + 0x40) * -0x2e + 0x400);
  *(short *)(unaff_s0 + 0x58) = (short)(iVar3 * -0x2000 >> 0xc);
  FUN_801406e4();
  if (-1 < *(short *)(unaff_s0 + 0x50)) {
    unaff_s0[7] = unaff_s0[7] + '\x01';
    iVar3 = func_0x80083e80(*(short *)(unaff_s0 + 0x40) * -0x2e + 0x400);
                    /* WARNING: Subroutine does not return */
    *(short *)(unaff_s0 + 0x58) = (short)(iVar3 * -0x2000 + 0x400 >> 0xc);
    FUN_801402b8();
  }
  return;
}

