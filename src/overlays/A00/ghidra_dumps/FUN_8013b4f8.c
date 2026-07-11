// FUN_8013b4f8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8013b4f8(undefined4 param_1)

{
  short sVar1;
  int unaff_s0;
  
  sVar1 = FUN_80142a94(param_1,800,0x1e00);
  if (sVar1 == -1) {
    *(undefined4 *)(unaff_s0 + 4) = 0xa01;
  }
  else if (sVar1 != 0) {
    *(undefined2 *)(unaff_s0 + 6) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

