/**
 * @brief Sets global flag at 0x800BF84C to boolean value from param
 * @note Original: func_80043B88 at 0x80043B88
 */
// Game_SetFlag84C



s32 Game_SetFlag84C(s32 param_1,s8 param_2)

{
  DAT_800bf84c = param_2 != '\0';
  return 1;
}
