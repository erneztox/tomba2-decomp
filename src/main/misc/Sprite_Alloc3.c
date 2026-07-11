/**
 * @brief Sprite allocator variant 3: different counter at _DAT_1f80015c
 * @note Original: func_80077EFC at 0x80077EFC
 */
// Sprite_Alloc3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Sprite_Alloc3(s32 param_1)

{
  s32 *puVar1;
  
  if (_DAT_1f80015c < 0x1c) {
    _DAT_1f80015c = _DAT_1f80015c + 1;
    puVar1 = (s32 *)(_DAT_1f800154 + -4);
    _DAT_1f800154 = _DAT_1f800154 + -4;
    *puVar1 = param_1;
  }
  return;
}
