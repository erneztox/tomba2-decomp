/**
 * @brief Entity action state machine: switch on entity->behavior_state, 6 states
 * @note Original: func_80067CA4 at 0x80067CA4
 */
// Entity_ActionStateMachine



#include "tomba.h"
void FUN_80067ca4(int param_1)

{
  switch(param_1->behavior_state) {
  case 0:
    FUN_8006670c(param_1);
    goto LAB_80067d10;
  case 1:
    FUN_80066878(param_1);
    break;
  case 2:
    FUN_80066de8(param_1);
LAB_80067d10:
    FUN_80053fdc(param_1,0);
    break;
  case 3:
    FUN_80066fa8(param_1);
    goto LAB_80067d80;
  case 4:
    FUN_8006762c(param_1);
    break;
  case 5:
    FUN_800678e8(param_1);
    break;
  case 6:
    if (g_GameState == '\x05') {
      func_0x801105fc(param_1);
    }
    else {
      func_0x8010b938(param_1);
    }
LAB_80067d80:
    FUN_80053fdc(param_1,1);
    break;
  case 7:
    FUN_80067a40(param_1);
  }
  return;
}
