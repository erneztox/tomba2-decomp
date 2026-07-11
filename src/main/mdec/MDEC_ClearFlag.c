/**
 * @brief MDEC flag clearer wrapper: calls MDEC_GetAndClearFlag
 * @note Original: func_80087A40 at 0x80087A40
 */
// MDEC_ClearFlag



void MDEC_ClearFlag(void)

{
  MDEC_GetAndClearFlag();
  return;
}
