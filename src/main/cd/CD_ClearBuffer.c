/**
 * @brief Clears CD buffer: zeros param_2 entries of 0x20 bytes at DAT_80102728
 * @note Original: func_8008CFF0 at 0x8008CFF0
 */
// CD_ClearBuffer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CD_ClearBuffer(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = uVar2 + param_1;
      uVar2 = uVar2 + 1;
      *(s32 *)(_DAT_80102728 + iVar1 * 0x20) = 0;
    } while (uVar2 < param_2);
  }
  return;
}
