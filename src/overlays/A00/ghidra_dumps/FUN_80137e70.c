// FUN_80137e70

/* WARNING: Control flow encountered bad instruction data */

void FUN_80137e70(int param_1,int param_2)

{
  int iVar1;
  byte *unaff_s0;
  
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + param_2;
  *(int *)(unaff_s0 + 0x34) = *(int *)(unaff_s0 + 0x34) + param_1;
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + *(short *)(unaff_s0 + 0x50);
  if (*(short *)(unaff_s0 + 0x50) < 0x3c) {
    *(short *)(unaff_s0 + 0x50) = *(short *)(unaff_s0 + 0x50) + 4;
  }
  if (0 < *(short *)(unaff_s0 + 0x40)) {
    *(short *)(unaff_s0 + 0x40) = *(short *)(unaff_s0 + 0x40) + -1;
  }
  iVar1 = func_0x80083e80(*(short *)(unaff_s0 + 0x40) * -0x2e + 0x400);
  *(short *)(unaff_s0 + 0x58) = (short)(iVar1 * -0x2000 + 0x400 >> 0xc);
  FUN_801406e4();
  if (unaff_s0[0x29] != 0) {
    unaff_s0[0x50] = 0;
    unaff_s0[0x51] = 0;
    unaff_s0[0x50] = 0xf2;
    unaff_s0[0x51] = 0xff;
    unaff_s0[0x42] = 7;
    unaff_s0[0x43] = 0;
    unaff_s0[7] = unaff_s0[7] + 1;
    if ((unaff_s0[4] == 2) && ((*unaff_s0 & 2) != 0)) {
      *unaff_s0 = 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

