/**
 * @brief UI inventory drawer: renders inventory items with icons
 * @note Original: func_8004E808 at 0x8004E808
 */
// UI_InventoryDraw



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8004e808(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (param_1->behavior_state == '\0') {
      if (DAT_800e7ec6 == 'r') {
        param_1->behavior_state = 1;
      }
    }
    else if (param_1->behavior_state == '\x01') {
      FUN_8004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
      if ((DAT_800e7ff4 & 4) == 0) {
        sVar2 = *(s16 *)(param_1 + 0x32) + -100;
      }
      else {
        sVar2 = *(s16 *)(param_1 + 0x32) + -0x46;
      }
      *(s16 *)(param_1 + 0x32) = sVar2;
      param_1->flags = 1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      param_1->state = 1;
      param_1->render_flags = 0x10;
      param_1->sprite_flags = 0;
      param_1->sub_anim_id = 0;
      param_1->target_rot_y = 0;
      param_1->draw_y = 0;
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007a624(param_1);
  }
  return;
}
