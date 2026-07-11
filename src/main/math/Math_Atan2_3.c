/**
 * @brief Math atan2 variant 3: uses table at 0x800A6490, different quadrant handling
 * @note Original: func_80084D10 at 0x80084D10
 */
// Math_Atan2_3



#include "tomba.h"
int Math_Atan2_3(uint param_1,int param_2)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1 < 0) {
    iVar5 = *(int *)(&DAT_800a6490 + (-param_1 & 0xfff) * 4);
    iVar4 = -(int)(s16)iVar5;
  }
  else {
    iVar5 = *(int *)(&DAT_800a6490 + (param_1 & 0xfff) * 4);
    iVar4 = (int)(s16)iVar5;
  }
  iVar5 = iVar5 >> 0x10;
  sVar1 = *(s16 *)(param_2 + 6);
  sVar2 = *(s16 *)(param_2 + 8);
  sVar3 = *(s16 *)(param_2 + 10);
  *(s16 *)(param_2 + 6) = (s16)(iVar5 * sVar1 - iVar4 * *(s16 *)(param_2 + 0xc) >> 0xc);
  *(s16 *)(param_2 + 8) = (s16)(iVar5 * sVar2 - iVar4 * param_2->anim_timer >> 0xc);
  *(s16 *)(param_2 + 10) = (s16)(iVar5 * sVar3 - iVar4 * *(s16 *)(param_2 + 0x10) >> 0xc);
  *(s16 *)(param_2 + 0xc) = (s16)(iVar4 * sVar1 + iVar5 * *(s16 *)(param_2 + 0xc) >> 0xc);
  param_2->anim_timer = (s16)(iVar4 * sVar2 + iVar5 * param_2->anim_timer >> 0xc);
  *(s16 *)(param_2 + 0x10) = (s16)(iVar4 * sVar3 + iVar5 * *(s16 *)(param_2 + 0x10) >> 0xc);
  return param_2;
}
