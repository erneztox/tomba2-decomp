/**
 * @brief CD command with 0x40: calls BIOS stub with 0xF0000003, 0x40
 * @note Original: func_80089994 at 0x80089994
 */
// CD_Cmd_40



void CD_Cmd_40(void)

{
  BIOS_Syscall_B0_800899F0(0xf0000003,0x40);
  return;
}
