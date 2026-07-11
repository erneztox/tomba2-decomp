/**
 * @brief BIOS sequence 5: same as Seq4 pattern with different MDEC setup call
 * @note Original: func_8009BC8C at 0x8009BC8C
 */
// BIOS_Seq5



void BIOS_Seq5(s32 param_1,s32 param_2,s32 param_3,s32 param_4)

{
  BIOS_ZeroRegion();
  BIOS_Syscall0();
  BIOS_ResetRegion();
  BIOS_Syscall0_2();
  BIOS_Syscall_B0_80080920(0);
  BIOS_MDECSetup();
  BIOS_Syscall_B0_8009BEE0(param_1,param_2,param_3,param_4);
  DAT_800acf44 = 1;
  return;
}
