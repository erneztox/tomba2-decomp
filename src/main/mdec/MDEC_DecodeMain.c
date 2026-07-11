/**
 * @brief MDEC decode main: full decode pipeline controller
 * @note Original: func_800876A0 at 0x800876A0
 */
// MDEC_DecodeMain



#include "tomba.h"
int MDEC_DecodeMain(int param_1)

{
  u8 bVar1;
  int iVar2;
  u8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if (DAT_800abebc != 0) {
    (*DAT_800abe44)();
  }
  iVar2 = DAT_800abebc;
  iVar5 = -1;
  if (DAT_800abebc != 0) {
    iVar6 = -0xf0;
    do {
      DAT_800abeb0 = DAT_800abeb0 + -1;
      if (DAT_800abeb0 < 1) break;
      if (-1 < iVar5) {
        (*DAT_800abe44)(param_1->state + iVar6);
      }
      uVar3 = (*DAT_800abe40)(param_1,1);
      iVar4 = MDEC_DataRead(param_1,uVar3);
      if (iVar4 < 0) {
        return iVar4;
      }
      MDEC_SetParam(0x3c);
      iVar4 = MDEC_WaitDMA();
      iVar5 = iVar5 + 1;
      if (iVar4 == 0) {
        return -3;
      }
      iVar6 = iVar6 + 0xf0;
    } while (iVar5 < 4);
  }
  iVar5 = 0;
  if (1 < DAT_800abeb0) {
    piVar7 = (int *)(&DAT_800abe90 + (uint)(DAT_800abe78 == 0) * 4);
    iVar6 = (uint)(DAT_800abe78 == 0) * 0xf0;
    do {
      iVar4 = *piVar7;
      if (iVar4 < 0) break;
      if (0 < iVar4) {
        iVar5 = *(int *)(iVar6 + DAT_800abe6c + 0xc) + iVar4 * 0xf0 + -0xf0;
        (*DAT_800abe58)(iVar5);
      }
      iVar4 = *piVar7;
      if (iVar4 == 3) {
        (*DAT_800abe58)(iVar5 + -0xf0);
        iVar4 = 1;
LAB_800878b8:
        *piVar7 = iVar4;
      }
      else if (iVar4 < 4) {
        if ((iVar4 < 2) && (-1 < iVar4)) {
          iVar5 = DAT_800abe6c + iVar6;
          (*DAT_800abe58)(iVar5);
          (*DAT_800abe5c)(iVar5);
          iVar4 = -1;
          goto LAB_800878b8;
        }
      }
      else if (iVar4 == 4) {
        *piVar7 = 3;
      }
      uVar3 = (*DAT_800abe40)(param_1,iVar2);
      iVar4 = MDEC_DMAProcess(param_1,uVar3);
      if (iVar4 < 0) {
        return iVar4;
      }
      MDEC_SetParam(0x3c);
      iVar4 = MDEC_WaitDMA();
      if (iVar4 == 0) {
        return -3;
      }
      DAT_800abeb0 = DAT_800abeb0 + -1;
    } while (1 < DAT_800abeb0);
  }
  while( true ) {
    DAT_800abeb0 = DAT_800abeb0 + -1;
    if (DAT_800abeb0 < 1) {
      MDEC_WaitReady();
      bVar1 = param_1->state;
      param_1->state = bVar1 + 1;
      *(u8 *)((uint)bVar1 + param_1->state) = *DAT_800abeb4;
      (*DAT_800abe38)(0);
      return 0;
    }
    uVar3 = (*DAT_800abe40)(param_1,iVar2);
    iVar5 = MDEC_DMAProcess(param_1,uVar3);
    if (iVar5 < 0) break;
    if (DAT_800abeb4->state != 0x22) {
      MDEC_SetParam(0x3c);
      iVar5 = MDEC_WaitDMA();
      if (iVar5 == 0) {
        return -3;
      }
    }
  }
  return iVar5;
}
