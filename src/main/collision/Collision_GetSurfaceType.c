/**
 * @brief Reads collision surface type u8 from geometry response data
 * @note Original: func_8004960C at 0x8004960C
 */
// Collision_GetSurfaceType



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Collision_GetSurfaceType(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = (uint)_DAT_1f8001e4->action_state;
  }
  else {
    uVar1 = (uint)(*(u16 *)(_DAT_1f8001e4 + 6) >> 8);
  }
  param_1->collision_dir =
       *(u8 *)(_DAT_1f8001d4 + (uint)*(u16 *)(_DAT_1f8001e4 + 2) * 8 + uVar1 * 8);
  return 1;
}
