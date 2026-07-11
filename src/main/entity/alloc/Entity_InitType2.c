/**
 * @brief Entity type init variant 2: AllocFromPool, sets config
 * @note Original: func_80058648 at 0x80058648
 */
// Entity_InitType2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80058648(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_800519e0(param_1,0x11,_DAT_800ed014,&DAT_800a3fa8);
  if (iVar2 != 0) {
    return;
  }
  param_1[0xc] = 0;
  uVar1 = _DAT_800ecf68;
  _DAT_1f800212 = 0xffff;
  param_1->timer1 = 0;
  param_1->timer2 = 0;
  param_1[0x178] = 0;
  param_1->angle_offset = 0;
  param_1->draw_pos_y = 0;
  param_1->state = param_1->state + '\x01';
  _DAT_1f800166 = 0;
  _DAT_1f800190 = 0;
  DAT_1f800252 = 0;
  param_1->render_flags = 0xf;
  param_1->anim_id = 0xff;
  param_1->sub_anim_id = 0xff;
  param_1[0x161] = 1;
  param_1[0x162] = 7;
  param_1[0x163] = 4;
  param_1->sprite_data = uVar1;
  _DAT_1f8000dc = *(undefined4 *)(param_1 + 0x2c);
  param_1[0x180] = 0;
  param_1->flag_175 = 0;
  param_1[0x148] = 0;
  param_1->collision_state = 0;
  param_1->state_flag145 = 0;
  param_1->physics_flag = 0;
  _DAT_1f8000e0 = param_1->pos_y_fixed;
  _DAT_1f8000e4 = param_1->scale_y;
  FUN_800682c4(param_1,param_2);
  FUN_80057dc0(param_1,(uint)(int)param_1->entity_flags >> 0xf & 1);
  _DAT_1f80018e = 0;
  FUN_80057fd4(param_1);
  if (param_2 != 0) goto LAB_8005889c;
  if (DAT_800bf870 == 3) {
    param_1->kind = 0;
  }
  else {
    if (DAT_800bf870 < 4) {
      if (DAT_800bf870 != 2) goto LAB_800587d4;
LAB_800587c4:
      param_1->kind = 1;
    }
    else {
      if ((DAT_800bf870 == 7) || (DAT_800bf870 == 0x14)) goto LAB_800587c4;
LAB_800587d4:
      param_1->kind = 0;
    }
    (**(code **)(&DAT_800a45b8 + (uint)DAT_800bf870 * 4))(param_1);
  }
  if (DAT_1f800236 - 5 < 2) {
    if (param_1->kind == '\0') {
      param_1->rot_y = param_1->draw_angle + 0x400;
    }
    *param_1 = 6;
    DAT_1f800137 = 2;
    param_1->state = 4;
    param_1->behavior_state = 0x28;
    FUN_80068214(param_1);
  }
  else if (param_1->anim_param != '\0') {
    param_1->state = 4;
    param_1->behavior_state = 0x24;
    if (param_1->kind == '\0') {
      param_1->action_state = 4;
    }
    else {
      param_1->action_state = 0;
    }
    param_1->sub_action = 0;
    param_1->anim_param = 0;
  }
LAB_8005889c:
  FUN_800597ac(param_1);
  return;
}
