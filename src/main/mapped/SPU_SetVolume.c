/**
 * @brief Sets SPU voice volume via 0x800905E0
 * @note Original: func_80090560 at 0x80090560
 */
// SPU_SetVolume



void FUN_80090560(short param_1,char param_2,short param_3)

{
  FUN_800905e0((int)param_1,0,(int)param_2,(int)param_3);
  return;
}
