/**
 * @brief Checks game area flag: returns 1 if area is 0 or 5 in specific game mode
 * @note Original: func_80036D90 at 0x80036D90
 */
// Game_CheckArea



undefined4 FUN_80036d90(int param_1)

{
  if ((DAT_800bf873 != '\0') && ((param_1 == 0 || (param_1 == 5)))) {
    return 1;
  }
  return 0;
}
