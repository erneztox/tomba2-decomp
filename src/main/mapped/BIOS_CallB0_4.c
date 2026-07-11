/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_80080860 at 0x80080860
 */
// BIOS_CallB0_4



void FUN_80080860(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
