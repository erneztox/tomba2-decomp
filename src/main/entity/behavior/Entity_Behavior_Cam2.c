/**
 * @brief Entity camera behavior variant 2: entity->state state machine
 * @note Original: func_8006C608 at 0x8006C608
 */
// Entity_Behavior_Cam2



#include "tomba.h"
void FUN_8006c608(u8 *param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (param_1->draw_x < 0xe) {
          param_1->draw_x = param_1->draw_x + 2;
          return;
        }
      }
      else if (bVar1 != 3) {
        return;
      }
      FUN_8007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_8006c59c(param_1);
  }
  param_1->flags = 1;
  if (param_1->move_mode == '\0') {
    sVar2 = param_1->timer2;
    if ((param_1->timer2 != 0) && (param_1->timer2 = sVar2 + -1, sVar2 == 1))
    {
      param_1->move_mode = 0;
    }
  }
  else {
    param_1->timer2 = 2;
  }
  sVar2 = param_1->timer1;
  param_1->timer1 = sVar2 + -1;
  if (sVar2 == 1) {
    *param_1 = 2;
    param_1->state = 2;
  }
  iVar3 = FUN_80083f50((int)param_1->rot_y);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar3 * param_1->anim_counter >> 4);
  iVar3 = FUN_80083e80((int)param_1->rot_y);
  param_1->scale_y = param_1->scale_y - (iVar3 * param_1->anim_counter >> 4);
  if (param_1->draw_x < 4) {
    param_1->draw_x = param_1->draw_x + 2;
  }
  param_1->draw_x = param_1->draw_x ^ 1;
  return;
}
