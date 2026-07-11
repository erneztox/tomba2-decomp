/**
 * @brief Entity physics step variant 3: different velocity handling
 * @note Original: func_80060A80 at 0x80060A80
 */
// Entity_PhysicsStep3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80060a80(int param_1,uint param_2)

{
  uint uVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  s16 sVar5;
  s16 sVar6;
  s16 sVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = (int)((param_1->sprite_x - 0x400) * 0x10000) >> 0x10;
  iVar3 = FUN_80083f50(iVar8);
  iVar9 = iVar3 * _DAT_1f80020c >> 0xc;
  iVar3 = FUN_80083e80(iVar8);
  uVar1 = iVar3 * _DAT_1f80020c;
  if ((int)param_2 < 2) {
    if (g_State237 == '\0') {
      iVar8 = (uint)param_1->draw_angle << 0x10;
    }
    else {
      iVar8 = (param_1->draw_angle + 0x800) * 0x10000;
    }
    iVar8 = iVar8 >> 0x10;
    iVar3 = FUN_80083f50(iVar8);
  }
  else {
    iVar3 = FUN_80083f50((int)_DAT_1f800178);
    iVar8 = (int)_DAT_1f800178;
  }
  iVar8 = FUN_80083e80(iVar8);
  if ((param_2 & 1) == 0) {
    iVar4 = param_1->data_ptr;
    sVar7 = param_1->pos_y - iVar4->pos_x;
    sVar6 = *(s16 *)(param_1 + 0x32) - *(s16 *)(iVar4 + 0x30);
    sVar5 = param_1->pos_z - *(s16 *)(iVar4 + 0x34);
  }
  else {
    sVar7 = param_1->pos_y - param_1->draw_pos_x;
    sVar6 = *(s16 *)(param_1 + 0x32) - param_1->draw_pos_y;
    sVar5 = param_1->pos_z - param_1->draw_pos_z;
  }
  sVar2 = _DAT_1f800202 - (s16)(uVar1 >> 0xc);
  param_1->pos_y = sVar7 + (_DAT_1f800200 - (s16)((uint)(iVar3 * iVar9) >> 0xc));
  sVar7 = _DAT_1f800204;
  *(s16 *)(param_1 + 0x32) = sVar6 + sVar2;
  param_1->pos_z = sVar5 + (sVar7 - (s16)((uint)-(iVar8 * iVar9) >> 0xc));
  if ((int)param_2 < 2) {
    FUN_80055d5c(param_1);
    FUN_800541f4(param_1,1);
    FUN_80054650(param_1,0);
    FUN_8005444c(param_1);
  }
  return;
}
