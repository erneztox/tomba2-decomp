/**
 * @brief BIOS MDEC setup: IRQ off, sets MDEC callbacks at 0x80105F1C/20, IRQ on
 * @note Original: func_8009BD84 at 0x8009BD84
 */
// BIOS_MDECSetup



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8009bd84(void)

{
  FUN_80080890();
  _DAT_80105f1c = FUN_8009be34;
  _DAT_80105f20 = &LAB_8009be9c;
  _DAT_80105f18 = 0;
  _DAT_80105f24 = 0;
  FUN_80087400(1,&DAT_80105f18);
  FUN_800873f0(1,&DAT_80105f18);
  FUN_800808a0();
  return 1;
}
