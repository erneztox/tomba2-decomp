/**
 * @brief Advances save menu cursor with step of 5 (entity[0x1E]+=5)
 * @note Original: func_80039978 at 0x80039978
 */
// Save_CursorNext



undefined4 FUN_80039978(int param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x1f) + 1;
  if ((int)(uint)*(byte *)(param_1 + 0x1f) < (int)(*(byte *)(param_1 + 0x23) - 1)) {
    *(char *)(param_1 + 0x1f) = (char)uVar1;
    if (*(byte *)(param_1 + 0x1e) + 5 <= (uVar1 & 0xff)) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) + 1;
    }
    return 1;
  }
  return 0;
}
