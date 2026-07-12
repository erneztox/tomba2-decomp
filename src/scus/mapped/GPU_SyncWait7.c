/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_8001877C at 0x8001877C
 */
// GPU_SyncWait7



void GPU_SyncWait7(int param_1)

{
  undefined4 in_v0;
  
  DAT_80025688 = in_v0;
  do {
    DAT_80025684 = **(int **)(param_1 + 0x5680);
  } while (DAT_80025684 != **(int **)(param_1 + 0x5680));
  return;
}
