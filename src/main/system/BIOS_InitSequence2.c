/**
 * @brief BIOS init sequence 2: calls indirect + BIOS_B0 + init + clears global
 * @note Original: func_8009BD4C at 0x8009BD4C
 */
// BIOS_InitSequence2



void BIOS_InitSequence2(void)

{
  BIOS_CallIndirect2();
  BIOS_Syscall_B0_8009BF00();
  BIOS_MDECInit();
  DAT_800acf44 = 0;
  return;
}
