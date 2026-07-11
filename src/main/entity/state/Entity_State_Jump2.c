/**
 * @brief Entity jump state variant 2: calls physics, checks ground contact
 * @note Original: func_800572EC at 0x800572EC
 */
// Entity_State_Jump2



#include "tomba.h"
char FUN_800572ec(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  
  FUN_800541f4(param_1,0);
  if (param_1->collision_state == '\0') {
    uVar3 = FUN_80057150(param_1,param_2);
    if ((param_1->entity_flags & 0x40) == 0) {
      if ((param_1->behavior_flags & 8) != 0) {
        *(char *)(param_1 + 0x178) = *(char *)(param_1 + 0x178) + '\x01';
      }
    }
    else {
      uVar5 = (uint)param_1->anim_id;
      if (((uVar5 - 0x14 < 2) || (uVar5 == 0x62)) || (uVar5 == 0x12)) {
        FUN_80054d14(param_1,0xca,6);
        *(undefined1 *)(param_1 + 0x178) = 0;
      }
    }
    bVar1 = *(char *)(param_1 + 0x178) + 1;
    *(byte *)(param_1 + 0x178) = bVar1;
    if (bVar1 < 10) {
      uVar3 = 0;
    }
    else if (bVar1 == 0xff) {
      *(undefined1 *)(param_1 + 0x178) = 0xff;
    }
    uVar4 = param_1->velocity_y + 0x360;
    param_1->velocity_y = uVar4;
    if ((int)((uint)uVar3 << 0x10) < (int)((uint)uVar4 << 0x10)) {
      param_1->velocity_y = uVar3;
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
    if (param_2 == 2) {
      cVar2 = FUN_80049280(param_1,0,((int)param_1->angle_delta << 0x11) >> 0x10);
      param_1->collision_state = cVar2;
      if (cVar2 != '\0') {
        return cVar2;
      }
    }
    else if (((-1 < param_1->velocity_y) && ((param_2 & 2) == 0)) &&
            (param_1->state_flag144 == '\0')) {
      param_1->state_flag144 = 1;
    }
    FUN_8005444c(param_1);
  }
  return '\0';
}
