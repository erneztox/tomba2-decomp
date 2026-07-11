/**
 * @brief Entity push behavior: entity->action_state switch, push reaction
 * @note Original: func_80073328 at 0x80073328
 */
// Entity_Behavior_Push



undefined4 FUN_80073328(undefined1 *param_1)

{
  int iVar1;
  
  switchparam_1->action_state {
  case 0:
    if (((param_1->collision_state == '\0') || (DAT_800e7ea9 == '\0')) || (DAT_800e7ffb != '\0')) {
      if (DAT_800bf818 != '\x05') {
        return 0;
      }
      if (DAT_800bf817 != param_1->sub_type) {
        return 0;
      }
      param_1->action_state = param_1->action_state + '\x01';
      FUN_800732c0();
      return 0;
    }
    param_1->action_state = param_1->action_state + '\x01';
    FUN_800732c0();
    goto LAB_800734fc;
  case 1:
    iVar1 = FUN_80072e60(param_1);
    if ((iVar1 != 0) && (DAT_800bf816 != '\0')) {
      param_1->action_state = param_1->action_state + '\x01';
      FUN_80072efc();
      return 0;
    }
    break;
  case 2:
    if (DAT_800bf818 != '\x02') {
      return 0;
    }
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    *param_1 = 1;
    param_1->action_state = param_1->action_state + '\x01';
    param_1->input_flags = '\x01' - param_1->input_flags;
    param_1->bounds_min_y = param_1->bounds_min_y + 800;
    param_1->bounds_max_y = param_1->bounds_max_y + 800;
    break;
  case 3:
    if (((param_1->collision_state == '\0') || (DAT_800e7ea9 == '\0')) || (DAT_800e7ffb != '\0')) {
      if (DAT_800bf818 != '\x06') {
        return 0;
      }
      if (DAT_800bf80f != '\0') {
        return 0;
      }
      param_1->action_state = param_1->action_state + '\x01';
      FUN_80073300();
      return 0;
    }
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    param_1->action_state = param_1->action_state + '\x01';
    FUN_80073300();
LAB_800734fc:
    if (DAT_1f800137 != '\0') {
      return 0;
    }
    DAT_1f800137 = '\x02';
    break;
  case 4:
    if (DAT_800bf818 != '\x04') {
      return 0;
    }
    if (DAT_800bf80f != '\0') {
      return 0;
    }
    param_1->action_state = param_1->action_state + '\x01';
    DAT_800bf818 = '\0';
    break;
  case 5:
    iVar1 = FUN_80072f14(param_1);
    if (iVar1 != 0) {
      *param_1 = 1;
      param_1->action_state = 0;
      param_1->input_flags = '\x01' - param_1->input_flags;
      param_1->bounds_min_y = param_1->bounds_min_y + -800;
      param_1->bounds_max_y = param_1->bounds_max_y + -800;
      return 1;
    }
  }
  return 0;
}
