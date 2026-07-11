/**
 * @brief Clears UI element structure (0x8C bytes) with memset, sets terminator bytes
 * @note Original: func_8004EE50 at 0x8004EE50
 */
// UI_ClearElement



void FUN_8004ee50(int param_1)

{
  FUN_8009a420(param_1,0,0x8c);
  *(u8 *)(param_1 + 0x3d) = 0xff;
  *(u8 *)(param_1 + 0x10) = 0xff;
  return;
}
