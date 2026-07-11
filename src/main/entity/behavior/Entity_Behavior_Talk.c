/**
 * @brief Entity talk behavior: entity->behavior_state=0->1, inits dialog via FUN_80041194
 * @note Original: func_8004B208 at 0x8004B208
 */
// Entity_Behavior_Talk



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004b208(u8 *param_1,int param_2)

{
  u8 bVar1;
  
  if (param_1->behavior_state == '\0') {
    param_1->behavior_state = 1;
    *param_1 = 1;
    FUN_80041194(param_1,(int)param_1->bounds_max_y - (int)param_1->bounds_min_y,0,0);
    if (param_2 == 0) {
      param_1[0x18] = 0;
    }
    else {
      param_1[0x18] = 0xff;
      param_1[0x19] = 0xff;
      param_1[0x1a] = 0xff;
    }
  }
  if (param_2 == 0) {
    if ((_g_FrameCounter2 & 0x1f) == 0) {
      bVar1 = param_1->sprite_flags | 0x20;
    }
    else {
      bVar1 = param_1->sprite_flags & 0xdf;
    }
  }
  else if ((_g_FrameCounter2 & 0x1f) == 0) {
    bVar1 = param_1->sprite_flags | 2;
  }
  else {
    bVar1 = param_1->sprite_flags & 0xfd;
  }
  param_1->sprite_flags = bVar1;
  return;
}
