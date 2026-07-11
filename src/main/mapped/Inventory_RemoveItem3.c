/**
 * @brief Removes item from inventory: decrements count, updates UI display
 * @note Original: func_8004D650 at 0x8004D650
 */
// Inventory_RemoveItem3



void FUN_8004d650(int param_1,char param_2)

{
  (&DAT_800bfab4)[param_1] = (&DAT_800bfab4)[param_1] - param_2;
  FUN_8004d514();
  return;
}
