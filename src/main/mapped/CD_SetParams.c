/**
 * @brief CD param setter: stores 3 params at 0x80102720/FC/1C
 * @note Original: func_8008D0F0 at 0x8008D0F0
 */
// CD_SetParams



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8008d0f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  _DAT_80102720 = param_1;
  _DAT_801026fc = param_2;
  _DAT_8010271c = param_3;
  return;
}
