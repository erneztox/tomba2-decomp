/**
 * @brief Entity spawn animator: entity->action_state state, spawns + anims
 * @note Original: func_80071DFC at 0x80071DFC
 */
// Entity_SpawnAnim



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80071dfc(int param_1)

{
  s16 sVar1;
  s32 uVar2;
  s8 cVar3;
  u8 bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u8 *puVar9;
  u8 local_40;
  u8 local_3f;
  u8 local_38;
  u8 local_37;
  s16 local_36;
  s16 local_30;
  s16 local_2e;
  s16 local_2c;
  s16 local_2a;
  u16 local_28;
  s16 local_26;
  
  if (param_1->behavior_state == '\0') {
    param_1->behavior_state = 1;
    iVar6 = 0;
    iVar8 = 0;
    do {
      *(s16 *)(param_1 + (iVar8 >> 0xf) + 0x60) = 0;
      iVar6 = iVar6 + 1;
      iVar8 = iVar6 * 0x10000;
    } while (iVar6 * 0x10000 >> 0x10 < 0x10);
    param_1->bounds_size = 8;
    param_1->timer2 = 0;
    param_1->flag_5E = 0;
    iVar8 = (uint)param_1->anim_timer << 0x10;
    uVar5 = (iVar8 >> 0x10) - (iVar8 >> 0x1f) >> 1;
    param_1->input_flags = (char)uVar5;
    if ((param_1->anim_timer & 1) == 0) {
      cVar3 = param_1->input_flags * '\b' + -4;
    }
    else {
      cVar3 = (char)((uVar5 & 0xff) << 3);
    }
    param_1->input_flags = cVar3;
  }
  else if (param_1->behavior_state != '\x01') {
    return;
  }
  bVar4 = param_1->flag_5E + 1;
  param_1->flag_5E = bVar4;
  if ((bVar4 & 1) == 0) {
    param_1->timer2 = param_1->timer2 + 1;
  }
  sVar1 = param_1->timer1;
  param_1->timer1 = sVar1 + -1;
  if (sVar1 == 1) {
    param_1->state = STATE_DEAD;
    _DAT_800bf83c = 0;
  }
  else {
    FUN_80084660(&g_GTE_WorkF8);
    FUN_80084690(&g_GTE_WorkF8);
    if (param_1->sub_type == '\0') {
      _g_GTE_WorkC0 = _g_CameraTargetX;
      if ((DAT_800e7ff4 & 4) == 0) {
        _DAT_1f8000c2 = _g_CameraTargetY + -200;
      }
      else {
        _DAT_1f8000c2 = _g_CameraTargetY + -0x8c;
      }
      _g_GTE_WorkC4 = _g_CameraTargetZ;
    }
    else {
      _g_GTE_WorkC0 = *(s16 *)(param_1->parent + 0x2e);
      _DAT_1f8000c2 = *(s16 *)(param_1->parent + 0x32) + -200;
      _g_GTE_WorkC4 = *(s16 *)(param_1->parent + 0x36);
    }
    local_37 = FUN_8003f7a0(&g_GTE_WorkC0,&local_28);
    uVar2 = _g_OT_Data;
    bVar4 = param_1->input_flags;
    iVar8 = 0;
    local_38 = 0;
    local_36 = param_1->draw_y;
    local_2c = 0;
    local_2a = 0;
    puVar9 = (u8 *)(param_1 + 0x44);
    if (0 < param_1->anim_timer) {
      iVar6 = 0;
      do {
        iVar7 = (int)(((uint)local_28 - (uint)bVar4) * 0x10000) >> 0x10;
        if (iVar6 >> 0x10 == 0) {
          FUN_80071c48(param_1,iVar7,(int)local_26);
        }
        else {
          FUN_80071cf4(param_1,iVar7,(int)local_26);
        }
        local_30 = param_1->pos_y;
        local_2e = *(s16 *)(param_1 + 0x32);
        local_40 = *puVar9;
        puVar9 = puVar9 + 1;
        local_3f = 0;
        iVar6 = FUN_8009a1f0(&local_40);
        FUN_8007e1b8(&local_30,
                     *(s32 *)((int)&PTR_DAT_80017334 + ((iVar6 + 0x69) * 0x10000 >> 0xe)),
                     uVar2,&local_38);
        iVar8 = iVar8 + 1;
        iVar6 = iVar8 * 0x10000;
      } while (iVar8 * 0x10000 >> 0x10 < (int)param_1->anim_timer);
    }
  }
  return;
}
