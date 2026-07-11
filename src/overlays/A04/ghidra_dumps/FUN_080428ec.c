// FUN_080428ec

/* WARNING: Control flow encountered bad instruction data */

void FUN_080428ec(void)

{
  short sVar1;
  short extraout_var;
  short extraout_var_00;
  int iVar2;
  short *unaff_s1;
  short *unaff_s2;
  int unaff_s3;
  short unaff_s4;
  
  do {
    iVar2 = (int)unaff_s4;
    func_0x00083f50(iVar2);
    unaff_s4 = unaff_s4 + 0x249;
    *unaff_s2 = *unaff_s2 + extraout_var;
    func_0x00083e80(iVar2);
    unaff_s3 = unaff_s3 + 1;
    unaff_s2 = unaff_s2 + 4;
    sVar1 = *unaff_s1;
    unaff_s1[-1] = unaff_s1[-1] + extraout_var_00;
    *unaff_s1 = sVar1 + 4;
    unaff_s1[-2] = unaff_s1[-2] + sVar1;
    unaff_s1 = unaff_s1 + 4;
  } while (unaff_s3 * 0x10000 >> 0x10 < 7);
  iVar2 = func_0x0002b278();
  if (iVar2 == 0) {
    func_0x00031780();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

