/**
 * @brief Entity state main variant 5: entity->state=1, state dispatch
 * @note Original: func_80059ED8 at 0x80059ED8
 */
// Entity_StateMain5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
void FUN_80059ed8(int param_1)

{
  u8 bVar1;
  s8 cVar2;
  s16 uVar3;
  s16 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  
  bVar1 = param_1->state;
  pcVar7 = *(char **)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (pcVar7[0x181] == '\0') {
      _DAT_1f80019e = 0;
    }
    param_1->rot_x = 0;
    param_1->state = param_1->state + '\x01';
    if (pcVar7->entity_flags < 0) {
      param_1->timer1 = 0x28;
      uVar4 = 0x37;
    }
    else {
      param_1->timer1 = 0x50;
      uVar4 = 0x6e;
    }
    param_1->timer2 = uVar4;
    param_1->anim_timer = 0;
    param_1->move_mode = 0;
    param_1->anim_id = 0;
    param_1->input_flags = 0;
    return;
  }
  if (*pcVar7 == '\0') {
    return;
  }
  cVar2 = pcVar7->flags;
  param_1->flags = cVar2;
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_800bfe55 != '\0') {
    iVar5 = (int)pcVar7->anim_counter;
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if ((0xc00 < iVar5) && ((_g_FrameCounter2 & 7) == 0)) {
      FUN_800312d4(0x2c,pcVar7 + 0x2c,0xffffffec);
    }
  }
  if (pcVar7->entity_flags < 0) {
    param_1->timer1 = 0x28;
    uVar4 = 0x37;
  }
  else {
    param_1->timer1 = 0x50;
    uVar4 = 0x6e;
  }
  param_1->timer2 = uVar4;
  *(s32 *)(param_1 + 0x2c) = *(s32 *)(pcVar7 + 0x2c);
  param_1->pos_y_fixed = pcVar7->pos_y_fixed;
  param_1->scale_y = pcVar7->scale_y;
  param_1->collision_dir = pcVar7->collision_dir;
  if ((pcVar7->collision_state == '\0') || (pcVar7->sub_state != '\0')) {
    if (pcVar7->physics_flag == '\b') {
      param_1->normal_x = param_1->pos_y;
      uVar3 = _DAT_800bf812;
      uVar4 = _DAT_1f800210;
      param_1->normal_z = param_1->pos_z;
      param_1->rot_z = 0;
      param_1->rot_y = uVar4;
      param_1->velocity_y = uVar3;
      goto LAB_8005a1ac;
    }
    iVar5 = FUN_800489e4(param_1,(int)*(s16 *)(param_1 + 0x32));
    uVar3 = _g_CollisionNormalY;
    uVar4 = _g_CollisionNormalX;
    if (iVar5 != 0) {
      uVar6 = (int)((uint)_DAT_1f8001a6 << 0x10) >> 0x18 & 0xf;
      if ((((uVar6 != 2) && (uVar6 != 7)) &&
          (((int)((uint)_DAT_1f8001a6 << 0x10) >> 0x10 & 0x8000U) == 0)) &&
         (*(s16 *)(param_1 + 0x32) <= _DAT_1f8001a4)) {
        param_1->velocity_y = _DAT_1f8001a4;
        param_1->normal_x = param_1->pos_y;
        param_1->normal_z = param_1->pos_z;
        param_1->rot_y = uVar4;
        param_1->rot_z = uVar3;
        goto LAB_8005a1ac;
      }
    }
  }
  else if ((pcVar7->type_flags >> 8 & 0xf) != 2) {
    param_1->normal_x = pcVar7->pos_y;
    param_1->velocity_y = *(s16 *)(pcVar7 + 0x32) + pcVar7->bounds_min_y;
    param_1->normal_z = pcVar7->pos_z;
    param_1->rot_y = pcVar7->draw_angle;
    param_1->rot_z = pcVar7->draw_scale;
    goto LAB_8005a1ac;
  }
  param_1->flags = 0;
LAB_8005a1ac:
  if (param_1->flags != '\0') {
    iVar5 = 0x80 - (((int)param_1->velocity_y - (int)*(s16 *)(pcVar7 + 0x32)) + -0x78 >> 2)
    ;
    param_1->sprite_x = (s16)iVar5;
    iVar5 = iVar5 * 0x10000 >> 0x10;
    if (iVar5 < 0) {
      param_1->sprite_x = 0;
      param_1->flags = 0;
    }
    else if (0x80 < iVar5) {
      param_1->sprite_x = 0x80;
    }
    iVar5 = 0x100 - (((int)param_1->velocity_y - (int)*(s16 *)(pcVar7 + 0x32)) + -0x78 >> 2
                    );
    param_1->angle_offset = (s16)iVar5;
    iVar5 = iVar5 * 0x10000 >> 0x10;
    if (iVar5 < 0) {
      param_1->angle_offset = 0;
      param_1->flags = 0;
    }
    else if (0x100 < iVar5) {
      param_1->angle_offset = 0x100;
    }
  }
  if (((g_SubState == '\0') && (g_TimerFlag == '\0')) && (pcVar7->state_ptr == 0)) {
    switch(g_GameState) {
    case 0:
      if (g_ActionFlag == '\0') {
        Overlay_8010c5a8(param_1,pcVar7);
      }
      break;
    case 4:
      if (g_ActionFlag == '\0') {
        Overlay_80115afc(param_1,pcVar7);
      }
      break;
    case 6:
      if (g_ActionFlag == '\0') {
        Overlay_80114294(param_1,pcVar7);
      }
      break;
    case 8:
      if (pcVar7->physics_flag == '\0') {
        Overlay_8011332c(param_1,pcVar7);
      }
      break;
    case 0xb:
      Overlay_8010bc10(param_1,pcVar7);
      break;
    case 0xe:
      Overlay_8010b238(param_1,pcVar7);
    }
  }
  return;
}
