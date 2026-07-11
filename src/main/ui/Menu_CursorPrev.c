/**
 * @brief Moves menu cursor to previous item, wraps at 0
 * @note Original: func_80038758 at 0x80038758
 */
// Menu_CursorPrev



s32 FUN_80038758(int param_1)

{
  s8 cVar1;
  
  cVar1 = *(s8*)(param_1 + 0x1f);
  if (cVar1 != '\0') {
    *(s8*)(param_1 + 0x1f) = cVar1 + -1;
    if ((u8)(cVar1 - 1U) < *(u8 *)(param_1 + 0x1e)) {
      *(u8 *)(param_1 + 0x1e) = *(u8 *)(param_1 + 0x1e) - 1;
    }
    return 1;
  }
  return 0;
}
