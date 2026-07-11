/**
 * @brief Sets SPU voice volume and pan via 0x800905E0
 * @note Original: func_80090598 at 0x80090598
 */
// SPU_SetVolumePan



void SPU_SetVolumePan(s16 param_1,s16 param_2,s8 param_3,s16 param_4)

{
  Audio_ScanChannels((int)param_1,(int)param_2,(int)param_3,(int)param_4);
  return;
}
