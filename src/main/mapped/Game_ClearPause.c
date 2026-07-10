/**
 * @brief Clears pause state: resets entity flag and global pause variable
 * @note Original: func_800269FC at 0x800269FC
 */
// Game_ClearPause



void FUN_800269fc(int param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  DAT_1f800137 = 0;
  return;
}
