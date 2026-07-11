/**
 * @brief CD struct field getter: returns word at g_SPU_Regs + index*0x10 + 0xC
 * @note Original: func_8009A1D0 at 0x8009A1D0
 */
// CD_GetField



void CD_GetField(int param_1,s16 *param_2)

{
  *param_2 = *(s16 *)(param_1 * 0x10 + g_SPU_Regs + 0xc);
  return;
}
