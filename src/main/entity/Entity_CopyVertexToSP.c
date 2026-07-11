/**
 * @brief Copies processed vertex to scratchpad
 * @note Original address: 0x8003B220
 */
// Entity_CopyVertexToSP

void Entity_CopyVertexToSP(short *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  
  *(undefined4 *)param_1 = param_2;
  *param_1 = *param_1 + (short)*(char *)(param_3 + 0xe);
  sVar2 = param_1->flags + (short)*(char *)(param_3 + 0xf);
  param_1->flags = sVar2;
  bVar1 = *(byte *)(param_3 + 10);
  param_1->behavior_state = sVar2;
  param_1->counter1 = *param_1;
  param_1->state = *param_1 + (ushort)bVar1;
  bVar1 = param_3->render_flags;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1->action_state = 0;
  param_1->kind = 0;
  *param_1 = *param_1 * 5;
  param_1->counter1 = param_1->counter1 * 5;
  param_1->counter2 = param_1->flags + (ushort)bVar1;
  param_1[0xc] = param_1->state;
  param_1->state = param_1->state * 5;
  param_1->sprite_flags = param_1->counter2;
  param_1[0xc] = param_1[0xc] * 5;
  param_1->flags = param_1->flags * 5;
  param_1->behavior_state = param_1->behavior_state * 5;
  param_1->counter2 = param_1->counter2 * 5;
  param_1->sprite_flags = param_1->sprite_flags * 5;
  return;
}

