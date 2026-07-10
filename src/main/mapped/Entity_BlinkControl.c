/**
 * @brief Toggles blink/flash bits on entity[0xD] based on frame counter for transparency effect
 * @note Original: func_8004B374 at 0x8004B374
 */
// Entity_BlinkControl



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004b374(int param_1,int param_2)

{
  if (param_2 != 0) {
    if ((_DAT_1f80017c & 0x1f) == 0) {
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
      return;
    }
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
    return;
  }
  if ((_DAT_1f80017c & 0x1f) == 0) {
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 0x20;
    return;
  }
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xdf;
  return;
}
