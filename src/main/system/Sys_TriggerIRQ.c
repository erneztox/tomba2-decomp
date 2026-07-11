/**
 * @brief Triggers interrupt request: writes code to 0x1F800138, calls 0x80080880
 * @note Original: func_80051F80 at 0x80051F80
 */
// Sys_TriggerIRQ



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80051f80(undefined2 param_1)

{
  undefined2 *puVar1;
  
  puVar1 = _DAT_1f800138;
  _DAT_1f800138->flags = param_1;
  *puVar1 = 1;
  FUN_80080880(0xff000000);
  return;
}
