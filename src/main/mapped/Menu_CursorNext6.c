/**
 * @brief Advances menu cursor up to 6 positions, returns true if wrapped
 * @note Original: func_80038708 at 0x80038708
 */
// Menu_CursorNext6



bool FUN_80038708(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((int)(*(byte *)(param_1 + 0x21) - 1) <= (int)(uint)*(byte *)(param_1 + 0x1f)) {
      return iVar1 != 0;
    }
    iVar1 = iVar1 + 1;
    *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) + 1;
    *(char *)(param_1 + 0x1e) = *(char *)(param_1 + 0x1e) + '\x01';
  } while (iVar1 < 6);
  return true;
}
