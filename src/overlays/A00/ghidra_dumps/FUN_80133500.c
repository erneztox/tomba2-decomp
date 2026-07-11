// FUN_80133500

/* WARNING: Control flow encountered bad instruction data */

void FUN_80133500(undefined4 param_1,short param_2)

{
  undefined1 in_v0;
  short sVar1;
  int unaff_s0;
  
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  *(undefined1 *)(unaff_s0 + 4) = in_v0;
  sVar1 = FUN_801409c0(param_1,(int)param_2);
  if (sVar1 != 0) {
    *(char *)(unaff_s0 + 5) = (char)sVar1;
    *(undefined1 *)(unaff_s0 + 6) = 0;
    FUN_801454f0();
    return;
  }
  *(undefined4 *)(unaff_s0 + 4) = 0x301;
  *(undefined1 *)(unaff_s0 + 3) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

