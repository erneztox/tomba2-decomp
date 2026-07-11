/**
 * @brief Entity config initializer: switch on entity->kind type
 * @note Original: func_8006ACAC at 0x8006ACAC
 */
// Entity_InitConfig



#include "tomba.h"
void Entity_InitConfig(int param_1)

{
  s16 uVar1;
  
  switch(param_1->kind) {
  case 1:
    Entity_InitSpriteConfig(param_1);
    param_1->bounds_size = 100;
    param_1->bounds_max_y = 100;
    param_1->bounds_min_x = 0x32;
    param_1->bounds_min_y = 0x32;
    param_1->counter1 = 0xf6;
    goto switchD_8006acf0_caseD_a;
  case 2:
  case 3:
    Entity_InitFromTable(param_1,param_1->kind);
    param_1->render_flags = 1;
    break;
  case 4:
  case 5:
  case 6:
    Entity_InitFromTable(param_1,param_1->kind);
    param_1->render_flags = 0;
    break;
  case 7:
  case 8:
  case 9:
    Entity_InitFromTable(param_1,param_1->kind);
    param_1->bounds_min_x = 100;
    param_1->bounds_size = 200;
    param_1->bounds_min_y = 0x5a;
    uVar1 = 0x82;
    param_1->render_flags = 0;
    goto LAB_8006ada8;
  default:
    goto switchD_8006acf0_caseD_a;
  case 0xb:
    Entity_InitSpriteConfig2(param_1);
  }
  uVar1 = 100;
  param_1->bounds_min_x = 0x32;
  param_1->bounds_size = 100;
  param_1->bounds_min_y = 0x32;
LAB_8006ada8:
  param_1->bounds_max_y = uVar1;
switchD_8006acf0_caseD_a:
  param_1->event_id = 0;
  param_1->collision_state = 0;
  param_1->rot_x = 0;
  param_1->rot_z = 0;
  if (param_1->kind == '\x06') {
    uVar1 = 0x1800;
  }
  else {
    uVar1 = 0x1000;
  }
  param_1->scale_x = uVar1;
  param_1->scale_y = uVar1;
  param_1->scale_z = uVar1;
  param_1->flags = 1;
  param_1->move_mode = 0;
  param_1->anim_counter = 0;
  param_1->flag_5E = 0;
  if (DAT_800e7e82 == '\0') {
    Entity_PhysicsInit(param_1,0,1);
  }
  return;
}
