/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800187C4 at 0x800187C4
 */
// GPU_FinishSync



void GPU_FinishSync(int param_1,int param_2)

{
  param_2 = param_2 << 0xf;
  do {
    if (param_1 <= DAT_800267b4) {
      return;
    }
    param_2 = param_2 + -1;
  } while (param_2 != -1);
  GPU_FinishSync(&DAT_800104a4);
  GPU_FinishSync(0);
  GPU_FinishSync(3,0);
  GPU_FinishSync();
  return;
}
