/**
 * @brief BIOS MDEC init: disables IRQ, calls BIOS stub, enables IRQ
 * @note Original: func_8009BDFC at 0x8009BDFC
 */
// BIOS_MDECInit



undefined4 FUN_8009bdfc(void)

{
  FUN_80080890();
  FUN_80087400(1,&DAT_80105f18);
  FUN_800808a0();
  return 1;
}
