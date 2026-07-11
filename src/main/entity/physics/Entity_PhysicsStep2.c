/**
 * @brief Entity physics step variant 2: collision + slope calc + angle update
 * @note Original: func_80055D5C at 0x80055D5C
 */
// Entity_PhysicsStep2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80055d5c(int param_1)

{
  int iVar1;
  
  if (param_1->physics_flag == '\0') {
    FUN_8004766c(param_1);
    FUN_80049760(param_1);
    param_1->draw_angle = _DAT_1f8001a0;
    if (DAT_1f800137 != '\x01') {
      DAT_1f800207 = param_1->collision_dir;
    }
  }
  else {
    if (param_1->physics_flag == '\b') {
      param_1->draw_angle = _DAT_1f800210;
    }
    else {
      param_1->draw_angle = _DAT_1f80018c;
    }
    iVar1 = FUN_80083f50((int)param_1->draw_angle);
    param_1->normal_x = (short)(iVar1 >> 4);
    iVar1 = FUN_80083e80((int)param_1->draw_angle);
    param_1->normal_z = -(short)(iVar1 >> 4);
    if (param_1->collision_state != '\0') {
      param_1->velocity_y = 0;
    }
  }
  return;
}
