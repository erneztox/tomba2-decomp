/**
 * @brief Moves save menu cursor to previous item (entity[0x1F]--, entity[0x1E]--)
 * @note Original: func_800399C0 at 0x800399C0
 */
// Save_CursorPrev



undefined4 FUN_800399c0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1f);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x1f) = cVar1 + -1;
    if ((byte)(cVar1 - 1U) < *(byte *)(param_1 + 0x1e)) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) - 1;
    }
    return 1;
  }
  return 0;
}
