/**
 * @brief Writes data to memory card file
 * @note Original: func_800970EC at 0x800970EC
 */
// MC_Write



void FUN_800970ec(s32 param_1,s16 param_2,int param_3)

{
  *(s16 *)(g_SPU_Regs + 0x1a6) = param_2;
  FUN_800976c8();
  *(u16 *)(g_SPU_Regs + 0x1aa) = *(u16 *)(g_SPU_Regs + 0x1aa) | 0x30;
  FUN_800976c8();
  FUN_800976a0();
  *DAT_800ac608 = param_1;
  *DAT_800ac60c = param_3 << 0x10 | 0x10;
  DAT_800ac654 = 1;
  *DAT_800ac610 = 0x1000200;
  return;
}
