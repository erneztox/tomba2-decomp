/**
 * @brief BIOS call stub: jumps to 0xB0
 * @note Original: func_800808E0 at 0x800808E0
 */
// BIOS_CallB0_6



void FUN_800808e0(void)

{
  (*(code *)&SUB_000000b0)();
  return;
}
