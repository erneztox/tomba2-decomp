/**
 * @brief GPU command queue mode setter: dispatches via function table, checks DAT_800a59a1/2
 * @note Original: func_80080DC0 at 0x80080DC0
 */
// GPU_SetQueueMode



byte FUN_80080dc0(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_800a59a1;
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_SetGrapQue__d_____8001be98,param_1);
  }
  if (param_1 != DAT_800a59a1) {
    (*PTR_PTR_800a5998->scale_y)(1);
    DAT_800a59a1 = (byte)param_1;
    FUN_80085b80(2,0);
  }
  return bVar1;
}
