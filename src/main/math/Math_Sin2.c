/**
 * @brief Math sin variant 2: different table lookup path
 * @note Original: func_800851F0 at 0x800851F0
 */
// Math_Sin2



#include "tomba.h"
s16 * Math_Sin2(s16 *param_1,s16 *param_2)

{
  int iVar1;
  int iVar2;
  s16 sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (uint)*param_1;
  if ((int)uVar4 < 0) {
    iVar6 = *(int *)(&DAT_800a6490 + (-uVar4 & 0xfff) * 4);
    iVar5 = -(int)(s16)iVar6;
  }
  else {
    iVar6 = *(int *)(&DAT_800a6490 + (uVar4 & 0xfff) * 4);
    iVar5 = (int)(s16)iVar6;
  }
  iVar6 = iVar6 >> 0x10;
  uVar4 = (uint)param_1->flags;
  if ((int)uVar4 < 0) {
    iVar7 = *(int *)(&DAT_800a6490 + (-uVar4 & 0xfff) * 4);
    iVar1 = -(int)(s16)iVar7;
  }
  else {
    iVar7 = *(int *)(&DAT_800a6490 + (uVar4 & 0xfff) * 4);
    iVar1 = (int)(s16)iVar7;
  }
  iVar7 = iVar7 >> 0x10;
  uVar4 = (uint)param_1->kind;
  param_2->sub_action = (s16)iVar5;
  param_2->action_state = (s16)(-(iVar6 * iVar1) >> 0xc);
  sVar3 = (s16)(iVar6 * iVar7 >> 0xc);
  if ((int)uVar4 < 0) {
    param_2->counter1 = sVar3;
    iVar8 = *(int *)(&DAT_800a6490 + (-uVar4 & 0xfff) * 4);
    iVar2 = -(int)(s16)iVar8;
  }
  else {
    param_2->counter1 = sVar3;
    iVar8 = *(int *)(&DAT_800a6490 + (uVar4 & 0xfff) * 4);
    iVar2 = (int)(s16)iVar8;
  }
  iVar8 = iVar8 >> 0x10;
  param_2->state = (s16)(iVar8 * iVar6 >> 0xc);
  param_2->flags = (s16)(-(iVar2 * iVar6) >> 0xc);
  iVar6 = iVar5 * iVar1 >> 0xc;
  *param_2 = (s16)(iVar8 * iVar7 >> 0xc) - (s16)(iVar6 * iVar2 >> 0xc);
  param_2->sub_type = (s16)(iVar2 * iVar7 >> 0xc) + (s16)(iVar6 * iVar8 >> 0xc);
  iVar5 = iVar5 * iVar7 >> 0xc;
  param_2->kind = (s16)(iVar8 * iVar1 >> 0xc) + (s16)(iVar5 * iVar2 >> 0xc);
  param_2->behavior_state = (s16)(iVar2 * iVar1 >> 0xc) - (s16)(iVar5 * iVar8 >> 0xc);
  return param_2;
}
