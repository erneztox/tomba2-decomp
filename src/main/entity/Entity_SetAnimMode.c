/**
 * @brief Sets entity animation mode (0=normal, non-0=alternate) with different calls
 * @note Original: func_80041718 at 0x80041718
 */
// Entity_SetAnimMode



undefined4 FUN_80041718(int param_1,undefined4 param_2,short param_3)

{
  param_1->anim_id = (char)param_2;
  param_1->sub_state2 = 0;
  if (param_3 == 0) {
    FUN_80077c40(param_1,*(undefined4 *)(param_1 + 0x7c),param_2);
  }
  else {
    FUN_80077cfc(param_1,*(undefined4 *)(param_1 + 0x7c),param_2);
  }
  return 1;
}
