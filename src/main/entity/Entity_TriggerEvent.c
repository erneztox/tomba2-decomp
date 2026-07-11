/**
 * @brief Triggers event: entity->sub_state state, checks entity[0x72/0x74] conditions, calls FUN_80042728
 * @note Original: func_80042758 at 0x80042758
 */
// Entity_TriggerEvent



undefined4 FUN_80042758(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1->sub_state == '\0') {
    if (-1 < param_1->event_id) {
      iVar2 = FUN_80040b48();
      if (iVar2 != 1) {
        return 1;
      }
      if (param_1->event_param != 0) {
        return 1;
      }
    }
    param_1->sub_state = param_1->sub_state + '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (param_1->sub_state == '\x01') {
      uVar1 = FUN_80042728();
    }
  }
  return uVar1;
}
