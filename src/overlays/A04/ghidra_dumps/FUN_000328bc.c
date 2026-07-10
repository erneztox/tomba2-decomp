// FUN_000328bc

/* WARNING: Control flow encountered bad instruction data */

void FUN_000328bc(void)

{
  short sVar1;
  short extraout_var;
  short extraout_var_00;
  int iVar2;
  short *psVar3;
  short *unaff_s2;
  int iVar4;
  short sVar5;
  int unaff_s5;
  
  *(undefined1 *)(unaff_s5 + 4) = 1;
  *(int *)(unaff_s5 + 0x34) = *(int *)(unaff_s5 + 0x38);
  if (*(int *)(unaff_s5 + 0x38) == 0) {
    *(undefined1 *)(unaff_s5 + 4) = 3;
  }
  else {
    sVar5 = *(short *)(unaff_s5 + 0x4c);
    iVar4 = 0;
    psVar3 = unaff_s2 + 3;
    do {
      iVar2 = (int)sVar5;
      func_0x00083f50(iVar2);
      sVar5 = sVar5 + 0x249;
      *unaff_s2 = *unaff_s2 + extraout_var;
      func_0x00083e80(iVar2);
      iVar4 = iVar4 + 1;
      unaff_s2 = unaff_s2 + 4;
      sVar1 = *psVar3;
      psVar3[-1] = psVar3[-1] + extraout_var_00;
      *psVar3 = sVar1 + 4;
      psVar3[-2] = psVar3[-2] + sVar1;
      psVar3 = psVar3 + 4;
    } while (iVar4 * 0x10000 >> 0x10 < 7);
    iVar4 = thunk_EXT_FUN_00134338();
    if (iVar4 != 0) {
      return;
    }
    FUN_00031780();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

