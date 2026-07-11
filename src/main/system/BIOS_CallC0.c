/**
 * @brief BIOS call stub: jumps to 0xC0
 * @note Original: func_80085B10 at 0x80085B10
 */
// BIOS_CallC0



void FUN_80085b10(void)

{
  (*(code *)&LAB_000000c0)();
  return;
}
