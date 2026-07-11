/**
 * @brief Entity combat init: entity[0x44]=0x400, saves pos at _DAT_800bf826, sets flag bit 5
 * @note Original: func_800708CC at 0x800708CC
 */
// Entity_InitCombat



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800708cc(int param_1)

{
  param_1->anim_counter = 0x400;
  _DAT_800bf826 = param_1->pos_y;
  param_1->sub_type = 0;
  param_1->sprite_x = _DAT_800bf826;
  _DAT_800bf82a = *(undefined2 *)(param_1 + 0x32);
  param_1->angle_offset = _DAT_800bf82a;
  _DAT_800bf82e = param_1->pos_z;
  param_1->sprite_y = _DAT_800bf82e;
  param_1->action_state = 0;
  param_1->behavior_state = 2;
  return;
}
