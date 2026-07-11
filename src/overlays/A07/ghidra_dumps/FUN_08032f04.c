// FUN_08032f04

/* WARNING: Control flow encountered bad instruction data */

void FUN_08032f04(int param_1)

{
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      *unaff_s0 = unaff_s1;
      unaff_s0[0x5e] = unaff_s1;
    }
  }
  else if (param_1 == 3) {
    *unaff_s0 = 2;
    unaff_s0[0x5e] = 3;
    unaff_s0[3] = 0;
    unaff_s0[4] = unaff_s0[4] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

