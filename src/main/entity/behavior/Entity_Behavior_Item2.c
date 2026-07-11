/**
 * @brief Entity item behavior variant 2: entity->state=1, pickup
 * @note Original: func_8004BB38 at 0x8004BB38
 */
// Entity_Behavior_Item2



#include "tomba.h"
void FUN_8004bb38(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (param_1->sub_type == '\0') {
      if (param_1->flag_5E == '\0') {
        if (param_1->behavior_state == '\0') {
          *param_1 = 3;
          param_1->gte_input = 0xffb0;
          param_1->behavior_state = 1;
          *(undefined2 *)(param_1 + 0x8a) = 0x14;
          *(undefined2 *)(param_1 + 0x8c) = 0;
        }
        else if (param_1->behavior_state != '\x01') {
          return;
        }
        FUN_80051614(param_1,param_1 + 0x88,0,0);
        cVar2 = DAT_800e7e81;
        param_1->flags = DAT_800e7e81;
        if (cVar2 != '\0') {
          FUN_80077efc(param_1);
        }
      }
      else if (param_1->flag_5E == '\x01') {
        FUN_8004b788(param_1);
      }
    }
  }
  else if (bVar1 < 2) {
    if ((bVar1 == 0) && (param_1->state = 1, param_1->sub_type == '\0')) {
      if (param_1->draw_y == 0) {
        uVar4 = 0;
      }
      else if (param_1->draw_y == 1) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0x17;
      }
      iVar3 = FUN_80051b70(param_1,1,uVar4);
      if (iVar3 == 0) {
        param_1->bounds_min_x = 0x46;
        param_1->bounds_size = 0x8c;
        param_1->bounds_min_y = 100;
        param_1->bounds_max_y = 100;
        param_1->rot_x = 0;
        param_1->rot_y = 0;
        param_1->rot_z = 0;
        param_1->collision_state = 0;
      }
    }
  }
  else if (bVar1 == 2) {
    if (param_1->sub_type == '\0') {
      FUN_8004b9c8(param_1);
    }
  }
  else if (bVar1 == 3) {
    FUN_8007a624(param_1);
  }
  return;
}
