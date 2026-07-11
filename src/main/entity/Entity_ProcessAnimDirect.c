/**
 * @brief Directly calls Entity_ProcessAnimFrame with entity[0x44] as parameter
 * @note Original: func_800328BC at 0x800328BC
 */
// Entity_ProcessAnimDirect



void Entity_ProcessAnimDirect(int param_1,s32 param_2)

{
  Entity_ProcessAnimFrame(param_2,*(s32 *)(param_1 + 0x44));
  return;
}
