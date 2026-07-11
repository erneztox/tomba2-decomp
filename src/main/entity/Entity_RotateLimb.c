/**
 * @brief Rotates entity limb: entity[0x50] += 0x40 per frame, wraps, sets entity[0x56] delta
 * @note Original: func_80072F14 at 0x80072F14
 */
// Entity_RotateLimb



#include "tomba.h"
int FUN_80072f14(int param_1)

{
  u16 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1->anim_id == '\0') {
    uVar1 = param_1->angle_offset + 0x40;
    param_1->angle_offset = uVar1;
    if ((int)((uint)uVar1 << 0x10) < 1) goto LAB_80072f94;
    param_1->angle_offset = 0;
  }
  else {
    if ((param_1->anim_id != '\x01') ||
       (uVar1 = param_1->angle_offset - 0x40, param_1->angle_offset = uVar1,
       -1 < (int)((uint)uVar1 << 0x10))) goto LAB_80072f94;
    param_1->angle_offset = 0;
  }
  iVar2 = 1;
LAB_80072f94:
  if ((iVar2 != 0) && (param_1->combat_flag != '\0')) {
    FUN_80074590(0x18,0,0xf);
  }
  param_1->rot_y = param_1->target_rot_y - param_1->angle_offset;
  return iVar2;
}
