/**
 * @brief Entity hurt behavior: entity->state state 0->1->2, knockback
 * @note Original: func_8006BB6C at 0x8006BB6C
 */
// Entity_Behavior_Hurt



void FUN_8006bb6c(undefined1 *param_1)

{
  byte bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        param_1->flags = 0;
        param_1->state = param_1->state + '\x01';
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      if (*(short *)(param_1 + 0x6e) == 0) {
        DAT_1f800231 = DAT_1f800231 + -1;
      }
      FUN_8007ab44(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->input_flags = 0x40;
    FUN_8006acac(param_1);
    param_1->parent = 0;
    param_1->state = param_1->state + '\x01';
    param_1->target_angle = param_1->rot_y;
    param_1->rot_y = 0;
    param_1->type_flags = 0;
    *(undefined2 *)(param_1 + 0x66) = 1;
    *(undefined2 *)(param_1 + 0x6e) = 0;
    *param_1 = 2;
    param_1->rot_x = 0x400;
    param_1->move_mode = 0;
    if (param_1->sub_type == '\0') {
      param_1->behavior_state = 1;
      FUN_80069688(param_1);
    }
    else {
      FUN_80031558(param_1,(byte)param_1->kind - 1);
    }
  }
  param_1->flags = 1;
  if (param_1->behavior_state == '\0') {
    FUN_8006b9dc(param_1);
  }
  else if (param_1->behavior_state == '\x01') {
    FUN_8006b494(param_1);
    if (*(short *)(param_1 + 0x66) == 0) {
      if (param_1->kind == '\x06') {
        FUN_80051844(param_1);
      }
      else {
        FUN_800517f8(param_1);
      }
    }
    FUN_8006afc4(param_1);
  }
  return;
}
