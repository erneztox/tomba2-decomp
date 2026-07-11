/**
 * @brief Sets global flag at 0x800BF84C from entity script data
 * @note Original: func_80043BB0 at 0x80043BB0
 */
// Entity_SetFlag84C



void FUN_80043bb0(int param_1)

{
  FUN_80043b88(param_1,*(u8 *)(param_1 + 0x72));
  return;
}
