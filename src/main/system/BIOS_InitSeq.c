/**
 * @brief BIOS init sequence: calls BIOS_B0, BIOS_B0(0), getter, returns 1
 * @note Original: func_8009BD1C at 0x8009BD1C
 */
// BIOS_InitSeq



s32 BIOS_InitSeq(void)

{
  BIOS_Syscall_B0_8009BEF0();
  BIOS_Syscall_B0_80080920(0);
  BIOS_CallIndirect();
  return 1;
}
