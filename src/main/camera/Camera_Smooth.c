/**
 * @brief Camera smoother: interpolates position with 0x80 step
 * @note Original: func_8006CC1C at 0x8006CC1C
 */
// Camera_Smooth



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006cc1c(int param_1,short *param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = ((int)*param_2 - (int)_DAT_1f8000d2) * 0x80;
  iVar2 = (int)param_3;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  iVar3 = ((int)param_2->flags - (int)_DAT_1f8000d6) * 0x80;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar3 == -0x80000000)) {
    trap(0x1800);
  }
  iVar1 = ((int)param_2->kind - (int)_DAT_1f8000da) * 0x80;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  *(short *)(param_1 + 0x78) = (short)(iVar4 / iVar2);
  *(short *)(param_1 + 0x7a) = (short)(iVar3 / iVar2);
  *(short *)(param_1 + 0x7c) = (short)(iVar1 / iVar2);
  iVar4 = ((int)param_2->sub_type - (int)*(short *)(param_1 + 0x3a)) * 0x80;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar4 == -0x80000000)) {
    trap(0x1800);
  }
  iVar3 = ((int)param_2->state - (int)*(short *)(param_1 + 0x3e)) * 0x80;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar3 == -0x80000000)) {
    trap(0x1800);
  }
  iVar1 = ((int)param_2->behavior_state - (int)param_1->timer2) * 0x80;
  if (iVar2 == 0) {
    trap(0x1c00);
  }
  if ((iVar2 == -1) && (iVar1 == -0x80000000)) {
    trap(0x1800);
  }
  param_1->bounds_min_y = param_3;
  *(short *)(param_1 + 0x7e) = (short)(iVar4 / iVar2);
  param_1->bounds_min_x = (short)(iVar3 / iVar2);
  param_1->bounds_size = (short)(iVar1 / iVar2);
  return;
}
