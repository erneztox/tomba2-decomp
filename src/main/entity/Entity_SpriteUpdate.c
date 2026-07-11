/**
 * @brief Entity sprite updater: entity->state=1, processes draw commands
 * @note Original: func_8007DA50 at 0x8007DA50
 */
// Entity_SpriteUpdate



#include "tomba.h"
void FUN_8007da50(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    FUN_8007d594(param_1);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(u8 *)(param_1 + 0x18) =
           *(u8 *)(*(s16 *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c) + 3);
      if (param_1->sprite_flags != -1) {
        param_1->sprite_flags =
             *(u8 *)(*(s16 *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c) + 2);
      }
      iVar3 = *(int *)(param_1 + 0x50) +
              (uint)*(u16 *)(*(s16 *)(param_1 + 0x5e) * 4 + *(int *)(param_1 + 0x4c));
      param_1->anim_id = param_1->anim_id | 1;
      param_1->parent = iVar3;
      param_1->script_ptr = iVar3;
      FUN_8007d0d0(param_1);
      param_1->timer2 = 0;
      if ((DAT_800bf84b == '\0') && (param_1->sub_type < 4)) {
        FUN_8007c940(param_1);
        *(s32 *)(param_1 + 0x80) = *(s32 *)(param_1 + 0x54);
        *(s32 *)(param_1 + 0x84) = *(s32 *)(param_1 + 0x58);
        param_1->rot_z = 8;
        param_1->rot_x = 0x9c;
        if (param_1->rot_y < 0x80) {
          sVar2 = -param_1->target_rot_y;
        }
        else {
          sVar2 = 0x100;
        }
        param_1->rot_y = sVar2;
        param_1->draw_x = 0x10;
        param_1->action_state = 0;
        param_1->behavior_state = 0x5a;
      }
      else {
        param_1->behavior_state = 1;
        param_1->script_ptr = param_1->script_ptr + 1;
      }
      DAT_800bf84b = '\x01';
      g_EventInput = g_EventInput | 2;
      param_1->state = param_1->state + '\x01';
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    g_EventInput = g_EventInput & 0xfd;
    FUN_8007a624(param_1);
  }
  return;
}
