/**
 * @brief Sprite allocator variant 2: different counter at _DAT_1f800144
 * @note Original: func_80077E7C at 0x80077E7C
 */
// Sprite_Alloc2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80077e7c(s32 param_1)

{
  s32 *puVar1;
  
  if (_DAT_1f800144 < 0x18) {
    _DAT_1f800144 = _DAT_1f800144 + 1;
    puVar1 = (s32 *)(_DAT_1f80013c + -4);
    _DAT_1f80013c = _DAT_1f80013c + -4;
    *puVar1 = param_1;
  }
  return;
}
