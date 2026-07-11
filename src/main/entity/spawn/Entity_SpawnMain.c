/**
 * @brief Entity spawn main: full spawn pipeline with callbacks
 * @note Original: func_800741DC at 0x800741DC
 */
// Entity_SpawnMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_SpawnMain(u8 *param_1)

{
  u8 bVar1;
  s16 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  u8 auStack_20->kind;
  s16 local_1e;
  s16 local_1a;
  s16 local_16;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (g_SubState != '\0') {
      param_1->state = STATE_DEAD;
      return;
    }
    iVar3 = Entity_InitSubEntity(param_1,1,0x18);
    if (iVar3 != 0) {
      return;
    }
    param_1->bounds_min_x = 0x140;
    param_1->bounds_size = 0x280;
    param_1->bounds_min_y = 0x15e;
    param_1->bounds_max_y = 0x15e;
    *param_1 = 1;
    param_1->move_mode = 0;
    param_1->rot_x = 0;
    param_1->state = param_1->state + '\x01';
    uVar2 = *(s16 *)(&DAT_800a4cec + (uint)(u8)param_1->sub_type * 2);
    param_1->rot_z = 0;
    param_1->rot_y = uVar2;
    Entity_UpdateMatrix();
    return;
  }
  GTE_ProjectSprite2(param_1);
  bVar1 = param_1->behavior_state;
  if (bVar1 == 2) {
    if ((_g_PadState & _DAT_1f800174) != 0) {
      param_1->behavior_state = 3;
    }
    goto LAB_80074568;
  }
  if (bVar1 < 3) {
    if (bVar1 == 0) {
LAB_80074328:
      if (param_1->move_mode == '\x03') {
        iVar3 = Entity_InitSprite((int)u____01_800a4cf8[(u8)param_1->sub_type],0);
        param_1->script_ptr = iVar3;
        if (iVar3 != 0) {
          if (DAT_800bf8ed == '\0') {
            param_1->behavior_state = param_1->behavior_state + '\x01';
            Event_TriggerCollectible(0x39);
          }
          else {
            param_1->behavior_state = param_1->behavior_state + '\x02';
          }
        }
        DAT_800bf809 = 1;
      }
      goto LAB_80074568;
    }
    if (bVar1 != 1) {
      param_1->move_mode = 0;
      return;
    }
    iVar3 = Game_CheckIdle();
  }
  else {
    if (bVar1 == 4) {
      if (1 < *(u8 *)(param_1->script_ptr + 4)) {
        local_1e = param_1->pos_y;
        *param_1 = 2;
        param_1->state = STATE_DEAD;
        local_1a = *(s16 *)(param_1 + 0x32) -
                   (s16)(((int)((uint)param_1->bounds_min_y << 0x10) >> 0x10) -
                           ((int)((uint)param_1->bounds_min_y << 0x10) >> 0x1f) >> 1);
        local_16 = param_1->pos_z;
        Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),auStack_20,0x800,0x18);
        Audio_PlaySoundEffect(0xc,0,0);
        Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),auStack_20,0x800,8);
        Audio_PlaySoundEffect(0xc,0,0);
        Entity_CheckCollectible(0x39);
        uVar5 = (uint)DAT_800bfa23;
        uVar4 = 1 << ((u8)param_1->sub_type & 0x1f);
        DAT_800bfa23 = DAT_800bfa23 | (u8)uVar4;
        if (DAT_800bf8ee == '\0') {
          Event_TriggerCollectible(0x3a);
          param_1->move_mode = 0;
          return;
        }
        if ((uVar5 | uVar4 & 0xff) == 0x1f) {
          Entity_CheckCollectible(0x3a);
        }
      }
      goto LAB_80074568;
    }
    if (3 < bVar1) {
      if (bVar1 != 99) goto LAB_80074568;
      DAT_800bf809 = 0;
      *param_1 = 1;
      param_1->behavior_state = 0;
      goto LAB_80074328;
    }
    if (*(u8 *)(param_1->script_ptr + 4) < 2) {
      *(u8 *)(param_1->script_ptr + 4) = 2;
      param_1->script_ptr = 0;
    }
    if (_DAT_800bf874 < *(uint *)(&DAT_800a4d04 + (uint)(u8)param_1->sub_type * 4)) {
      *param_1 = 2;
      param_1->behavior_state = 99;
      goto LAB_80074568;
    }
    iVar3 = Entity_SpawnSFX(param_1);
    param_1->script_ptr = iVar3;
  }
  if (iVar3 != 0) {
    param_1->behavior_state = param_1->behavior_state + '\x01';
  }
LAB_80074568:
  param_1->move_mode = 0;
  return;
}
