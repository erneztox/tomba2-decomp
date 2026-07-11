/**
 * @brief Starts SPU playback via 0x80090750 with flag 1
 * @note Original: func_80090980 at 0x80090980
 */
// SPU_Start



void FUN_80090980(void)

{
  FUN_80090750(1);
  return;
}
