/**
 * @brief MDEC DMA start: IRQ disable, BIOS call, IRQ enable
 * @note Original: func_80086A3C at 0x80086A3C
 */
// MDEC_StartDMA



void MDEC_StartDMA(void)

{
  BIOS_Syscall0();
  BIOS_CallC0(3,1);
  BIOS_Syscall_C0_80087400(2,&DAT_80102440);
  BIOS_Syscall0_2();
  return;
}
