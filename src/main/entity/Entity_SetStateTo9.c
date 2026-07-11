/**
 * @brief Sets entity sub-state: entity->behavior_state=9, entity->action_state=0, entity->sub_action=0
 * @note Original: func_800645CC at 0x800645CC
 */
// Entity_SetStateTo9



void FUN_800645cc(int param_1)

{
  param_1->behavior_state = 9;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  return;
}
