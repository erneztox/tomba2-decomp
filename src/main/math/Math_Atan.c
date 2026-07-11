/**
 * @brief Math arctangent: uses lookup table, handles multiple quadrants
 * @note Original: func_80084A80 at 0x80084A80
 */
// Math_Atan



#include "tomba.h"
undefined2 * FUN_80084a80(short *param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar6 = (uint)*param_1;
  if ((int)uVar6 < 0) {
    iVar7 = *(int *)(&DAT_800a6490 + (-uVar6 & 0xfff) * 4);
    iVar1 = -(int)(short)iVar7;
  }
  else {
    iVar7 = *(int *)(&DAT_800a6490 + (uVar6 & 0xfff) * 4);
    iVar1 = (int)(short)iVar7;
  }
  iVar7 = iVar7 >> 0x10;
  uVar6 = (uint)param_1->flags;
  if ((int)uVar6 < 0) {
    iVar8 = *(int *)(&DAT_800a6490 + (-uVar6 & 0xfff) * 4);
    sVar4 = (short)iVar8;
    iVar2 = -(int)sVar4;
  }
  else {
    iVar8 = *(int *)(&DAT_800a6490 + (uVar6 & 0xfff) * 4);
    iVar2 = (int)(short)iVar8;
    sVar4 = -(short)iVar8;
  }
  iVar8 = iVar8 >> 0x10;
  uVar6 = (uint)param_1->kind;
  param_2->action_state = sVar4;
  param_2->sub_action = (short)(iVar1 * iVar8 >> 0xc);
  uVar5 = (undefined2)(iVar7 * iVar8 >> 0xc);
  if ((int)uVar6 < 0) {
    param_2->counter1 = uVar5;
    iVar9 = *(int *)(&DAT_800a6490 + (-uVar6 & 0xfff) * 4);
    iVar3 = -(int)(short)iVar9;
  }
  else {
    param_2->counter1 = uVar5;
    iVar9 = *(int *)(&DAT_800a6490 + (uVar6 & 0xfff) * 4);
    iVar3 = (int)(short)iVar9;
  }
  iVar9 = iVar9 >> 0x10;
  *param_2 = (short)(iVar8 * iVar9 >> 0xc);
  param_2->sub_type = (short)(iVar3 * iVar8 >> 0xc);
  iVar8 = iVar1 * iVar2 >> 0xc;
  param_2->flags = (short)(iVar8 * iVar9 >> 0xc) - (short)(iVar3 * iVar7 >> 0xc);
  param_2->state = (short)(iVar8 * iVar3 >> 0xc) + (short)(iVar7 * iVar9 >> 0xc);
  iVar7 = iVar2 * iVar7 >> 0xc;
  param_2->kind = (short)(iVar7 * iVar9 >> 0xc) + (short)(iVar1 * iVar3 >> 0xc);
  param_2->behavior_state = (short)(iVar7 * iVar3 >> 0xc) - (short)(iVar1 * iVar9 >> 0xc);
  return param_2;
}
