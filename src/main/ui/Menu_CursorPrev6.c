/**
 * @brief Moves menu cursor back up to 6 positions, returns true if wrapped
 * @note Original: func_80038794 at 0x80038794
 */
// Menu_CursorPrev6



s32 FUN_80038794(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(s8*)(param_1 + 0x1f) == '\0') {
      return iVar1 != 0;
    }
    *(s8*)(param_1 + 0x1f) = *(s8*)(param_1 + 0x1f) + -1;
    if (*(s8*)(param_1 + 0x1e) != '\0') {
      *(s8*)(param_1 + 0x1e) = *(s8*)(param_1 + 0x1e) + -1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return true;
}
