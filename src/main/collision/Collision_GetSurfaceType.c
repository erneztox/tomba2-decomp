/**
 * @brief Reads collision surface type byte from geometry response data
 * @note Original: func_8004960C at 0x8004960C
 */
// Collision_GetSurfaceType



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8004960c(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (uint)_DAT_1f8001e4->action_state;
  }
  else {
    uVar1 = (uint)(*(ushort *)(_DAT_1f8001e4 + 6) >> 8);
  }
  param_1->collision_dir =
       *(undefined1 *)(_DAT_1f8001d4 + (uint)*(ushort *)(_DAT_1f8001e4 + 2) * 8 + uVar1 * 8);
  return 1;
}
