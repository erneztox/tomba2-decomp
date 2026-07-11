/**
 * @brief Clears a menu slot: zeros 0x38-u8 entry at DAT_801054e5 by index
 * @note Original: func_80094B10 at 0x80094B10
 */
// Menu_ClearSlot



void Menu_ClearSlot(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xff) * 0x38;
  (&DAT_801054e5)[iVar1] = 0;
  *(s16 *)(iVar1 + -0x7fefab38) = 0;
  *(s16 *)(iVar1 + -0x7fefab34) = 0;
  return;
}
