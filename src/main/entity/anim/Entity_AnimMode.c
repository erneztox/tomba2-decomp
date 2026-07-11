/**
 * @brief Entity animation mode setter: entity->sub_type state, sets entity[0x40] timer
 * @note Original: func_8003FE00 at 0x8003FE00
 */
// Entity_AnimMode



#include "tomba.h"
void Entity_AnimMode(int param_1,int param_2)

{
  u8 bVar1;
  
  bVar1 = param_1->sub_type;
  if (bVar1 == 1) {
    param_2 = 0x1e;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_2 = 0x1d;
    }
  }
  else if (bVar1 == 2) {
    param_2 = 0x1f;
  }
  else if (bVar1 == 3) {
    param_2 = 0x20;
  }
  param_1->state = 1;
  if ((&DAT_800bfab4)[param_2] == '\0') {
    param_1->behavior_state = 1;
    UI_DrawElement(0x2b,0x41);
  }
  else {
    param_1->behavior_state = 2;
  }
  if (param_1->flag_5E == '\x02') {
    *(u8 *)(param_1->parent + 0x5e) = 0;
  }
  return;
}
