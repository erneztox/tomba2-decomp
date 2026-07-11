/**
 * @brief Entity collectible behavior variant: entity[0x5C] timer state machine
 * @note Original: func_8004BEF4 at 0x8004BEF4
 */
// Entity_Behavior_Collectible2



#include "tomba.h"
void FUN_8004bef4(int param_1)

{
  int iVar1;
  s32 uVar2;
  
  if (param_1->draw_y == 0) {
    uVar2 = 0;
  }
  else if (param_1->draw_y == 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0x17;
  }
  iVar1 = FUN_80051b70(param_1,1,uVar2);
  if (iVar1 == 0) {
    param_1->bounds_min_x = 0x46;
    param_1->bounds_size = 0x8c;
    param_1->bounds_min_y = 100;
    param_1->bounds_max_y = 100;
    param_1->rot_x = 0;
    param_1->rot_y = 0;
    param_1->rot_z = 0;
    param_1->collision_state = 0;
  }
  return;
}
