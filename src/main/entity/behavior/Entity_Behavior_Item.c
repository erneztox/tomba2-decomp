/**
 * @brief Entity item behavior: state machine with pickup/drop animation
 * @note Original: func_8004BF84 at 0x8004BF84
 */
// Entity_Behavior_Item



void FUN_8004bf84(undefined1 *param_1)

{
  char cVar1;
  
  if (param_1->behavior_state == '\0') {
    param_1->behavior_state = 1;
    *param_1 = 3;
    param_1->gte_input = 0xffb0;
    *(undefined2 *)(param_1 + 0x8a) = 0x14;
    *(undefined2 *)(param_1 + 0x8c) = 0;
  }
  else if (param_1->behavior_state != '\x01') {
    return;
  }
  FUN_80051614(param_1,param_1 + 0x88,0,0);
  cVar1 = DAT_800e7e81;
  param_1->flags = DAT_800e7e81;
  if (cVar1 != '\0') {
    FUN_80077efc(param_1);
  }
  return;
}
