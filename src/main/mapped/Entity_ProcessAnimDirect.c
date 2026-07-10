/**
 * @brief Directly calls Entity_ProcessAnimFrame with entity[0x44] as parameter
 * @note Original: func_800328BC at 0x800328BC
 */
// Entity_ProcessAnimDirect



void FUN_800328bc(int param_1,undefined4 param_2)

{
  FUN_80027a4c(param_2,*(undefined4 *)(param_1 + 0x44));
  return;
}
