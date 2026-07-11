/**
 * @brief Flushes CD command queue: sends buffered cmds via BIOS stub, resets counter
 * @note Original: func_8009AF5C at 0x8009AF5C
 */
// CD_FlushCmd



void CD_FlushCmd(void)

{
  if (0 < DAT_800acf08) {
    BIOS_Syscall_B0_800808E0(1,0x80105ef8);
    DAT_800acf08 = 0;
  }
  return;
}
