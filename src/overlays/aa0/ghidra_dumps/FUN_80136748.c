// FUN_80136748

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801365c4(int param_1,int param_2)

{
  int in_v0;
  int iVar1;
  int in_v1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_s4;
  int unaff_s7;
  int iVar5;
  int unaff_s8;
  int iStack00000010;
  
  iVar2 = param_1;
  iVar5 = unaff_s7;
  if (param_2 < unaff_s7) {
    iVar2 = in_v0;
    in_v0 = param_1;
    iVar5 = param_2;
    param_2 = unaff_s7;
  }
  iVar3 = iVar5 - unaff_s8;
  iVar4 = param_2 - unaff_s8;
  if (iVar5 == unaff_s8) {
    if (iVar2 <= in_v1) {
      iStack00000010 = 0;
      FUN_8013f608();
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = (iVar2 - in_v1) * 0x10000;
  iStack00000010 = iVar1 / iVar3;
  if (iVar3 == 0) {
    trap(0x1c00);
  }
  if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  if (iVar5 != param_2) {
    if (param_2 == iVar5) {
      trap(0x1c00);
    }
    if ((param_2 - iVar5 == -1) && ((in_v0 - iVar2 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && ((in_v0 - in_v1 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (-iVar4 * (iVar2 - in_v1) + (in_v0 - in_v1) * iVar3 < 1) {
      for (; unaff_s8 < iVar5; unaff_s8 = unaff_s8 + 1) {
        if ((-1 < unaff_s8) && (unaff_s8 < *(short *)(unaff_s4 + 10))) {
          FUN_8013f988();
          return;
        }
      }
      for (; unaff_s8 <= param_2; unaff_s8 = unaff_s8 + 1) {
        if ((-1 < unaff_s8) && (unaff_s8 < *(short *)(unaff_s4 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      for (; unaff_s8 < iVar5; unaff_s8 = unaff_s8 + 1) {
        if ((-1 < unaff_s8) && (unaff_s8 < *(short *)(unaff_s4 + 10))) {
          FUN_8013f788();
          return;
        }
      }
      if (unaff_s8 <= param_2) {
        while ((unaff_s8 < 0 || (*(short *)(unaff_s4 + 10) <= unaff_s8))) {
          unaff_s8 = unaff_s8 + 1;
          if (param_2 < unaff_s8) {
            FUN_8013fab0();
            return;
          }
        }
        FUN_8013f880();
        return;
      }
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

