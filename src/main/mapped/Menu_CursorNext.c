/**
 * @brief Advances menu cursor to next item, wraps at max from entity[0x21]
 * @note Original: func_800386C0 at 0x800386C0
 */
// Menu_CursorNext



undefined4 FUN_800386c0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x1f) + 1;
  if ((int)(uint)*(byte *)(param_1 + 0x1f) < (int)(*(byte *)(param_1 + 0x21) - 1)) {
    *(char *)(param_1 + 0x1f) = (char)uVar1;
    if (*(byte *)(param_1 + 0x1e) + 6 <= (uVar1 & 0xff)) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) + 1;
    }
    return 1;
  }
  return 0;
}
