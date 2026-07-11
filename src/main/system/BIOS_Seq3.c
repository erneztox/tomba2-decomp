/**
 * @brief BIOS sequence 3: disable IRQ, BIOS_B0, BIOS_B0(0), enable IRQ
 * @note Original: func_8009BB7C at 0x8009BB7C
 */
// BIOS_Seq3



void BIOS_Seq3(void)

{
  BIOS_Syscall0();
  BIOS_Syscall_B0_8009C040();
  BIOS_Syscall_B0_80080920(0);
  BIOS_Syscall0_2();
  return;
}
