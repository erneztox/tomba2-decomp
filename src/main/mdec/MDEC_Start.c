/**
 * @brief MDEC start: disables IRQ, BIOS stubs, enables IRQ
 * @note Original: func_80087A80 at 0x80087A80
 */
// MDEC_Start



void MDEC_Start(void)

{
  MDEC_StartDMA();
  return;
}
