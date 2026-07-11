/**
 * @brief Entity physics state: entity->collision_state=0, checks entity->direction dir, sets angle
 * @note Original: func_800551C4 at 0x800551C4
 */
// Entity_State_Physics



void FUN_800551c4(int param_1)

{
  if (param_1->collision_state == '\0') {
    if (param_1->direction != '\0') {
      param_1->rot_y = param_1->draw_angle - 0x800U & 0xfff;
      return;
    }
    param_1->rot_y = param_1->draw_angle;
  }
  else if (param_1->direction == '\0') {
    param_1->rot_y = param_1->draw_angle;
    if (param_1->state_flag145 == '\0') {
      param_1->rot_z = param_1->draw_scale >> 1;
      return;
    }
  }
  else {
    param_1->rot_y = param_1->draw_angle - 0x800U & 0xfff;
    if (param_1->state_flag145 == '\0') {
      param_1->rot_z = 0x1000U - (param_1->draw_scale >> 1) & 0xfff;
      return;
    }
  }
  return;
}
