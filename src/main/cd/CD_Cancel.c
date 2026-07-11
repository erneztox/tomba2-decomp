/**
 * @brief Cancels current CD operation via 0x8008B0C8
 * @note Original: func_80089AA8 at 0x80089AA8
 */
// CD_Cancel



void CD_Cancel(void)

{
  CD_Reset();
  return;
}
