/**
 * @brief Entity behavior type variant 6: entity->state=1, type check
 * @note Original: func_80080424 at 0x80080424
 */
// Entity_BehaviorType6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void Entity_BehaviorType6(u8 *param_1)

{
  s32 bVar1;
  u8 bVar2;
  s16 sVar3;
  s32 uVar4;
  int iVar5;
  
  bVar2 = param_1->state;
  bVar1 = false;
  if (bVar2 == 1) {
    if (g_ActionMode != '\0') {
      param_1->collision_state = 0;
      GTE_ProjectSprite2(param_1);
      return;
    }
    bVar2 = param_1->action_state;
    iVar5 = param_1->timer1 - 1;
    param_1->timer1 = (s16)iVar5;
    if (bVar2 == 1) {
      bVar1 = (_g_FrameCounter2 & 3) != 0;
      if (iVar5 * 0x10000 >> 0x10 < 0x1f) {
        param_1->action_state = 2;
      }
    }
    else if (bVar2 < 2) {
      if ((bVar2 == 0) && (bVar1 = true, iVar5 * 0x10000 >> 0x10 < 0x5b)) {
        param_1->action_state = 1;
      }
    }
    else if ((bVar2 == 2) && (bVar1 = (_g_FrameCounter2 & 1) != 0, iVar5 * 0x10000 < 1)) {
      param_1->state = STATE_DEAD;
      *param_1 = 2;
    }
    if (bVar1) {
      GTE_ProjectSprite2(param_1);
    }
    if (param_1->sub_type != '\x01') {
      if (param_1->sub_type != '\x02') {
        param_1->collision_state = 0;
        return;
      }
      Overlay_8012d8f4(param_1);
      param_1->collision_state = 0;
      return;
    }
    *(s16 *)(param_1 + 0x32) =
         *(s16 *)(param_1 + 0x32) + (s16)(char)((u16)param_1->velocity_y >> 8);
    param_1->velocity_y = param_1->velocity_y + param_1->angle_offset;
    if (param_1->collision_state == '\0') {
      iVar5 = Collision_Check1(param_1,0,0x32);
    }
    else {
      iVar5 = 1;
    }
    if (iVar5 == 1) {
      param_1->velocity_y = 0;
    }
    else if (0 < *(s16 *)(param_1 + 0x32)) {
      param_1->state = STATE_DEAD;
      *param_1 = 2;
    }
    if (0x2000 < param_1->velocity_y) {
      param_1->velocity_y = 0x2000;
    }
  }
  else {
    if (1 < bVar2) {
      if (bVar2 == 2) {
        iVar5 = Event_TriggerCollectible(0x81);
        if (-1 < iVar5) {
          Inventory_AddItemEx(0x76,1);
          Entity_SpawnScorePopup(param_1);
        }
        param_1->state = STATE_DEAD;
        return;
      }
      if (bVar2 != 3) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (bVar2 != 0) {
      return;
    }
    param_1->state = 1;
    uVar4 = _g_OT_Data;
    param_1->sprite_flags = 0;
    param_1->render_flags = 0x10;
    param_1->target_rot_y = 0;
    param_1->counter1 = 0;
    param_1->draw_y = 0;
    param_1->sprite_data = uVar4;
    Entity_LoadAnimData(param_1,&PTR_DAT_80017334,0x162);
    param_1->sub_anim_id = 0;
    Entity_PhysicsStep(param_1);
    param_1->bounds_min_x = 0x1e;
    param_1->bounds_size = 0x3c;
    param_1->bounds_min_y = 0x3c;
    *param_1 = 1;
    param_1->bounds_max_y = 0x5a;
    param_1->velocity_y = 0;
    if (param_1->sub_type == '\x01') {
      param_1->angle_offset = 0x100;
    }
    else if (param_1->sub_type == '\x02') {
      Overlay_8012de84(param_1,(int)*(s16 *)(param_1 + 0x32));
      sVar3 = _DAT_1f8001a4;
      *(s16 *)(param_1 + 100) = _DAT_1f8001a4;
      if (*(s16 *)(param_1 + 0x32) < sVar3) {
        param_1->behavior_state = 1;
      }
    }
    param_1->timer1 = 300;
  }
  param_1->collision_state = 0;
  return;
}
