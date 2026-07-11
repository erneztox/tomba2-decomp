/**
 * @brief Checks if entity[0x148] is set OR input state flag is active
 * @note Original: func_800557EC at 0x800557EC
 */
// Entity_CheckInputActive



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 Entity_CheckInputActive(int param_1)

{
  s32 uVar1;
  
  if ((*(s8*)(param_1 + 0x148) != '\0') || (uVar1 = 1, (_g_PadState & _g_InputMask) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}
