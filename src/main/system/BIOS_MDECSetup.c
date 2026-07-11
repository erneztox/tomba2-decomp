/**
 * @brief BIOS MDEC setup: IRQ off, sets MDEC callbacks at 0x80105F1C/20, IRQ on
 * @note Original: func_8009BD84 at 0x8009BD84
 */
// BIOS_MDECSetup



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 BIOS_MDECSetup(void)

{
  BIOS_Syscall0();
  _DAT_80105f1c = BIOS_Delay;
  _DAT_80105f20 = &LAB_8009be9c;
  _DAT_80105f18 = 0;
  _DAT_80105f24 = 0;
  BIOS_Syscall_C0_80087400(1,&DAT_80105f18);
  BIOS_Syscall_C0_800873F0(1,&DAT_80105f18);
  BIOS_Syscall0_2();
  return 1;
}
