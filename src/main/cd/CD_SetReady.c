/**
 * @brief CD ready setter: DAT_800ac638 = (param_1 != 1)
 * @note Original: func_80099450 at 0x80099450
 */
// CD_SetReady



void CD_SetReady(int param_1)

{
  DAT_800ac638 = (uint)(param_1 != 1);
  return;
}
