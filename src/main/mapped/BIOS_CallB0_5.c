/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_80080870 at 0x80080870
 */
// BIOS_CallB0_5



void FUN_80080870(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
