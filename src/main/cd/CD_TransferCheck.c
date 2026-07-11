/**
 * @brief CD transfer checker: validates DAT_800ac594, checks DMA
 * @note Original: func_800977C0 at 0x800977C0
 */
// CD_TransferCheck



#include "tomba.h"
uint CD_TransferCheck(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = 0;
  if (DAT_800ac59c == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0x10000 - DAT_800ac5a0 << (DAT_800ac62c & 0x1f);
  }
  if ((param_1 & ~DAT_800ac634) != 0) {
    param_1 = param_1 + DAT_800ac634;
  }
  uVar7 = ((int)param_1 >> (DAT_800ac62c & 0x1f)) << (DAT_800ac62c & 0x1f);
  if ((*DAT_800ac66c & 0x40000000) == 0) {
    CD_DMAProcess();
    puVar3 = DAT_800ac66c;
    iVar8 = -1;
    if (0 < DAT_800ac664) {
      do {
        iVar8 = iVar6;
        if (((*puVar3 & 0x40000000) != 0) || (((*puVar3 & 0x80000000) != 0 && (uVar7 <= puVar3->flags)))
           ) break;
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 2;
        iVar8 = -1;
      } while (iVar6 < DAT_800ac664);
    }
  }
  else {
    iVar8 = 0;
  }
  uVar1 = 0xffffffff;
  if (iVar8 != -1) {
    puVar3 = DAT_800ac66c + iVar8 * 2;
    if ((*puVar3 & 0x40000000) == 0) {
      uVar1 = puVar3->flags;
      if ((uVar7 < uVar1) && (DAT_800ac668 < DAT_800ac664)) {
        puVar2 = DAT_800ac66c + DAT_800ac668 * 2;
        uVar5 = *puVar2;
        uVar4 = puVar2->flags;
        *puVar2 = *puVar3 + uVar7 | 0x80000000;
        puVar2->flags = uVar1 - uVar7;
        DAT_800ac668 = DAT_800ac668 + 1;
        puVar2->kind = uVar5;
        puVar2->sub_type = uVar4;
      }
      puVar3 = DAT_800ac66c + iVar8 * 2;
      puVar3->flags = uVar7;
      *puVar3 = *puVar3 & 0xfffffff;
      CD_DMAProcess();
      uVar1 = DAT_800ac66c[iVar8 * 2];
    }
    else {
      uVar1 = 0xffffffff;
      if ((iVar8 < DAT_800ac664) && (uVar1 = 0xffffffff, uVar7 <= puVar3->flags - iVar9)) {
        DAT_800ac668 = iVar8 + 1;
        puVar2 = DAT_800ac66c + DAT_800ac668 * 2;
        *puVar2 = (*puVar3 & 0xfffffff) + uVar7 | 0x40000000;
        puVar2->flags = puVar3->flags - uVar7;
        puVar3->flags = uVar7;
        *puVar3 = *puVar3 & 0xfffffff;
        CD_DMAProcess();
        uVar1 = DAT_800ac66c[iVar8 * 2];
      }
    }
  }
  return uVar1;
}
