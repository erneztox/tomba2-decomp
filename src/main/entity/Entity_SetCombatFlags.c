/**
 * @brief Sets combat flags: entity->combat_flag + 3 globals at 0x800BF830/31/43
 * @note Original: func_80070724 at 0x80070724
 */
// Entity_SetCombatFlags



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80070724(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  _DAT_1f800214->combat_flag = param_1;
  DAT_800bf830 = param_2;
  DAT_800bf831 = param_3;
  DAT_800bf843 = 0;
  return;
}
