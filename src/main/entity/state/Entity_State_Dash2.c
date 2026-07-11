/**
 * @brief Entity dash state variant 2: checks entity[0x17E] flags
 * @note Original: func_80057150 at 0x80057150
 */
// Entity_State_Dash2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_State_Dash2(int param_1,int param_2)

{
  s16 sVar1;
  s16 uVar2;
  int iVar3;
  s32 uVar4;
  s32 uVar5;
  
  iVar3 = 0;
  if ((param_1->entity_flags & 0x40) == 0) {
LAB_80057208:
    iVar3 = 2;
  }
  else {
    if (param_1->anim_id == -0x35) {
      if ((*(u16 *)(param_1->anim_data + 6) & 0x8000) != 0) {
        Entity_LoadAnimIfChanged(param_1,0xca,4);
        iVar3 = 2;
        goto LAB_80057210;
      }
    }
    else {
      if (param_1->anim_id != -0x36) goto LAB_80057210;
      if ((_g_PadState & _g_InputMask) == 0) goto LAB_80057208;
      Entity_LoadAnimIfChanged(param_1,0xcb,4);
      Audio_PlaySoundEffect(0x35,0,0);
    }
    iVar3 = 1;
  }
LAB_80057210:
  if (iVar3 == 1) {
    return 0x300;
  }
  if (iVar3 != 2) {
    return 0xe00;
  }
  if ((param_1->state_flag146 != '\0') || (param_1->sub_state != '\0')) {
    param_2 = 8;
  }
  if (((param_1->behavior_flags & 2) == 0) &&
     ((param_1->behavior_flags & 1) == param_1->direction)) {
    uVar4 = 0x60;
    if (param_2 == 8) {
      return 0xe00;
    }
    sVar1 = param_1->rot_z;
    uVar5 = 0x10;
  }
  else {
    if ((param_1->behavior_flags & 8) != 0) {
      if (param_2 != 8) {
        uVar2 = Math_ApproachAngle_2(0xf00,(int)param_1->rot_z,0x20);
        param_1->rot_z = uVar2;
      }
      return 0x1a00;
    }
    uVar4 = 0;
    if (param_2 == 8) {
      return 0xe00;
    }
    sVar1 = param_1->rot_z;
    uVar5 = 0x40;
  }
  uVar2 = Math_ApproachAngle_2(uVar4,(int)sVar1,uVar5);
  param_1->rot_z = uVar2;
  return 0xe00;
}
