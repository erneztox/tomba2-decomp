/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_80086210 at 0x80086210
 */
// BIOS_CallB0_8



void FUN_80086210(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
