// FUN_8013b534

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013b534(void)

{
  int in_v0;
  undefined4 uVar1;
  int unaff_s0;
  
  uVar1 = 0xa01;
  if (in_v0 >> 0x10 != -1) {
    if (in_v0 >> 0x10 == 0) {
      return;
    }
    if ((DAT_800e7e80 & 2) != 0) {
      *(undefined4 *)(unaff_s0 + 4) = 0xf01;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar1 = 0x101;
  }
  *(undefined4 *)(unaff_s0 + 4) = uVar1;
  return;
}

