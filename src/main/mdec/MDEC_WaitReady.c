/**
 * @brief MDEC busy-wait: polls bit 1 at 0x800ABE9C+4 until set
 * @note Original: func_800873BC at 0x800873BC
 */
// MDEC_WaitReady



void FUN_800873bc(void)

{
  do {
  } while ((*(u16 *)(DAT_800abe9c + 4) & 2) == 0);
  return;
}
