/**
 * @brief BIOS MDEC init: disables IRQ, calls BIOS stub, enables IRQ
 * @note Original: func_8009BDFC at 0x8009BDFC
 */
// BIOS_MDECInit



s32 BIOS_MDECInit(void)

{
  BIOS_Syscall0();
  BIOS_Syscall_C0_80087400(1,&DAT_80105f18);
  BIOS_Syscall0_2();
  return 1;
}
