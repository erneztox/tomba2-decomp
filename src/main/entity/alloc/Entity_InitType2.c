/**
 * @brief Entity type init variant 2: AllocFromPool, sets config
 * @note Original: func_80058648 at 0x80058648
 */
// Entity_InitType2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_InitType2(u8 *param_1,int param_2)

{
  s32 uVar1;
  int iVar2;
  
  iVar2 = Entity_AllocFromPool(param_1,0x11,_DAT_800ed014,&DAT_800a3fa8);
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
  _g_CameraX = *(s32 *)(param_1 + 0x2c);
  param_1[0x180] = 0;
  param_1->flag_175 = 0;
  param_1[0x148] = 0;
  param_1->collision_state = 0;
  param_1->state_flag145 = 0;
  param_1->physics_flag = 0;
  _g_CameraY = param_1->pos_y_fixed;
  _DAT_1f8000e4 = param_1->scale_y;
  Entity_InitFromGlobals(param_1,param_2);
  Entity_State_Jump3(param_1,(uint)(int)param_1->entity_flags >> 0xf & 1);
  _DAT_1f80018e = 0;
  Entity_StateMain3(param_1);
  if (param_2 != 0) goto LAB_8005889c;
  if (g_GameState == GAMESTATE_3) {
    param_1->kind = 0;
  }
  else {
    if (g_GameState < 4) {
      if (g_GameState != 2) goto LAB_800587d4;
LAB_800587c4:
      param_1->kind = 1;
    }
    else {
      if ((g_GameState == GAMESTATE_7) || (g_GameState == GAMESTATE_TITLEx14)) goto LAB_800587c4;
LAB_800587d4:
      param_1->kind = 0;
    }
    (**(code **)(&DAT_800a45b8 + (uint)g_GameState * 4))(param_1);
  }
  if (g_GameMode - 5 < 2) {
    if (param_1->kind == '\0') {
      param_1->rot_y = param_1->draw_angle + 0x400;
    }
    *param_1 = 6;
    g_CurrentOverlay = 2;
    param_1->state = 4;
    param_1->behavior_state = 0x28;
    Entity_SpawnProjectile(param_1);
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
  Player_Update(param_1);
  return;
}
