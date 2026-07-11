/**
 * @brief Entity shoot state: spawns projectile, plays SFX, sets timer
 * @note Original: func_800674F4 at 0x800674F4
 */
// Entity_State_Shoot



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800674f4(int param_1)

{
  short sVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  undefined1 auStack_18->kind;
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  if (param_1->sub_action == '\0') {
    sVar1 = param_1->velocity_y;
    sVar3 = param_1->velocity_y + -0x400;
    param_1->velocity_y = sVar3;
    param_1->pos_y_fixed = param_1->pos_y_fixed + sVar1 * 0x100;
    if (-0x1400 < sVar3) {
      return;
    }
    cVar2 = param_1->sub_action + '\x01';
    goto LAB_80067618;
  }
  if (param_1->sub_action != '\x01') {
    return;
  }
  sVar1 = param_1->velocity_y;
  sVar3 = param_1->velocity_y + 0x400;
  param_1->velocity_y = sVar3;
  param_1->pos_y_fixed = param_1->pos_y_fixed + sVar1 * 0x100;
  if (sVar3 < 0x1400) {
    return;
  }
  local_16 = param_1->pos_y;
  local_12 = _DAT_1f80019e;
  local_e = param_1->pos_z;
  if (DAT_800bf870 == '\0') {
    FUN_8003116c(0x10d,auStack_18,0xfffffff6);
  }
  else {
    if (DAT_800bf870 == '\x06') {
      uVar4 = 0x704;
    }
    else if (DAT_800bf870 == '\b') {
      uVar4 = 0x909;
    }
    else {
      uVar4 = 0xf06;
      if (DAT_800bf870 != '\x0e') goto LAB_8006760c;
    }
    FUN_800312d4(uVar4,auStack_18,0xfffffff6);
  }
LAB_8006760c:
  cVar2 = param_1->sub_action + -1;
LAB_80067618:
  param_1->sub_action = cVar2;
  return;
}
