/**
 * @brief Draws UI element from queue at 0x800BF800 by index
 * @note Original: func_8004ED94 at 0x8004ED94
 */
// UI_DrawElement



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UI_DrawElement(int param_1,u8 param_2)

{
  UI_DrawPanel2(_DAT_800bf800 + (uint)*(u16 *)(((param_1 << 0x10) >> 0xf) + _DAT_800bf7fc),
               0xffffffff,param_2);
  return;
}
