/**
 * @brief MDEC output setup: syncs out, sets DMA regs at 0x800AD09C/078/070/074
 * @note Original: func_8009CA60 at 0x8009CA60
 */
// MDEC_SetupOut



void FUN_8009ca60(undefined4 param_1,uint param_2)

{
  FUN_8009cb80();
  *DAT_800ad09c = *DAT_800ad09c | 0x88;
  *DAT_800ad078 = 0;
  *DAT_800ad070 = param_1;
  *DAT_800ad074 = (param_2 >> 5) << 0x10 | 0x20;
  *DAT_800ad078 = 0x1000200;
  return;
}
