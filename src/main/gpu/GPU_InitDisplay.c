/**
 * @brief GPU display init: sets up display area at param_1 with w/h/x/y
 * @note Original: func_80083B30 at 0x80083B30
 */
// GPU_InitDisplay



void FUN_80083b30(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 int param_5)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_80086604();
  *param_1 = param_2;
  param_1->flags = param_3;
  param_1->kind = param_4;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  param_1->counter1 = 0;
  param_1->counter2 = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1->sprite_flags = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1->render_flags = 1;
  param_1->sub_type = (short)param_5;
  if (iVar2 == 0) {
    bVar1 = param_5 < 0x101;
  }
  else {
    bVar1 = param_5 < 0x121;
  }
  *(bool *)((int)param_1 + 0x17) = bVar1;
  param_1->state = param_2;
  param_1->behavior_state = param_3;
  param_1[10] = 10;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}
