/**
 * @brief CD send command with flags: calls CD_SendCmdRetry2(0xE, data, 0)
 * @note Original: func_8008CC30 at 0x8008CC30
 */
// CD_SendCmdFlags



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8008cc30(uint param_1)

{
  u8 local_10->counter1;
  
  local_10->type = (u8)param_1;
  FUN_80089bac(0xe,local_10,0);
  if ((param_1 & 0x100) != 0) {
    _DAT_80102760 = (uint)((param_1 & 0x20) == 0);
    FUN_80089fc8(FUN_8008cdc0);
    FUN_80089b98(FUN_8008ccb4);
  }
  FUN_80089bac(0x1b,0,0);
  return;
}
