/**
 * @brief CD command with 0x40 variant: same as Cmd_40
 * @note Original: func_800899BC at 0x800899BC
 */
// CD_Cmd_40b



void CD_Cmd_40b(void)

{
  BIOS_Syscall_B0_800899F0(0xf0000003,0x40);
  return;
}
