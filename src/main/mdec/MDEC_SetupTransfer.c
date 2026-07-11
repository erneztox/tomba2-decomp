/**
 * @brief MDEC transfer setup: syncs in, sets DMA regs at 0x800AD09C-06C
 * @note Original: func_8009C9D0 at 0x8009C9D0
 */
// MDEC_SetupTransfer



void FUN_8009c9d0(undefined4 *param_1,uint param_2)

{
  FUN_8009caec();
  *DAT_800ad09c = *DAT_800ad09c | 0x88;
  *DAT_800ad064 = (int)(param_1 + 1);
  *DAT_800ad068 = (param_2 >> 5) << 0x10 | 0x20;
  *DAT_800ad094 = *param_1;
  *DAT_800ad06c = 0x1000201;
  return;
}
