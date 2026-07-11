/**
 * @brief Sets global flag at 0x800BF84C to boolean value from param
 * @note Original: func_80043B88 at 0x80043B88
 */
// Game_SetFlag84C



undefined4 FUN_80043b88(undefined4 param_1,char param_2)

{
  DAT_800bf84c = param_2 != '\0';
  return 1;
}
