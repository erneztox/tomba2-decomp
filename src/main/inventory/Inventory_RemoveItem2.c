/**
 * @brief Removes item variant: uses mode 4 instead of mode 1 for UI update
 * @note Original: func_8004D688 at 0x8004D688
 */
// Inventory_RemoveItem2



void Inventory_RemoveItem2(int param_1,s8 param_2)

{
  (&DAT_800bfab4)[param_1] = (&DAT_800bfab4)[param_1] - param_2;
  UI_DrawItemIcon(param_1,4);
  UI_InventorySlot(param_1);
  return;
}
