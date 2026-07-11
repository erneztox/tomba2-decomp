/**
 * @brief BIOS init sequence: calls BIOS_B0, BIOS_B0(0), getter, returns 1
 * @note Original: func_8009BD1C at 0x8009BD1C
 */
// BIOS_InitSeq



undefined4 FUN_8009bd1c(void)

{
  FUN_8009bef0();
  FUN_80080920(0);
  FUN_8009bf20();
  return 1;
}
