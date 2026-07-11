/**
 * @brief Sets SPU voice volume and pan via 0x800905E0
 * @note Original: func_80090598 at 0x80090598
 */
// SPU_SetVolumePan



void FUN_80090598(short param_1,short param_2,char param_3,short param_4)

{
  FUN_800905e0((int)param_1,(int)param_2,(int)param_3,(int)param_4);
  return;
}
