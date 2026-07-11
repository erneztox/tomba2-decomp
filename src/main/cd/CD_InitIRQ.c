/**
 * @brief CD init with IRQ: sets flag, enables IRQ, registers callback CD_Interrupt
 * @note Original: func_80096B78 at 0x80096B78
 */
// CD_InitIRQ



void CD_InitIRQ(void)

{
  if (DAT_800ac5f4 == 0) {
    DAT_800ac5f4 = 1;
    BIOS_Syscall0();
    MC_Flush(CD_Interrupt);
    DAT_800ac58c = BIOS_Syscall_B0_80080830(0xf0000009,0x20,0x2000,0);
    BIOS_Syscall_B0_80080850();
    BIOS_Syscall0_2();
  }
  return;
}
