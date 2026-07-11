/**
 * @brief MDEC hardware init: zeros flag, enables IRQ, sets up DMA, calls callbacks
 * @note Original: func_80087A60 at 0x80087A60
 */
// MDEC_InitHW



void MDEC_InitHW(void)

{
  MDEC_InitHWImpl();
  return;
}
