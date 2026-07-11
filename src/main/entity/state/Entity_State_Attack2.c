/**
 * @brief Entity attack state variant 2: entity->action_state state, different callback path
 * @note Original: func_800658E4 at 0x800658E4
 */
// Entity_State_Attack2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800658e4(int param_1)

{
  int iVar1;
  
  if (param_1->action_state == '\0') {
    DAT_800bf80e = 0;
    param_1->action_state = param_1->action_state + '\x01';
  }
  else if (param_1->action_state != '\x01') {
    return;
  }
  iVar1 = FUN_80076d68(param_1);
  if (iVar1 == 1) {
    DAT_800bf80e = 1;
  }
  if (_DAT_1f800184 != 1) {
    if (_DAT_1f800184 != 2) {
      FUN_80065478(param_1,1);
      return;
    }
    FUN_80055d5c(param_1);
  }
  param_1->angle_offset = 0;
  param_1->velocity_y = 0;
  return;
}
