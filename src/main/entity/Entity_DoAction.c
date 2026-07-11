/**
 * @brief Performs action from script: calls Entity_SetState with entity[0x72] param
 * @note Original: func_8004266C at 0x8004266C
 */
// Entity_DoAction



s32 Entity_DoAction(int param_1)

{
  Entity_SetState(*(u8 *)(param_1 + 0x72));
  return 1;
}
