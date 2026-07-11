/**
 * @brief Ends current entity action: resets state, sets sub-state to 0x1E, calls cleanup
 * @note Original: func_800655A0 at 0x800655A0
 */
// Entity_EndAction



void FUN_800655a0(int param_1)

{
  param_1->rot_z = 0;
  DAT_800bf80e = 0;
  param_1->behavior_state = 0x1e;
  param_1->action_state = param_1->action_state + '\x01';
  FUN_800654d4();
  return;
}
