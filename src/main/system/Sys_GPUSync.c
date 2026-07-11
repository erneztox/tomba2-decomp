/**
 * @brief GPU sync wrapper: calls GPU sync and returns status
 * @note Original: func_8001DB38 at 0x8001DB38
 */
// Sys_GPUSync



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8001db38(void)

{
  FUN_8001d940(_DAT_1f800138);
  if (_DAT_1f800138->sprite_cmd != '\0') {
    DAT_1f80019b = 1;
  }
  FUN_80051fb4();
  return;
}
