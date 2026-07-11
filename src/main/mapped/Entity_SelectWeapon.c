/**
 * @brief Selects weapon/item by index: calls FUN_8004d4c4 and updates globals
 * @note Original: func_8004B4B0 at 0x8004B4B0
 */
// Entity_SelectWeapon



void FUN_8004b4b0(undefined4 param_1)

{
  FUN_8004d4c4(param_1,1);
  DAT_800bf88c = (char)param_1;
  DAT_800e7eec = (char)param_1;
  return;
}
