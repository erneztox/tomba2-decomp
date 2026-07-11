/**
 * @brief Flushes memory card write buffer
 * @note Original: func_80097730 at 0x80097730
 */
// MC_Flush



void MC_Flush(s32 param_1)

{
  CD_Dispatch04(4,param_1);
  return;
}
