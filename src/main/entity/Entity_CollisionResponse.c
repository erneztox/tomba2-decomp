/**
 * @brief Entity collision response: sets entity->collision_state, pushes
 * @note Original: func_80020868 at 0x80020868
 */
// Entity_CollisionResponse



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80020868(int param_1,int param_2)

{
  s16 sVar1;
  s16 sVar2;
  s16 sVar3;
  s8 cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  param_2->collision_state = 0;
  if ((g_ActionFlag != '\0') && (g_HurtParam != param_2->sub_type)) {
    return;
  }
  if (param_1->collision_dir != param_2->collision_dir) {
    return;
  }
  iVar5 = FUN_8001f9dc(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  if (param_2->input_flags == '\0') {
    iVar5 = (uint)param_1->draw_angle << 0x10;
  }
  else {
    iVar5 = (param_1->draw_angle + 0x800) * 0x10000;
  }
  iVar6 = FUN_80083f50(iVar5 >> 0x10);
  sVar1 = param_1->bounds_min_x;
  sVar2 = param_2->bounds_min_x;
  iVar5 = FUN_80083e80(iVar5 >> 0x10);
  sVar3 = param_2->bounds_min_x;
  iVar7 = (int)_g_AngleTarget;
  param_1->pos_y =
       (s16)(iVar6 * ((int)sVar1 + (int)sVar2) >> 0xc) +
       param_2->pos_y + param_2->draw_x;
  param_1->pos_z =
       (param_2->pos_z + *(s16 *)(param_2 + 100)) -
       (s16)(iVar5 * ((int)param_1->bounds_min_x + (int)sVar3) >> 0xc);
  cVar4 = FUN_80077768(iVar7,(int)param_1->draw_angle,1);
  param_1->input_flags = cVar4 + '\x02';
  if (param_2->input_flags == param_1->direction) {
    return;
  }
  if (g_State230 != '\0') {
    return;
  }
  if (DAT_800bf80f != '\0') {
    return;
  }
  if (g_SubState == '\0') {
    param_2->collision_state = 1;
    DAT_800bf81f = ('\x01' - param_2->input_flags) * '\x10';
    return;
  }
  switch(g_GameState) {
  case 1:
    cVar4 = param_1->collision_dir;
    if ((((cVar4 == 'I') || (cVar4 == '\x19')) || (cVar4 == '\x1a')) || (cVar4 == '\''))
    goto switchD_80020a0c_caseD_9;
    if (cVar4 != '+') {
      return;
    }
    break;
  default:
    goto switchD_80020a0c_caseD_2;
  case 5:
    if (param_1->collision_dir != '\b') {
      return;
    }
    if (param_1->pos_z < 0x2969) {
      return;
    }
    break;
  case 6:
    if (param_1->collision_dir != '\a') {
      return;
    }
    if (0x1ce7 < param_1->pos_y) {
      return;
    }
    break;
  case 8:
    if (param_1->collision_dir != '\x1f') {
      return;
    }
  case 9:
switchD_80020a0c_caseD_9:
  }
  param_2->collision_state = 1;
  DAT_800bf81f = ('\x01' - param_2->input_flags) * '\x10';
switchD_80020a0c_caseD_2:
  return;
}
