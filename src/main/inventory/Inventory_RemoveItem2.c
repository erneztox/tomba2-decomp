/**
 * @brief Removes item variant: uses mode 4 instead of mode 1 for UI update
 * @note Original: func_8004D688 at 0x8004D688
 */
// Inventory_RemoveItem2



void FUN_8004d688(int param_1,char param_2)

{
  (&DAT_800bfab4)[param_1] = (&DAT_800bfab4)[param_1] - param_2;
  FUN_8004ed0c(param_1,4);
  FUN_8004d514(param_1);
  return;
}
