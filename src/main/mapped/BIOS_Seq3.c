/**
 * @brief BIOS sequence 3: disable IRQ, BIOS_B0, BIOS_B0(0), enable IRQ
 * @note Original: func_8009BB7C at 0x8009BB7C
 */
// BIOS_Seq3



void FUN_8009bb7c(void)

{
  FUN_80080890();
  FUN_8009c040();
  FUN_80080920(0);
  FUN_800808a0();
  return;
}
