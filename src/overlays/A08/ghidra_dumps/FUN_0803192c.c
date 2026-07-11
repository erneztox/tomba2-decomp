// FUN_0803192c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803192c(undefined4 param_1)

{
  ushort *unaff_s1;
  ushort *unaff_s3;
  int unaff_s4;
  
  for (; func_0x0012a06c(param_1), unaff_s1 < unaff_s3; unaff_s1 = unaff_s1 + 1) {
    param_1 = func_0x00129bac(unaff_s4 + (uint)*unaff_s1 * 4 + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

