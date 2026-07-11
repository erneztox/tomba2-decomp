/**
 * @brief BIOS sequence 5: same as Seq4 pattern with different MDEC setup call
 * @note Original: func_8009BC8C at 0x8009BC8C
 */
// BIOS_Seq5



void FUN_8009bc8c(s32 param_1,s32 param_2,s32 param_3,s32 param_4)

{
  FUN_8009bfc0();
  FUN_80080890();
  FUN_8009bf48();
  FUN_800808a0();
  FUN_80080920(0);
  FUN_8009bd84();
  FUN_8009bee0(param_1,param_2,param_3,param_4);
  DAT_800acf44 = 1;
  return;
}
