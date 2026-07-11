/**
 * @brief Initializes drawing environment: sets display area, clear color, enable flags
 * @note Original: func_80082C68 at 0x80082C68
 */
// GPU_InitDrawEnv



void GPU_InitDrawEnv(s32 param_1)

{
  *DAT_800a5aa8 = 0x4000002;
  *DAT_800a5aac = param_1;
  *DAT_800a5ab0 = 0;
  *DAT_800a5ab4 = 0x1000401;
  return;
}
