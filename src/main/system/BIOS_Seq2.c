/**
 * @brief BIOS sequence: calls BIOS_B0 stub then BIOS_CopyToEvent
 * @note Original: func_8009BBB4 at 0x8009BBB4
 */
// BIOS_Seq2



void BIOS_Seq2(void)

{
  BIOS_Syscall_B0_8009C050();
  BIOS_CopyToEvent();
  return;
}
