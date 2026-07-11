/**
 * @brief Entity wait state: entity->sub_state=0, polls DAT_800bf843, checks flags
 * @note Original: func_800424F0 at 0x800424F0
 */
// Entity_WaitState



undefined4 FUN_800424f0(int param_1)

{
  undefined4 local_18;
  
  if (param_1->sub_state == '\0') {
    if (DAT_800bf843 != '\0') {
      return 1;
    }
    if ((*(ushort *)(param_1 + 0x76) & 4) == 0) {
      FUN_80070724(param_1->event_id & 0xfff,(int)param_1->event_param,
                   (int)(short)*(ushort *)(param_1 + 0x76));
    }
    else {
      local_18 = CONCAT22(*(undefined2 *)(param_1 + 100),(undefined2)local_18);
      FUN_8007074c(param_1->event_id & 0xfff,(int)param_1->event_param,
                   (int)*(short *)(param_1 + 0x76),local_18);
    }
    if (((int)param_1->event_id & 0x8000U) != 0) {
      return 1;
    }
    param_1->sub_state = param_1->sub_state + '\x01';
  }
  else {
    if (param_1->sub_state != '\x01') {
      return 0;
    }
    if (DAT_800bf843 == '\x01') {
      return 1;
    }
  }
  return 0;
}
