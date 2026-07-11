/**
 * @brief CD reset with option: optionally calls FUN_80085b20, then CD_ResetState
 * @note Original: func_8009C620 at 0x8009C620
 */
// CD_ResetWithOption



void FUN_8009c620(int param_1)

{
  if (param_1 == 0) {
    FUN_80085b20();
  }
  FUN_8009c8e0(param_1);
  return;
}
