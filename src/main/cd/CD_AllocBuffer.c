/**
 * @brief CD buffer alloc: assigns 0x20-u8 slot from _DAT_80102728 pool
 * @note Original: func_8008CDC0 at 0x8008CDC0
 */
// CD_AllocBuffer



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8008cdc0(void)

{
  s16 *puVar1;
  
  puVar1 = (s16 *)(_DAT_80102728 + _DAT_80102710 * 0x20);
  *puVar1 = 2;
  _DAT_80104b68 = *(s32 *)(puVar1 + 0xe);
  _DAT_80104b6c = *(s32 *)(puVar1 + 4);
  _DAT_80102710 = _DAT_8010270c;
  if (_DAT_80104b78 != (code *)0x0) {
    (*_DAT_80104b78)();
  }
  _DAT_80102704 = 0;
  return;
}
