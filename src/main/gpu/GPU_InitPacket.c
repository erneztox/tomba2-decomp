/**
 * @brief GPU packet init: stores 3 params + zeros at offset 4-7 in packet struct
 * @note Original: func_80083BF0 at 0x80083BF0
 */
// GPU_InitPacket



void FUN_80083bf0(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5)

{
  *param_1 = param_2;
  param_1->flags = param_3;
  param_1->kind = param_4;
  param_1->state = 0;
  param_1->behavior_state = 0;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1->counter1 = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  param_1->counter2 = 0;
  param_1->sub_type = param_5;
  return;
}
