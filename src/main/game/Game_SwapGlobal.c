/**
 * @brief Global swapper: saves old DAT_8010621c, sets new, returns old
 * @note Original: func_8009D044 at 0x8009D044
 */
// Game_SwapGlobal



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8009d044(s32 param_1)

{
  s32 uVar1;
  
  uVar1 = _DAT_8010621c;
  _DAT_8010621c = param_1;
  return uVar1;
}
