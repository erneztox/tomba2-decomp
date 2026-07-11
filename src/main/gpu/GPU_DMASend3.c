/**
 * @brief GPU DMA send variant 3: different queue management
 * @note Original: func_80082970 at 0x80082970
 */
// GPU_DMASend3



#include "tomba.h"
undefined4 FUN_80082970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  FUN_800834a0();
  if (*(short *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_1 + 1);
    if (DAT_800a59a4 < *(short *)(param_1 + 1)) {
      sVar5 = DAT_800a59a4;
    }
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(short *)(param_1 + 1) = sVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = DAT_800a59a6;
    if (*(short *)((int)param_1 + 6) <= DAT_800a59a6) goto LAB_80082a10;
  }
  sVar6 = sVar5;
LAB_80082a10:
  *(short *)((int)param_1 + 6) = sVar6;
  iVar4 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar7 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = iVar4 / 2 + iVar7 * -0x10;
    uVar2 = *DAT_800a5aa8;
    while ((uVar2 & 0x4000000) == 0) {
      iVar3 = FUN_800834d4();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *DAT_800a5aa8;
    }
    *DAT_800a5aa8 = 0x4000000;
    *DAT_800a5aa4 = 0x1000000;
    *DAT_800a5aa4 = 0xc0000000;
    *DAT_800a5aa4 = *param_1;
    *DAT_800a5aa4 = param_1->flags;
    uVar2 = *DAT_800a5aa8;
    while ((uVar2 & 0x8000000) == 0) {
      iVar3 = FUN_800834d4();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *DAT_800a5aa8;
    }
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      *param_2 = *DAT_800a5aa4;
      param_2 = param_2 + 1;
    }
    if (iVar7 != 0) {
      *DAT_800a5aa8 = 0x4000003;
      *DAT_800a5aac = (int)param_2;
      *DAT_800a5ab0 = iVar7 << 0x10 | 0x10;
      *DAT_800a5ab4 = 0x1000200;
    }
    uVar1 = 0;
  }
  return uVar1;
}
