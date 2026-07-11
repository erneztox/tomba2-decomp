/**
 * @brief BIOS sequence 4: BIOS_ZeroRegion + IRQ off + BIOS_ResetRegion + IRQ on + B0 + MDEC init
 * @note Original: func_8009BBFC at 0x8009BBFC
 */
// BIOS_Seq4



void BIOS_Seq4(s32 param_1,s32 param_2,s32 param_3,s32 param_4)

{
  BIOS_ZeroRegion();
  BIOS_Syscall0();
  BIOS_ResetRegion();
  BIOS_Syscall0_2();
  BIOS_Syscall_B0_80080920(0);
  BIOS_MDECSetup();
  BIOS_Syscall_B0_8009BF10(param_1,param_2,param_3,param_4);
  DAT_800acf44 = 1;
  return;
}
