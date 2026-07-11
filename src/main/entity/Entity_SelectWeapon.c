/**
 * @brief Selects weapon/item by index: calls Inventory_AddItemEx and updates globals
 * @note Original: func_8004B4B0 at 0x8004B4B0
 */
// Entity_SelectWeapon



void Entity_SelectWeapon(s32 param_1)

{
  Inventory_AddItemEx(param_1,1);
  g_SpriteParam1 = (char)param_1;
  DAT_800e7eec = (char)param_1;
  return;
}
