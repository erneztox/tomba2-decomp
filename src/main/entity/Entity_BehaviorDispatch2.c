/**
 * @brief Entity behavior dispatch variant 2: sets entity->behavior_type type
 * @note Original: func_80053670 at 0x80053670
 */
// Entity_BehaviorDispatch2



#include "tomba.h"
void Entity_BehaviorDispatch2(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 8) {
    param_1->behavior_type = param_1->sprite_cmd;
  }
  iVar1 = Entity_GetState176(param_1);
  switch(param_1->behavior_type) {
  case 0:
  case 1:
  case 2:
  case 6:
  case 7:
  case 8:
    if (param_3 != 8) {
      Entity_SpawnBackground(param_1,param_2,param_3,iVar1);
    }
    if (param_2 == 0) {
      param_1->sub_state2 = 1;
      return;
    }
  default:
    param_1->sub_state2 = 0;
    break;
  case 3:
  case 4:
  case 5:
    param_1->sub_state2 = 0;
    if (param_3 != 8) {
      Entity_SpawnBackground(param_1,param_2,param_3,iVar1);
    }
    break;
  case 9:
    param_1->sub_state2 = 0;
    if (param_3 != 8) {
      Entity_SpawnBackground(param_1,param_2,param_3,iVar1 + 1);
    }
  }
  return;
}
