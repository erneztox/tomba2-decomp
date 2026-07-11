/**
 * @brief Entity action state machine: switch on entity->behavior_state, 6 states
 * @note Original: func_80067CA4 at 0x80067CA4
 */
// Entity_ActionStateMachine



#include "tomba.h"
#include "overlay.h"
void Entity_ActionStateMachine(int param_1)

{
  switch(param_1->behavior_state) {
  case 0:
    Entity_State_Walk(param_1);
    goto LAB_80067d10;
  case 1:
    Entity_State_Death(param_1);
    break;
  case 2:
    Entity_State_Throw(param_1);
LAB_80067d10:
    Entity_StateEnd3(param_1,0);
    break;
  case 3:
    Entity_State_Fight(param_1);
    goto LAB_80067d80;
  case 4:
    Entity_State_Attack4(param_1);
    break;
  case 5:
    Entity_Behavior_Death(param_1);
    break;
  case 6:
    if (g_GameState == '\x05') {
      Overlay_801105fc(param_1);
    }
    else {
      Overlay_8010b938(param_1);
    }
LAB_80067d80:
    Entity_StateEnd3(param_1,1);
    break;
  case 7:
    Entity_State_Throw2(param_1);
  }
  return;
}
