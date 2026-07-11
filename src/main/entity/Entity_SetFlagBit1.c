/**
 * @brief Entity flag bit 1 set/clear: entity->sub_action bit 1 toggled by param_2
 * @note Original: func_80083C70 at 0x80083C70
 */
// Entity_SetFlagBit1



void FUN_80083c70(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = param_1->sub_action & 0xfd;
  }
  else {
    bVar1 = param_1->sub_action | 2;
  }
  param_1->sub_action = bVar1;
  return;
}
