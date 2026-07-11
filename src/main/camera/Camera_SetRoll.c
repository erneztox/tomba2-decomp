/**
 * @brief Sets camera roll angle from 4-byte data
 * @note Original: func_8006D950 at 0x8006D950
 */
// Camera_SetRoll



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006d950(undefined4 param_1,int param_2)

{
  _DAT_1f8000e0 = *(undefined4 *)(param_2 + 4);
  return;
}
