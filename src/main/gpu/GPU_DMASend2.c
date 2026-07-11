/**
 * @brief GPU DMA send variant 2: checks prim count, sends via DMA
 * @note Original: func_80082734 at 0x80082734
 */
// GPU_DMASend2



/* WARNING: Removing unreachable block (ram,0x800828a0) */

#include "tomba.h"
s32 GPU_DMASend2(s32 *param_1,s32 *param_2)

{
  s32 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  s16 sVar5;
  s16 sVar6;
  int iVar7;
  
  GPU_CheckDMA();
  if (*(s16 *)(param_1 + 1) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(s16 *)(param_1 + 1);
    if (DAT_800a59a4 < *(s16 *)(param_1 + 1)) {
      sVar5 = DAT_800a59a4;
    }
  }
  sVar6 = *(s16 *)((int)param_1 + 6);
  *(s16 *)(param_1 + 1) = sVar5;
  if (*(s16 *)((int)param_1 + 6) < 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = DAT_800a59a6;
    if (*(s16 *)((int)param_1 + 6) <= DAT_800a59a6) goto LAB_800827dc;
  }
  sVar6 = sVar5;
LAB_800827dc:
  *(s16 *)((int)param_1 + 6) = sVar6;
  iVar4 = (int)*(s16 *)(param_1 + 1) * (int)sVar6 + 1;
  iVar7 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (iVar4 / 2 < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = iVar4 / 2 + iVar7 * -0x10;
    uVar2 = *DAT_800a5aa8;
    while ((uVar2 & 0x4000000) == 0) {
      iVar3 = GPU_CheckTimeout();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      uVar2 = *DAT_800a5aa8;
    }
    *DAT_800a5aa8 = 0x4000000;
    *DAT_800a5aa4 = 0x1000000;
    *DAT_800a5aa4 = 0xa0000000;
    *DAT_800a5aa4 = *param_1;
    *DAT_800a5aa4 = param_1->flags;
    while (iVar4 = iVar4 + -1, iVar4 != -1) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *DAT_800a5aa4 = uVar1;
    }
    if (iVar7 != 0) {
      *DAT_800a5aa8 = 0x4000002;
      *DAT_800a5aac = (int)param_2;
      *DAT_800a5ab0 = iVar7 << 0x10 | 0x10;
      *DAT_800a5ab4 = 0x1000201;
    }
    uVar1 = 0;
  }
  return uVar1;
}
