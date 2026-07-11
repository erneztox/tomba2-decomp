/**
 * @brief GPU DMA callback: handles DMA completion, resets timeout
 * @note Original: func_80082FB4 at 0x80082FB4
 */
// GPU_DMACallback



uint FUN_80082fb4(void)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((*DAT_800a5ab4 & 0x1000000) == 0) {
    DAT_800a5ad4 = FUN_80085c9c(0);
    if (DAT_800a5ac8 != DAT_800a5acc) {
      uVar1 = *DAT_800a5ab4;
      while ((uVar1 & 0x1000000) == 0) {
        if (((DAT_800a5acc + 1 & 0x3f) == DAT_800a5ac8) && (DAT_800a59ac == (code *)0x0)) {
          FUN_80085b80(2,0);
        }
        uVar1 = *DAT_800a5aa8;
        while ((uVar1 & 0x4000000) == 0) {
          uVar1 = *DAT_800a5aa8;
        }
        (**(code **)(DAT_800a5acc * 0x60 + -0x7feff3d0))
                  (*(s32 *)(DAT_800a5acc * 0x60 + -0x7feff3cc),
                   *(s32 *)(DAT_800a5acc * 0x60 + -0x7feff3c8));
        DAT_800a5acc = DAT_800a5acc + 1 & 0x3f;
        if (DAT_800a5ac8 == DAT_800a5acc) break;
        uVar1 = *DAT_800a5ab4;
      }
    }
    FUN_80085c9c(DAT_800a5ad4);
    if ((((DAT_800a5ac8 == DAT_800a5acc) && ((*DAT_800a5ab4 & 0x1000000) == 0)) &&
        (DAT_800a59a8 != 0)) && (DAT_800a59ac != (code *)0x0)) {
      DAT_800a59a8 = 0;
      (*DAT_800a59ac)();
    }
    uVar1 = DAT_800a5ac8 - DAT_800a5acc & 0x3f;
  }
  return uVar1;
}
