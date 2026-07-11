/**
 * @brief Builds free list: clears 0x208 blocks of 0x44 bytes, links them backward, sets count
 * @note Original: func_8007B0F0 at 0x8007B0F0
 */
// Entity_InitFreeList



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007b0f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = -0x7ff0d8c0;
  do {
    FUN_8009a420(iVar3,0,0x44);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x44;
  } while (iVar2 < 0x208);
  iVar2 = -0x7ff04ee4;
  _DAT_800e7e74 = &g_EntityPoolFree;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    piVar1 = (int *)(_DAT_800e7e74 + -4);
    _DAT_800e7e74 = _DAT_800e7e74 + -4;
    *piVar1 = iVar2;
    iVar2 = iVar2 + -0x44;
  } while (iVar3 < 0x208);
  _g_EntityPoolCount = 0x208;
  return;
}
