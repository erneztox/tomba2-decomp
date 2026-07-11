/**
 * @brief CD interrupt handler: checks DAT_800ac654, processes SPU reg, handles DMA
 * @note Original: func_80097030 at 0x80097030
 */
// CD_Interrupt



void FUN_80097030(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_800ac654 == 0) {
    FUN_800976c8();
  }
  iVar1 = g_SPU_Regs;
  *(u16 *)(g_SPU_Regs + 0x1aa) = *(u16 *)(g_SPU_Regs + 0x1aa) & 0xffcf;
  if ((*(u16 *)(iVar1 + 0x1aa) & 0x30) != 0) {
    uVar2 = 1;
    do {
      if (0xf00 < uVar2) break;
      uVar2 = uVar2 + 1;
    } while ((*(u16 *)(iVar1 + 0x1aa) & 0x30) != 0);
  }
  if (DAT_800ac63c == (code *)0x0) {
    FUN_800899f0(0xf0000009,0x20);
  }
  else {
    (*DAT_800ac63c)();
  }
  return;
}
