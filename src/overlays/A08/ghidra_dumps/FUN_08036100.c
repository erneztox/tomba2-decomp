// FUN_08036100

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036100(void)

{
  int unaff_s0;
  
  func_0x0012fb28();
  if ((DAT_800bf809 == '\0') && (DAT_1f800137 == '\0')) {
    if (*(byte *)(unaff_s0 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803614c */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(unaff_s0 + 5) * 4 + -0x7fef5f40))();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

