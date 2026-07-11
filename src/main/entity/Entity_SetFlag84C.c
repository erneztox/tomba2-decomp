/**
 * @brief Sets global flag at 0x800BF84C from entity script data
 * @note Original: func_80043BB0 at 0x80043BB0
 */
// Entity_SetFlag84C



void Entity_SetFlag84C(int param_1)

{
  Game_SetFlag84C(param_1,*(u8 *)(param_1 + 0x72));
  return;
}
