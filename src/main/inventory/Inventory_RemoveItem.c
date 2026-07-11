/**
 * @brief Removes item from inventory: decrements count, updates UI
 * @note Original: func_8004D604 at 0x8004D604
 */
// Inventory_RemoveItem



void Inventory_RemoveItem(int param_1,s8 param_2)

{
  (&DAT_800bfab4)[param_1] = (&DAT_800bfab4)[param_1] - param_2;
  UI_DrawItemIcon(param_1,1);
  UI_InventorySlot(param_1);
  return;
}
