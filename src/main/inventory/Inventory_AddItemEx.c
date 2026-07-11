/**
 * @brief Adds item to inventory via Inventory_AddItem + UI_DrawItemIcon(param, 2)
 * @note Original: func_8004D4C4 at 0x8004D4C4
 */
// Inventory_AddItemEx



void Inventory_AddItemEx(s32 param_1)

{
  Inventory_AddItem();
  UI_DrawItemIcon(param_1,2);
  return;
}
