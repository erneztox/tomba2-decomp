/**
 * @brief Entity jump state variant 4: entity->action_state=1, aerial
 * @note Original: func_8004B528 at 0x8004B528
 */
// Entity_State_Jump4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_8004b528(int param_1,int param_2)

{
  u8 bVar1;
  s16 sVar2;
  s32 uVar3;
  int iVar4;
  
  bVar1 = param_1->action_state;
  if (bVar1 == 1) {
    if (param_1->rot_z < 0x400) {
      param_1->rot_z = param_1->rot_z + 0x40;
    }
    FUN_800517f8(param_1);
    if (param_1->timer1 == 0xe) {
      iVar4 = FUN_800310f4(0x20,0);
      if (iVar4 != 0) {
        iVar4->angle_offset = _DAT_800e7f50->pos_x;
        iVar4->sprite_y = *(s16 *)(_DAT_800e7f50 + 0x30);
        iVar4->rot_x = *(s16 *)(_DAT_800e7f50 + 0x34);
        if (param_2 == 0) {
          iVar4->rot_z = param_1->draw_x;
          iVar4->target_rot_y = param_1->angle_delta;
          iVar4->draw_y = *(s16 *)(param_1 + 100);
        }
        else {
          iVar4->rot_z = param_2->pos_y;
          iVar4->target_rot_y = *(s16 *)(param_2 + 0x32);
          iVar4->draw_y = param_2->pos_z;
        }
        iVar4->alloc_flags = iVar4->alloc_flags | 0x80;
      }
      if (param_1->draw_y != 2) {
        FUN_80051b04(param_1->sprite_ptr1,1,0);
      }
      FUN_80074590(7,0,0);
    }
    sVar2 = param_1->timer1 + -1;
    param_1->timer1 = sVar2;
    uVar3 = 0;
    if (sVar2 == -1) {
      uVar3 = 1;
      param_1->timer1 = 0x1e;
      param_1->action_state = param_1->action_state + '\x01';
    }
  }
  else if (bVar1 < 2) {
    uVar3 = 0;
    if (bVar1 == 0) {
      if (DAT_800bf80a == '\0') {
        DAT_800e7e84 = 4;
        g_CollisionType = 0x21;
        DAT_800e7e86 = 0;
        FUN_80054d14(&g_CollisionEntity,0xcc,0);
        param_1->timer1 = 0x14;
        param_1->action_state = param_1->action_state + '\x01';
      }
      FUN_800517f8(param_1);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
    if (bVar1 == 2) {
      if (param_1->rot_z < 0x400) {
        param_1->rot_z = param_1->rot_z + 0x40;
      }
      FUN_800517f8(param_1);
      sVar2 = param_1->timer1 + -1;
      param_1->timer1 = sVar2;
      uVar3 = 0;
      if (sVar2 == -1) {
        FUN_80054d14(&g_CollisionEntity,2,0);
        uVar3 = 2;
      }
    }
  }
  return uVar3;
}
