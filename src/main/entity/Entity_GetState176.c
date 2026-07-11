/**
 * @brief Returns entity[0x176] + 1 as state value
 * @note Original: func_800535D4 at 0x800535D4
 */
// Entity_GetState176



int FUN_800535d4(int param_1)

{
  return *(byte *)(param_1 + 0x176) + 1;
}
