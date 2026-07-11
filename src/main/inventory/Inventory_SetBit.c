/**
 * @brief Sets bit flag in inventory bitfield at 0x800BFDAC for item ID
 * @note Original: func_8004D79C at 0x8004D79C
 */
// Inventory_SetBit



void Inventory_SetBit(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  iVar2 = (int)(s16)(iVar1 >> 3);
  *(u8 *)(iVar2 + -0x7ff4024c) =
       *(u8 *)(iVar2 + -0x7ff4024c) |
       (u8)(1 << ((param_1 + (iVar1 >> 3) * -8) * 0x10000 >> 0x10 & 0x1fU));
  return;
}
