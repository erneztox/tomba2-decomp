/**
 * @brief Sets SPU voice volume via 0x800905E0
 * @note Original: func_80090560 at 0x80090560
 */
// SPU_SetVolume



void SPU_SetVolume(s16 param_1,s8 param_2,s16 param_3)

{
  Audio_ScanChannels((int)param_1,0,(int)param_2,(int)param_3);
  return;
}
