/**
 * @brief Math atan2 variant 2: uses table at 0x800A6490 for negative inputs
 * @note Original: func_80084EB0 at 0x80084EB0
 */
// Math_Atan2_2



#include "tomba.h"
short * FUN_80084eb0(uint param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  if ((int)param_1 < 0) {
    iVar5 = *(int *)(&DAT_800a6490 + (-param_1 & 0xfff) * 4);
    iVar4 = (int)(short)iVar5;
  }
  else {
    iVar5 = *(int *)(&DAT_800a6490 + (param_1 & 0xfff) * 4);
    iVar4 = -(int)(short)iVar5;
  }
  iVar5 = iVar5 >> 0x10;
  sVar1 = *param_2;
  sVar2 = param_2->flags;
  sVar3 = param_2->kind;
  *param_2 = (short)(iVar5 * sVar1 - iVar4 param_2->action_state >> 0xc);
  param_2->flags = (short)(iVar5 * sVar2 - iVar4 param_2->sub_action >> 0xc);
  param_2->kind = (short)(iVar5 * sVar3 - iVar4 param_2->counter1 >> 0xc);
  param_2->action_state = (short)(iVar4 * sVar1 + iVar5 param_2->action_state >> 0xc);
  param_2->sub_action = (short)(iVar4 * sVar2 + iVar5 param_2->sub_action >> 0xc);
  param_2->counter1 = (short)(iVar4 * sVar3 + iVar5 param_2->counter1 >> 0xc);
  return param_2;
}
