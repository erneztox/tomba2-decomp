/**
 * @brief MDEC DMA start: IRQ disable, BIOS call, IRQ enable
 * @note Original: func_80086A3C at 0x80086A3C
 */
// MDEC_StartDMA



void FUN_80086a3c(void)

{
  FUN_80080890();
  FUN_80085b10(3,1);
  FUN_80087400(2,&DAT_80102440);
  FUN_800808a0();
  return;
}
