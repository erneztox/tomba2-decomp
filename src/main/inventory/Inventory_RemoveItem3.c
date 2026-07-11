/**
 * @brief Removes item from inventory: decrements count, updates UI display
 * @note Original: func_8004D650 at 0x8004D650
 */
// Inventory_RemoveItem3



void Inventory_RemoveItem3(int param_1,s8 param_2)

{
  (&DAT_800bfab4)[param_1] = (&DAT_800bfab4)[param_1] - param_2;
  UI_InventorySlot();
  return;
}
