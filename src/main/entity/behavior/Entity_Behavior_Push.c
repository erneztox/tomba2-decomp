/**
 * @brief Entity push behavior: entity->action_state switch, push reaction
 * @note Original: func_80073328 at 0x80073328
 */
// Entity_Behavior_Push



#include "tomba.h"
s32 Entity_Behavior_Push(u8 *param_1)

{
  int iVar1;
  
  switchparam_1->action_state {
  case 0:
    if (((param_1->collision_state == '\0') || (DAT_800e7ea9 == '\0')) || (DAT_800e7ffb != '\0')) {
      if (g_HurtState != '\x05') {
        return 0;
      }
      if (g_HurtParam != param_1->sub_type) {
        return 0;
      }
      param_1->action_state = param_1->action_state + '\x01';
      Entity_EnterHurtState1();
      return 0;
    }
    param_1->action_state = param_1->action_state + '\x01';
    Entity_EnterHurtState1();
    goto LAB_800734fc;
  case 1:
    iVar1 = Entity_AdvanceAnim2(param_1);
    if ((iVar1 != 0) && (g_ActionFlag != '\0')) {
      param_1->action_state = param_1->action_state + '\x01';
      Entity_CalcAngleDelta();
      return 0;
    }
    break;
  case 2:
    if (g_HurtState != '\x02') {
      return 0;
    }
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    *param_1 = 1;
    param_1->action_state = param_1->action_state + '\x01';
    param_1->input_flags = '\x01' - param_1->input_flags;
    param_1->bounds_min_y = param_1->bounds_min_y + 800;
    param_1->bounds_max_y = param_1->bounds_max_y + 800;
    break;
  case 3:
    if (((param_1->collision_state == '\0') || (DAT_800e7ea9 == '\0')) || (DAT_800e7ffb != '\0')) {
      if (g_HurtState != '\x06') {
        return 0;
      }
      if (DAT_800bf80f != '\0') {
        return 0;
      }
      param_1->action_state = param_1->action_state + '\x01';
      Entity_EnterHurtState3();
      return 0;
    }
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    param_1->action_state = param_1->action_state + '\x01';
    Entity_EnterHurtState3();
LAB_800734fc:
    if (g_CurrentOverlay != '\0') {
      return 0;
    }
    g_CurrentOverlay = '\x02';
    break;
  case 4:
    if (g_HurtState != '\x04') {
      return 0;
    }
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    param_1->action_state = param_1->action_state + '\x01';
    g_HurtState = '\0';
    break;
  case 5:
    iVar1 = Entity_RotateLimb(param_1);
    if (iVar1 != 0) {
      *param_1 = 1;
      param_1->action_state = 0;
      param_1->input_flags = '\x01' - param_1->input_flags;
      param_1->bounds_min_y = param_1->bounds_min_y + -800;
      param_1->bounds_max_y = param_1->bounds_max_y + -800;
      return 1;
    }
  }
  return 0;
}
