/**
 * @brief Entity draw lifecycle variant 3: entity->state=1, different sprite path
 * @note Original: func_80033560 at 0x80033560
 */
// Entity_DrawLifecycle3



void FUN_80033560(int param_1)

{
  byte bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    param_1->flags = 1;
    param_1->collision_state = param_1->collision_state - 1U & 0x1f;
    if (DAT_800e7ff9 == '\0') {
      param_1->state = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->state = 1;
      param_1->sub_action = 0;
      param_1->collision_state = 0;
    }
  }
  else if (bVar1 == 2) {
    if (param_1->sub_action < '\0') {
      param_1->state = 3;
    }
    else {
      param_1->flags = 1;
      param_1->sub_action = param_1->sub_action + '\f';
    }
  }
  else if (bVar1 == 3) {
    FUN_8007a624();
  }
  return;
}
