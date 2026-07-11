/**
 * @brief Checks if area is unlocked via table at 0x800A24E4
 * @note Original: func_80036DC4 at 0x80036DC4
 */
// Game_CheckUnlock



s32 FUN_80036dc4(int param_1)

{
  s32 uVar1;
  
  if ((g_SubState == '\0') || (uVar1 = 1, (&DAT_800a24e4)[param_1] != '\0')) {
    uVar1 = 0;
  }
  return uVar1;
}
