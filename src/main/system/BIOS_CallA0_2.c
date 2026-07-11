/**
 * @brief BIOS call stub: jumps to 0xA0
 * @note Original: func_800858F0 at 0x800858F0
 */
// BIOS_CallA0_2



void BIOS_CallA0_2(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}
