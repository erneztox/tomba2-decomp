// SOP_RasterizerFill (SOP_RasterizerFill) - Triangle rasterizer: sorts 3 vertices by Y, fills horizontal scanline spans with bounds check

/* WARNING: Control flow encountered bad instruction data */

void SOP_RasterizerFill(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = param_2[1];
  iVar7 = param_3[1];
  iVar8 = param_4[1];
  if ((iVar7 != iVar4) || (iVar7 != iVar8)) {
    iVar1 = *param_2;
    iVar5 = iVar4;
    iVar3 = *param_3;
    if (iVar7 < iVar4) {
      iVar1 = *param_3;
      iVar5 = iVar7;
      iVar3 = *param_2;
      iVar7 = iVar4;
    }
    iVar2 = iVar1;
    iVar4 = iVar5;
    iVar6 = *param_4;
    if (iVar8 < iVar5) {
      iVar2 = *param_4;
      iVar4 = iVar8;
      iVar6 = iVar1;
      iVar8 = iVar5;
    }
    iVar1 = iVar3;
    iVar5 = iVar7;
    if (iVar8 < iVar7) {
      iVar1 = iVar6;
      iVar6 = iVar3;
      iVar5 = iVar8;
      iVar8 = iVar7;
    }
    iVar7 = iVar5 - iVar4;
    iVar3 = iVar8 - iVar4;
    if (iVar5 == iVar4) {
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
    if (iVar5 == iVar8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (iVar8 == iVar5) {
      trap(0x1c00);
    }
    if ((iVar8 - iVar5 == -1) && ((iVar6 - iVar1 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    if ((iVar3 == -1) && ((iVar6 - iVar2 & 0xffffU) == 0x8000)) {
      trap(0x1800);
    }
    if (-iVar3 * (iVar1 - iVar2) + (iVar6 - iVar2) * iVar7 < 1) {
      for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
        if ((-1 < iVar4) && (iVar4 < *(short *)(param_1 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      for (; iVar4 <= iVar8; iVar4 = iVar4 + 1) {
        if ((-1 < iVar4) && (iVar4 < *(short *)(param_1 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    else {
      for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
        if ((-1 < iVar4) && (iVar4 < *(short *)(param_1 + 10))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if (iVar4 <= iVar8) {
        while ((iVar4 < 0 || (*(short *)(param_1 + 10) <= iVar4))) {
          iVar4 = iVar4 + 1;
          if (iVar8 < iVar4) {
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

