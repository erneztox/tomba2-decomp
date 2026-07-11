/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_80080850 at 0x80080850
 */
// BIOS_CallB0_3



void FUN_80080850(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
