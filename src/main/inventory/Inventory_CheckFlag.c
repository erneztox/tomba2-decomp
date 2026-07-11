/**
 * @brief Checks inventory bit flag at 0x800BFD94 for item ID
 * @note Original: func_8004D868 at 0x8004D868
 */
// Inventory_CheckFlag



uint FUN_8004d868(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = param_1 + 7;
  }
  return (uint)*(u8 *)((s16)(iVar1 >> 3) + -0x7ff4024c) &
         1 << ((param_1 + (iVar1 >> 3) * -8) * 0x10000 >> 0x10 & 0x1fU);
}
