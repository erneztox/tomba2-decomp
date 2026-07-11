/**
 * @brief Entity child initializer: sets child callback from table
 * @note Original: func_8006F9D8 at 0x8006F9D8
 */
// Entity_ChildInit



#include "tomba.h"
s32 Entity_ChildInit(s32 param_1,int param_2,int param_3,s16 param_4)

{
  u8 bVar1;
  s16 uVar2;
  u16 uVar3;
  int iVar4;
  uint uVar5;
  void **ppuVar6;
  
  param_2->callback = Entity_ChildUpdate2;
  param_2->parent = param_1;
  param_2->draw_y = 0;
  param_2->alloc_flags = param_2->alloc_flags | 0x80;
  uVar2 = *(s16 *)(param_3 + 4);
  bVar1 = param_3->kind;
  uVar3 = *(u16 *)(param_3 + 2);
  uVar5 = uVar3 & 0x7f;
  param_2->input_flags = bVar1 & 0x80;
  if ((bVar1 & 0x80) == 0) {
    iVar4 = Entity_InitSubEntity(param_2,uVar5,uVar2);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    param_2->sprite_data = *(s32 *)(&g_OT_Data + uVar5 * 4);
    if ((uVar3 & 0x7f) == 0) {
      ppuVar6 = &PTR_DAT_80017334;
    }
    else {
      ppuVar6 = *(void ***)(&DAT_800a58fc + (uint)g_GameState * 4);
    }
    Entity_LoadAnimData(param_2,ppuVar6,uVar2);
    param_2->render_flags = 0x10;
    param_2->sprite_flags = 0;
    param_2->sub_anim_id = 0;
    param_2->target_rot_y = 0;
    param_2->counter1 = 0xf0;
  }
  param_2->draw_x = 0xffe0;
  param_2->target_angle = param_4;
  param_2->angle_delta = 0;
  param_2->rot_x = 0;
  param_2->rot_y = 0;
  param_2->rot_z = 0;
  if (g_ActionFlag == '\0') {
    param_2->gte_flags = 0;
  }
  else {
    param_2->gte_flags = 1;
  }
  param_2->event_param = 0;
  return 1;
}
