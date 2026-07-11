/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_80086200 at 0x80086200
 */
// BIOS_CallB0_7



void FUN_80086200(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
