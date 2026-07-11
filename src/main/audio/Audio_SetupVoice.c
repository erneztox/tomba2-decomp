/**
 * @brief Audio voice setup: extracts bits from params, stores in voice struct
 * @note Original: func_8008F260 at 0x8008F260
 */
// Audio_SetupVoice



void FUN_8008f260(uint param_1,uint param_2,ushort *param_3)

{
  ushort uVar1;
  
  param_3->behavior_state = (ushort)param_1 & 0x8000;
  uVar1 = (ushort)param_2;
  param_3->action_state = uVar1 & 0x8000;
  param_3->counter1 = uVar1 & 0x4000;
  param_3->sub_action = uVar1 & 0x20;
  *param_3 = (ushort)((param_1 & 0xffff) >> 8) & 0x7f;
  param_3->flags = (ushort)((param_1 & 0xffff) >> 4) & 0xf;
  param_3->kind = (ushort)param_1 & 0xf;
  param_3->sub_type = (ushort)(param_2 >> 6) & 0x7f;
  param_3->state = uVar1 & 0x1f;
  return;
}
