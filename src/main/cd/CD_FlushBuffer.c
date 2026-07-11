/**
 * @brief CD buffer flush: iterates DAT_800ac66c, clears active entries
 * @note Original: func_80097D90 at 0x80097D90
 */
// CD_FlushBuffer



void FUN_80097d90(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_800ac664) {
    puVar1 = DAT_800ac66c;
    do {
      if ((*puVar1 & 0x40000000) != 0) break;
      iVar2 = iVar2 + 1;
      if (*puVar1 == param_1) {
        *puVar1 = param_1 | 0x80000000;
        break;
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 < DAT_800ac664);
  }
  FUN_80097a90();
  return;
}
