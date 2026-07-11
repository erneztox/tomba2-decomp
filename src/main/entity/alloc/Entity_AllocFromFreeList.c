/**
 * @brief Allocs entity from free list at _g_EntityPoolCount, pops head, returns pointer
 * @note Original: func_8007AAE8 at 0x8007AAE8
 */
// Entity_AllocFromFreeList



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 Entity_AllocFromFreeList(void)

{
  s32 uVar1;
  
  if (_g_EntityPoolCount < 1) {
    return 0;
  }
  _g_EntityPoolCount = _g_EntityPoolCount + -1;
  uVar1 = *_DAT_800e7e74;
  _DAT_800e7e74 = _DAT_800e7e74 + 1;
  return uVar1;
}
