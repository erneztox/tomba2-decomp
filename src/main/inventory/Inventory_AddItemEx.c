/**
 * @brief Adds item to inventory via FUN_8004d338 + FUN_8004ed0c(param, 2)
 * @note Original: func_8004D4C4 at 0x8004D4C4
 */
// Inventory_AddItemEx



void FUN_8004d4c4(s32 param_1)

{
  FUN_8004d338();
  FUN_8004ed0c(param_1,2);
  return;
}
