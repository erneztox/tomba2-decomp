/**
 * @brief Performs action from script: calls FUN_800708b4 with entity[0x72] param
 * @note Original: func_8004266C at 0x8004266C
 */
// Entity_DoAction



s32 FUN_8004266c(int param_1)

{
  FUN_800708b4(*(u8 *)(param_1 + 0x72));
  return 1;
}
