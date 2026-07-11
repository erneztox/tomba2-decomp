/**
 * @brief Clears all 3 menu item slots by calling FUN_80036a14 with modes 0,1,2
 * @note Original: func_80036AE8 at 0x80036AE8
 */
// Menu_ClearItems



void FUN_80036ae8(s32 param_1)

{
  FUN_80036a14(param_1,0);
  FUN_80036a14(param_1,1);
  FUN_80036a14(param_1,2);
  return;
}
