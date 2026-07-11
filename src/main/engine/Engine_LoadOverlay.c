/**
 * @brief Simple overlay loader: param=5 -> 0x13, else 0x14, calls Sys_OverlayDispatch
 * @note Original: func_80075024 at 0x80075024
 */
// Engine_LoadOverlay



#include "tomba.h"
void Engine_LoadOverlay(s8 param_1)

{
  u8 uVar1;
  
  uVar1 = 0x14;
  if (param_1 == '\x05') {
    uVar1 = 0x13;
  }
  Sys_OverlayDispatch(uVar1,1);
  DAT_1f80023b = uVar1;
  DAT_800be22b = 0;
  return;
}
