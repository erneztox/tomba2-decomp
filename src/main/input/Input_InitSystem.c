/**
 * @brief Initializes input/pad system: resets flag, calls Pad_InitReset, Audio_InitSPU, Audio_ReleaseChannel
 * @note Original: func_80074BC4 at 0x80074BC4
 */
// Input_InitSystem



void Input_InitSystem(void)

{
  g_PadFlag = 0;
  Pad_InitReset();
  Audio_InitSPU();
  Audio_ReleaseChannel();
  return;
}
