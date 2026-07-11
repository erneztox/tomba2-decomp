// FUN_8012f308

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012f308(void)

{
  int unaff_s4;
  int unaff_s8;
  
  *(undefined4 *)(unaff_s8 + 0x70c0) = 0;
  setCopReg(2,unaff_s4 + -0x7f80,*(undefined8 *)(unaff_s4 + -0x7f80));
  setCopReg(2,unaff_s4 + -0x7f80,*(undefined8 *)(unaff_s4 + -0x7f80));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

