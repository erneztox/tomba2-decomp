// FUN_801396d0

/* WARNING: Control flow encountered bad instruction data */

void FUN_801396d0(undefined1 param_1)

{
  undefined8 uVar1;
  int in_v1;
  int unaff_s1;
  undefined4 unaff_s6;
  
  if (in_v1 < 2) {
    if (in_v1 == 0) {
      *(undefined1 *)(unaff_s1 + 7) = param_1;
      FUN_801426b0();
      return;
    }
    uVar1 = getCopReg(2,unaff_s6);
    *(undefined8 *)(unaff_s1 + 0x6e82) = uVar1;
  }
  else if (in_v1 == 2) {
    *(undefined1 *)(unaff_s1 + 7) = 9;
                    /* WARNING: Subroutine does not return */
    *(undefined2 *)(unaff_s1 + 0x40) = 0x2d;
    FUN_801402b8();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

