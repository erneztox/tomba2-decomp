/**
 * @brief GPU command wrapper: calls GPU_DMAQueue with third param=0
 * @note Original: func_80082CE0 at 0x80082CE0
 */
// GPU_Cmd3



void GPU_Cmd3(s32 param_1,s32 param_2,s32 param_3)

{
  GPU_DMAQueue(param_1,param_2,0,param_3);
  return;
}
