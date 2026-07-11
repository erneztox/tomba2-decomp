/**
 * @brief Entity item init behavior: sets entity[0x18] mode based on param
 * @note Original: func_8004B150 at 0x8004B150
 */
// Entity_Behavior_InitItem



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004b150(undefined1 *param_1,int param_2)

{
  if (param_1->behavior_state == '\0') {
    param_1->behavior_state = 1;
    *param_1 = 1;
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
    if ((_DAT_1f80017c & 0x1f) == 0) {
      param_1->sprite_flags = param_1->sprite_flags | 0x20;
      return;
    }
    param_1->sprite_flags = param_1->sprite_flags & 0xdf;
    return;
  }
  if ((_DAT_1f80017c & 0x1f) == 0) {
    param_1->sprite_flags = param_1->sprite_flags | 2;
    return;
  }
  param_1->sprite_flags = param_1->sprite_flags & 0xfd;
  return;
}
