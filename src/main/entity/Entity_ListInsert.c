/**
 * @brief Entity list insert: inserts entity into linked list at 0x800F2738
 * @note Original: func_8007AB44 at 0x8007AB44
 */
// Entity_ListInsert



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007ab44(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (param_1->counter1 == 0) {
    _DAT_800f2738 = param_1->counter2;
    if (_DAT_800f2738 != 0) {
      _DAT_800f2738->prev = 0;
      goto LAB_8007ab8c;
    }
  }
  else {
    *(undefined4 *)(param_1->counter1 + 0x24) = param_1->counter2;
LAB_8007ab8c:
    if (param_1->counter2 != 0) {
      *(undefined4 *)(param_1->counter2 + 0x20) = param_1->counter1;
      goto LAB_8007abc0;
    }
  }
  _DAT_800f23a0 = param_1->counter1;
  if (_DAT_800f23a0 != 0) {
    _DAT_800f23a0->next = 0;
  }
LAB_8007abc0:
  DAT_800f2410 = DAT_800f2410 + '\x01';
  puVar1 = param_1;
  param_1->counter2 = _DAT_800f273c;
  _DAT_800f273c = puVar1;
  FUN_8007addc(param_1);
  *param_1 = 0;
  param_1->flags = 0;
  param_1->kind = 0;
  param_1->sub_type = 0;
  param_1->state = 0;
  param_1->behavior_state = 0;
  param_1->action_state = 0;
  return;
}
