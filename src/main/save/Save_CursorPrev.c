/**
 * @brief Moves save menu cursor to previous item (entity[0x1F]--, entity[0x1E]--)
 * @note Original: func_800399C0 at 0x800399C0
 */
// Save_CursorPrev



s32 FUN_800399c0(int param_1)

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
