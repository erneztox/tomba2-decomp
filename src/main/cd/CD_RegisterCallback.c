/**
 * @brief CD event callback register: calls CD_Dispatch04(2, GPU_DMACallback)
 * @note Original: func_80083AD0 at 0x80083AD0
 */
// CD_RegisterCallback



void CD_RegisterCallback(void)

{
  CD_Dispatch04(2,GPU_DMACallback);
  return;
}
