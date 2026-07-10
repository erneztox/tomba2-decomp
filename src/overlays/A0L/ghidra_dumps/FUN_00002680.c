// FUN_00002680

/* WARNING: Control flow encountered bad instruction data */

void FUN_00002680(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar6 = param_2[1];
  iVar11 = param_3[1];
  iVar12 = param_4[1];
  if ((iVar11 != iVar6) || (iVar11 != iVar12)) {
    iVar3 = *param_2;
    iVar8 = *param_3;
    iVar7 = iVar6;
    if (iVar11 < iVar6) {
      iVar3 = *param_3;
      iVar8 = *param_2;
      iVar7 = iVar11;
      iVar11 = iVar6;
    }
    iVar4 = iVar3;
    iVar6 = iVar7;
    iVar9 = *param_4;
    if (iVar12 < iVar7) {
      iVar4 = *param_4;
      iVar6 = iVar12;
      iVar9 = iVar3;
      iVar12 = iVar7;
    }
    iVar3 = iVar8;
    iVar7 = iVar11;
    if (iVar12 < iVar11) {
      iVar3 = iVar9;
      iVar9 = iVar8;
      iVar7 = iVar12;
      iVar12 = iVar11;
    }
    iVar11 = iVar7 - iVar6;
    iVar8 = iVar12 - iVar6;
    if (iVar7 == iVar6) {
      if (iVar3 <= iVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar10 = iVar4 * 0x10000;
    iVar1 = (iVar3 - iVar4) * 0x10000;
    iVar13 = iVar1 / iVar11;
    if (iVar11 == 0) {
      trap(0x1c00);
    }
    if ((iVar11 == -1) && (iVar1 == -0x80000000)) {
      trap(0x1800);
    }
    iVar1 = iVar10 + 0x10000;
    if (iVar7 == iVar12) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = (iVar9 - iVar3) * 0x10000;
    iVar5 = iVar12 - iVar7;
    iVar14 = iVar2 / iVar5;
    if (iVar5 == 0) {
      trap(0x1c00);
    }
    if ((iVar5 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = (iVar9 - iVar4) * 0x10000;
    iVar5 = iVar2 / iVar8;
    if (iVar8 == 0) {
      trap(0x1c00);
    }
    if ((iVar8 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    if (-iVar8 * (iVar3 - iVar4) + (iVar9 - iVar4) * iVar11 < 1) {
      if (iVar6 < iVar7) {
        do {
          func_0x0010b4ec(param_1,iVar6,iVar10 >> 0x10,iVar1 >> 0x10);
          iVar1 = iVar1 + iVar13;
          iVar6 = iVar6 + 1;
          iVar10 = iVar10 + iVar5;
        } while (iVar6 < iVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      for (; iVar6 <= iVar12; iVar6 = iVar6 + 1) {
        func_0x0010b4ec(param_1,iVar6,iVar10 >> 0x10,iVar1 >> 0x10);
        iVar10 = iVar10 + iVar5;
        iVar1 = iVar1 + iVar14;
      }
    }
    else {
      for (; iVar6 < iVar7; iVar6 = iVar6 + 1) {
        func_0x0010b4ec(param_1,iVar6,iVar10 >> 0x10,iVar1 >> 0x10);
        iVar10 = iVar10 + iVar13;
        iVar1 = iVar1 + iVar5;
      }
      if (iVar6 <= iVar12) {
        do {
          func_0x0010b4ec(param_1,iVar6,iVar10 >> 0x10,iVar1 >> 0x10);
          iVar10 = iVar10 + iVar14;
          iVar6 = iVar6 + 1;
          iVar1 = iVar1 + iVar5;
        } while (iVar6 <= iVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

