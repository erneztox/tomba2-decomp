/**
 * @brief BIOS call stub: jumps to 0xA0 (EnterCriticalSection)
 * @note Original: func_80080820 at 0x80080820
 */
// BIOS_EnterCritical



void BIOS_EnterCritical(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}
