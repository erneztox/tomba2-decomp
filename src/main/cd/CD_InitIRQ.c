/**
 * @brief CD init with IRQ: sets flag, enables IRQ, registers callback FUN_80097030
 * @note Original: func_80096B78 at 0x80096B78
 */
// CD_InitIRQ



void FUN_80096b78(void)

{
  if (DAT_800ac5f4 == 0) {
    DAT_800ac5f4 = 1;
    FUN_80080890();
    FUN_80097730(FUN_80097030);
    DAT_800ac58c = FUN_80080830(0xf0000009,0x20,0x2000,0);
    FUN_80080850();
    FUN_800808a0();
  }
  return;
}
