/**
 * @brief Adds score points: increments total + shows score popup on screen
 * @note Original: func_8004B3F4 at 0x8004B3F4
 */
// Game_AddScore



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8004b3f4(s32 param_1,int param_2)

{
  _DAT_800bf874 = _DAT_800bf874 + param_2;
  FUN_80071b44(param_1,param_2,0);
  return 1;
}
