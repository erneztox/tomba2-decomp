/**
 * @brief Advances menu cursor to next item, wraps at max from entity[0x21]
 * @note Original: func_800386C0 at 0x800386C0
 */
// Menu_CursorNext



s32 Menu_CursorNext(int param_1)

{
  uint uVar1;
  
  uVar1 = *(u8 *)(param_1 + 0x1f) + 1;
  if ((int)(uint)*(u8 *)(param_1 + 0x1f) < (int)(*(u8 *)(param_1 + 0x21) - 1)) {
    *(s8*)(param_1 + 0x1f) = (char)uVar1;
    if (*(u8 *)(param_1 + 0x1e) + 6 <= (uVar1 & 0xff)) {
      *(u8 *)(param_1 + 0x1e) = *(u8 *)(param_1 + 0x1e) + 1;
    }
    return 1;
  }
  return 0;
}
