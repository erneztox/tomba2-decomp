/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_80080840 at 0x80080840
 */
// BIOS_CallB0_2



void FUN_80080840(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
