/**
 * @brief Ends current entity action: resets state, sets sub-state to 0x1E, calls cleanup
 * @note Original: func_800655A0 at 0x800655A0
 */
// Entity_EndAction



void FUN_800655a0(int param_1)

{
  *(undefined2 *)(param_1 + 0x58) = 0;
  DAT_800bf80e = 0;
  *(undefined1 *)(param_1 + 5) = 0x1e;
  *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  FUN_800654d4();
  return;
}
