/**
 * @brief UI dialog updater: entity->state=1, processes dialog text
 * @note Original: func_8004DE04 at 0x8004DE04
 */
// UI_DialogUpdate



#include "tomba.h"
void FUN_8004de04(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    if (param_1->behavior_state == '\0') {
      iVar3 = FUN_8004daec(param_1);
      if (iVar3 != 0) {
        param_1->behavior_state = param_1->behavior_state + '\x01';
      }
    }
    else if (param_1->behavior_state == '\x01') {
      FUN_8004dd90(param_1);
    }
    if (param_1->draw_x == 0x59) {
      FUN_80026100(g_ItemFlag);
    }
    param_1->flags = 1;
    DAT_800ed061 = DAT_800ed061 | 2;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      sVar2 = param_1->draw_x;
      param_1->render_flags = 0x10;
      param_1->state = 1;
      param_1->sprite_flags = 0;
      param_1->sub_anim_id = 0;
      param_1->target_rot_y = 0;
      param_1->draw_y = 0;
      if (sVar2 != 0x5a) {
        if (0x5a < sVar2) {
          if (sVar2 == 0x5b) {
            param_1->timer2 = 8;
            return;
          }
          if (sVar2 != 0x5c) {
            return;
          }
          param_1->timer2 = 4;
          return;
        }
        if (sVar2 != 0x59) {
          return;
        }
      }
      param_1->timer2 = 0x10;
    }
  }
  else if (bVar1 == 2) {
    param_1->state = STATE_DEAD;
    g_CurrentOverlay = 0;
    DAT_800ed061 = DAT_800ed061 & 0xfd;
  }
  else if (bVar1 == 3) {
    FUN_8007a624(param_1);
  }
  return;
}
