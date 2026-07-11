/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_80086220 at 0x80086220
 */
// BIOS_CallB0_9



void FUN_80086220(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
