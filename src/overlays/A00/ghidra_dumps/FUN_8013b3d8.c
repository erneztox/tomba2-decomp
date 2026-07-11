// FUN_8013b3d8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013b3d8(void)

{
  short sVar1;
  int in_v0;
  int in_v1;
  int unaff_s0;
  
  if (in_v1 == in_v0) {
    sVar1 = FUN_801431c4();
    if (sVar1 == -1) {
      *(undefined4 *)(unaff_s0 + 4) = 0xa01;
    }
    else if (sVar1 != 0) {
      *(undefined2 *)(unaff_s0 + 6) = 3;
      halt_baddata();
    }
  }
  else {
    if (2 < in_v1) {
      if (in_v1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(unaff_s0 + 7) != '\0') {
        if (*(byte *)(unaff_s0 + 7) < 2) {
          FUN_8014441c();
          return;
        }
        *(byte *)(unaff_s0 + 7) = *(byte *)(unaff_s0 + 7) - 1;
        *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
        FUN_801406e4();
        FUN_801448fc();
        return;
      }
                    /* WARNING: Subroutine does not return */
      *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) & 0xfffb;
      FUN_801402b8();
    }
    if (-1 < in_v1) {
      FUN_80144534();
      return;
    }
  }
  return;
}

