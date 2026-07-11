/**
 * @brief CD DMA alignment: divides param by DAT_800ac630, aligns for DMA transfer
 * @note Original: func_80097540 at 0x80097540
 */
// CD_AlignDMA



uint CD_AlignDMA(int param_1,uint param_2)

{
  uint uVar1;
  
  if (DAT_800ac628 != 0) {
    if (DAT_800ac630 == 0) {
      trap(0x1c00);
    }
    if (param_2 % DAT_800ac630 != 0) {
      param_2 = param_2 + DAT_800ac630 & ~DAT_800ac634;
    }
  }
  uVar1 = param_2 >> (DAT_800ac62c & 0x1f);
  if (param_1 != -2) {
    if (param_1 == -1) {
      param_2 = uVar1 & 0xffff;
    }
    else {
      *(s16 *)(param_1 * 2 + g_SPU_Regs) = (s16)uVar1;
    }
  }
  return param_2;
}
