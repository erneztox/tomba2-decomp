/**
 * @brief Clears list of 12 u16 entries to 0xFFFF at given pointer
 * @note Original: func_8004EE2C at 0x8004EE2C
 */
// UI_ClearList



void UI_ClearList(s32 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0xb;
  iVar1 = (int)param_1 + 0x16;
  do {
    *(s16 *)(iVar1 + 4) = 0xffff;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + -2;
  } while (-1 < iVar2);
  *param_1 = 0;
  return;
}
