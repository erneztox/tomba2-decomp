/**
 * @brief Entity anim player variant 2: entity->sub_type switch, 6 animation modes
 * @note Original: func_8007156C at 0x8007156C
 */
// Entity_AnimPlay2



#include "tomba.h"
void Entity_AnimPlay2(int param_1)

{
  int iVar1;
  
  switch(param_1->sub_type) {
  case 0:
    if (param_1->sub_state2 == '\x01') {
      Entity_SetAnimModeIfNew(param_1,0,4);
    }
    break;
  default:
    goto switchD_800715a4_caseD_1;
  case 2:
    iVar1 = Entity_Behavior_Jump(param_1,0);
    if (iVar1 != 0) {
      param_1->sub_type = 3;
    }
    goto switchD_800715a4_caseD_1;
  case 3:
    iVar1 = Entity_PosUpdate(param_1,1);
    if (iVar1 != 0) {
      param_1->sub_type = 0;
    }
    goto switchD_800715a4_caseD_1;
  case 4:
    g_EventFlag = 3;
    if (param_1->action_state == '\0') {
      Entity_SetPosFromGlobals(param_1,0,0);
      param_1->action_state = param_1->action_state + '\x01';
      goto switchD_800715a4_caseD_1;
    }
    if (param_1->action_state != '\x01') goto switchD_800715a4_caseD_1;
    Entity_PosUpdate(param_1,0);
    break;
  case 5:
    iVar1 = Entity_PosUpdate(param_1,0);
    if (iVar1 == 0) {
      g_EventFlag = 3;
    }
    else {
      param_1->sub_type = 0;
    }
  }
  Entity_MoveInCircle(param_1);
switchD_800715a4_caseD_1:
  Entity_ScriptRun(param_1);
  Entity_SetAnimFlag79(param_1);
  return;
}
