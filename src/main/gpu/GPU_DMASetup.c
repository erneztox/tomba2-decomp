/**
 * @brief GPU DMA setup: configures DMA channel, sets DAT_800a5ad8 timeout
 * @note Original: func_80083214 at 0x80083214
 */
// GPU_DMASetup



s32 FUN_80083214(uint param_1)

{
  s32 uVar1;
  uint uVar2;
  
  DAT_800a5ad8 = FUN_80085c9c(0);
  DAT_800a5acc = 0;
  DAT_800a5ac8 = 0;
  uVar2 = param_1 & 7;
  if (uVar2 == 1) {
LAB_800832e4:
    *DAT_800a5ab4 = 0x401;
    *DAT_800a5ac4 = *DAT_800a5ac4 | 0x800;
    *DAT_800a5aa8 = 0x2000000;
    *DAT_800a5aa8 = 0x1000000;
  }
  else {
    if (uVar2 < 2) {
      if (uVar2 != 0) goto LAB_80083330;
    }
    else {
      if (uVar2 == 3) goto LAB_800832e4;
      if (uVar2 != 5) goto LAB_80083330;
    }
    *DAT_800a5ab4 = 0x401;
    *DAT_800a5ac4 = *DAT_800a5ac4 | 0x800;
    *DAT_800a5aa8 = 0;
    FUN_80083af8(0x80100b28,0,0x100);
    FUN_80083af8(0x80100c30,0,0x1800);
  }
LAB_80083330:
  FUN_80085c9c(DAT_800a5ad8);
  uVar1 = 0;
  if ((param_1 & 7) == 0) {
    uVar1 = FUN_80083618(param_1);
  }
  return uVar1;
}
