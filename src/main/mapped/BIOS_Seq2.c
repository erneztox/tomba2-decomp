/**
 * @brief BIOS sequence: calls BIOS_B0 stub then FUN_8009c230
 * @note Original: func_8009BBB4 at 0x8009BBB4
 */
// BIOS_Seq2



void FUN_8009bbb4(void)

{
  FUN_8009c050();
  FUN_8009c230();
  return;
}
