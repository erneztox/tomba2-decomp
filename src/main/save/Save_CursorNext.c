/**
 * @brief Advances save menu cursor with step of 5 (entity[0x1E]+=5)
 * @note Original: func_80039978 at 0x80039978
 */
// Save_CursorNext



s32 Save_CursorNext(int param_1)

{
  uint uVar1;
  
  uVar1 = *(u8 *)(param_1 + 0x1f) + 1;
  if ((int)(uint)*(u8 *)(param_1 + 0x1f) < (int)(*(u8 *)(param_1 + 0x23) - 1)) {
    *(s8*)(param_1 + 0x1f) = (char)uVar1;
    if (*(u8 *)(param_1 + 0x1e) + 5 <= (uVar1 & 0xff)) {
      *(u8 *)(param_1 + 0x1e) = *(u8 *)(param_1 + 0x1e) + 1;
    }
    return 1;
  }
  return 0;
}
