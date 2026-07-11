/**
 * @brief Checks if entity[0x148] is set OR input state flag is active
 * @note Original: func_800557EC at 0x800557EC
 */
// Entity_CheckInputActive



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_800557ec(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x148) != '\0') || (uVar1 = 1, (_DAT_800e7e68 & _DAT_1f800172) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}
