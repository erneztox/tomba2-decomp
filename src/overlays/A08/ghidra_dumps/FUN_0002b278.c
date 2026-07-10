// FUN_0002b278

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b278(void)

{
  short in_v0;
  int iVar1;
  short in_v1;
  int unaff_s0;
  
  *(short *)(unaff_s0 + 0x4a) = in_v0 + in_v1;
  if (0x17ff < (short)(in_v0 + in_v1)) {
    *(undefined2 *)(unaff_s0 + 0x4a) = 0x1800;
  }
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + (*(short *)(unaff_s0 + 0x4a) >> 7);
  iVar1 = func_0x00049250();
  if ((iVar1 == 1) || (*(char *)(unaff_s0 + 0x29) != '\0')) {
    *(undefined1 *)(unaff_s0 + 0x46) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (iVar1 == 2) {
    if ((_DAT_1f8001a6 & 0xf00) != 0x700) {
      if ((*(byte *)(unaff_s0 + 3) < 4) || (_DAT_1f8001a4 < -5000)) {
        func_0x00134b2c();
        if ((*(char *)(unaff_s0 + 0x2a) == '\x1c') && (*(short *)(unaff_s0 + 0x32) < -0x1d4c)) {
          *(undefined1 *)(unaff_s0 + 0x47) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(unaff_s0 + 0x47) = 0;
        *(undefined1 *)(unaff_s0 + 0x46) = 0;
        *(short *)(unaff_s0 + 0x7a) = _DAT_1f8001a4;
        func_0x00135630();
        *(undefined2 *)(unaff_s0 + 0x50) = 0x180;
        *(char *)(unaff_s0 + 6) = *(char *)(unaff_s0 + 6) + '\x01';
        goto LAB_0002b3d4;
      }
      if (*(char *)(unaff_s0 + 1) != '\0') {
        func_0x00074590(0x1b,0,0);
        FUN_000315d4(unaff_s0 + 0x2c);
      }
    }
    *(undefined1 *)(unaff_s0 + 4) = 3;
  }
  else {
LAB_0002b3d4:
    func_0x001354f4();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

