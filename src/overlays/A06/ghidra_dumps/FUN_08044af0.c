// FUN_08044af0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08044af0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = param_2[1];
  iVar7 = param_3[1];
  iVar8 = param_4[1];
  if ((iVar7 != iVar3) || (iVar7 != iVar8)) {
    iVar1 = *param_2;
    iVar5 = *param_3;
    iVar4 = iVar3;
    if (iVar7 < iVar3) {
      iVar1 = *param_3;
      iVar5 = *param_2;
      iVar4 = iVar7;
      iVar7 = iVar3;
    }
    iVar2 = iVar1;
    iVar3 = iVar4;
    iVar6 = *param_4;
    if (iVar8 < iVar4) {
      iVar2 = *param_4;
      iVar3 = iVar8;
      iVar6 = iVar1;
      iVar8 = iVar4;
    }
    iVar1 = iVar5;
    iVar4 = iVar7;
    if (iVar8 < iVar7) {
      iVar1 = iVar6;
      iVar6 = iVar5;
      iVar4 = iVar8;
      iVar8 = iVar7;
    }
    iVar7 = iVar4 - iVar3;
    iVar5 = iVar8 - iVar3;
    if (iVar4 == iVar3) {
      if (iVar1 <= iVar2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar7 == 0) {
      trap(0x1c00);
    }
    if ((iVar7 == -1) && ((iVar1 - iVar2 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar4 == iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar8 == iVar4) {
      trap(0x1c00);
    }
    if ((iVar8 - iVar4 == -1) && ((iVar6 - iVar1 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && ((iVar6 - iVar2 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (-iVar5 * (iVar1 - iVar2) + (iVar6 - iVar2) * iVar7 < 1) {
      for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
        if ((-1 < iVar3) && (iVar3 < *(short *)(param_1 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      for (; iVar3 <= iVar8; iVar3 = iVar3 + 1) {
        if ((-1 < iVar3) && (iVar3 < *(short *)(param_1 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      for (; iVar3 < iVar4; iVar3 = iVar3 + 1) {
        if ((-1 < iVar3) && (iVar3 < *(short *)(param_1 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if (iVar3 <= iVar8) {
        while ((iVar3 < 0 || (*(short *)(param_1 + 10) <= iVar3))) {
          iVar3 = iVar3 + 1;
          if (iVar8 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

