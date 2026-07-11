/**
 * @brief BIOS sequence 4: BIOS_ZeroRegion + IRQ off + BIOS_ResetRegion + IRQ on + B0 + MDEC init
 * @note Original: func_8009BBFC at 0x8009BBFC
 */
// BIOS_Seq4



void FUN_8009bbfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_8009bfc0();
  FUN_80080890();
  FUN_8009bf48();
  FUN_800808a0();
  FUN_80080920(0);
  FUN_8009bd84();
  FUN_8009bf10(param_1,param_2,param_3,param_4);
  DAT_800acf44 = 1;
  return;
}
