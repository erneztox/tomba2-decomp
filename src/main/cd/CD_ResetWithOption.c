/**
 * @brief CD reset with option: optionally calls CD_Dispatch0C, then CD_ResetState
 * @note Original: func_8009C620 at 0x8009C620
 */
// CD_ResetWithOption



void CD_ResetWithOption(int param_1)

{
  if (param_1 == 0) {
    CD_Dispatch0C();
  }
  CD_ResetState(param_1);
  return;
}
