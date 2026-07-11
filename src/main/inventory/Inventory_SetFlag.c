/**
 * @brief Sets a bit flag in inventory bitfield tables based on item ID and category
 * @note Original: func_8004D714 at 0x8004D714
 */
// Inventory_SetFlag



void Inventory_SetFlag(int param_1,s8 param_2)

{
  int iVar1;
  s16 sVar2;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  param_1 = param_1 + (iVar1 >> 3) * -8;
  sVar2 = (s16)(iVar1 >> 3);
  if (param_2 == '\0') {
    *(u8 *)(sVar2 + -0x7ff4034c) =
         *(u8 *)(sVar2 + -0x7ff4034c) | (u8)(1 << (param_1 * 0x10000 >> 0x10 & 0x1fU));
    return;
  }
  *(u8 *)(sVar2 + -0x7ff402cc) =
       *(u8 *)(sVar2 + -0x7ff402cc) | (u8)(1 << (param_1 * 0x10000 >> 0x10 & 0x1fU));
  return;
}
