// FUN_080413a0

void FUN_080413a0(int param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 uVar2;
  int iVar3;
  short *unaff_s0;
  short *psVar4;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s3;
  undefined4 *puVar5;
  int *unaff_s4;
  int *unaff_s5;
  int in_lo;
  
  do {
    *unaff_s4 = in_lo >> 9;
    iVar3 = func_0x00083e80(param_1);
    sVar1 = *unaff_s0;
    *unaff_s5 = *unaff_s4 + iVar3 * 2;
    iVar3 = func_0x00083f50((int)sVar1);
    *unaff_s4 = *unaff_s4 + iVar3 * 2;
    func_0x000328bc();
    uVar2 = extraout_at_00;
    puVar5 = unaff_s3;
    do {
      psVar4 = unaff_s0;
      unaff_s2 = unaff_s2 + 1;
      unaff_s0 = psVar4 + 4;
      unaff_s3 = puVar5 + 2;
      if (2 < unaff_s2) {
        return;
      }
      setCopReg(2,in_zero,*unaff_s3);
      setCopReg(2,uVar2,puVar5[3]);
      iVar3 = func_0x000317cc((int)*(short *)(unaff_s1 + 0x32));
      uVar2 = extraout_at;
      puVar5 = unaff_s3;
    } while (iVar3 != 0);
    in_lo = *unaff_s4 * (int)psVar4[-8];
    param_1 = (int)*unaff_s0;
  } while( true );
}

