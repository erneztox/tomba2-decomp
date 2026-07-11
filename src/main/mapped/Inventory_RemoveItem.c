/**
 * @brief Removes item from inventory: decrements count, updates UI
 * @note Original: func_8004D604 at 0x8004D604
 */
// Inventory_RemoveItem



void FUN_8004d604(int param_1,char param_2)

{
  (&DAT_800bfab4)[param_1] = (&DAT_800bfab4)[param_1] - param_2;
  FUN_8004ed0c(param_1,1);
  FUN_8004d514(param_1);
  return;
}
