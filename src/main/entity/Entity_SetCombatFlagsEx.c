/**
 * @brief Extended combat flags: calls SetCombatFlags + 3 extra params at 0x800BF824/28
 * @note Original: func_8007074C at 0x8007074C
 */
// Entity_SetCombatFlagsEx



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007074c(u8 param_1,u8 param_2,u8 param_3,s32 param_4,
                 s32 param_5,s32 param_6)

{
  FUN_80070724(param_1,param_2,param_3);
  _DAT_800bf824 = param_4;
  _DAT_800bf828 = param_5;
  _DAT_800bf82c = param_6;
  return;
}
