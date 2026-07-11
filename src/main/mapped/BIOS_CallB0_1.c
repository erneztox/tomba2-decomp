/**
 * @brief BIOS call stub: jumps to 0xB0 (system call)
 * @note Original: func_80080830 at 0x80080830
 */
// BIOS_CallB0_1



void FUN_80080830(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
