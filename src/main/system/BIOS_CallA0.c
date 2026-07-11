/**
 * @brief BIOS call stub: jumps to 0xA0
 * @note Original: func_800861E8 at 0x800861E8
 */
// BIOS_CallA0



void FUN_800861e8(void)

{
  (*(code *)&LAB_000000a0)();
  return;
}
