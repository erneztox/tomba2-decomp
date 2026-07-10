/**
 * @brief Full entity reset: clears state bytes, resets audio bank, cleans refs
 * @note Original: func_80034670 at 0x80034670
 */
// Entity_ResetFull



void FUN_80034670(int param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_80074bf8(1);
  FUN_80034634(param_1);
  return;
}
