/**
 * @brief Math sin variant 2: different table lookup path
 * @note Original: func_800851F0 at 0x800851F0
 */
// Math_Sin2



#include "tomba.h"
short * FUN_800851f0(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (uint)*param_1;
  if ((int)uVar4 < 0) {
    iVar6 = *(int *)(&DAT_800a6490 + (-uVar4 & 0xfff) * 4);
    iVar5 = -(int)(short)iVar6;
  }
  else {
    iVar6 = *(int *)(&DAT_800a6490 + (uVar4 & 0xfff) * 4);
    iVar5 = (int)(short)iVar6;
  }
  iVar6 = iVar6 >> 0x10;
  uVar4 = (uint)param_1->flags;
  if ((int)uVar4 < 0) {
    iVar7 = *(int *)(&DAT_800a6490 + (-uVar4 & 0xfff) * 4);
    iVar1 = -(int)(short)iVar7;
  }
  else {
    iVar7 = *(int *)(&DAT_800a6490 + (uVar4 & 0xfff) * 4);
    iVar1 = (int)(short)iVar7;
  }
  iVar7 = iVar7 >> 0x10;
  uVar4 = (uint)param_1->kind;
  param_2->sub_action = (short)iVar5;
  param_2->action_state = (short)(-(iVar6 * iVar1) >> 0xc);
  sVar3 = (short)(iVar6 * iVar7 >> 0xc);
  if ((int)uVar4 < 0) {
    param_2->counter1 = sVar3;
    iVar8 = *(int *)(&DAT_800a6490 + (-uVar4 & 0xfff) * 4);
    iVar2 = -(int)(short)iVar8;
  }
  else {
    param_2->counter1 = sVar3;
    iVar8 = *(int *)(&DAT_800a6490 + (uVar4 & 0xfff) * 4);
    iVar2 = (int)(short)iVar8;
  }
  iVar8 = iVar8 >> 0x10;
  param_2->state = (short)(iVar8 * iVar6 >> 0xc);
  param_2->flags = (short)(-(iVar2 * iVar6) >> 0xc);
  iVar6 = iVar5 * iVar1 >> 0xc;
  *param_2 = (short)(iVar8 * iVar7 >> 0xc) - (short)(iVar6 * iVar2 >> 0xc);
  param_2->sub_type = (short)(iVar2 * iVar7 >> 0xc) + (short)(iVar6 * iVar8 >> 0xc);
  iVar5 = iVar5 * iVar7 >> 0xc;
  param_2->kind = (short)(iVar8 * iVar1 >> 0xc) + (short)(iVar5 * iVar2 >> 0xc);
  param_2->behavior_state = (short)(iVar2 * iVar1 >> 0xc) - (short)(iVar5 * iVar8 >> 0xc);
  return param_2;
}
