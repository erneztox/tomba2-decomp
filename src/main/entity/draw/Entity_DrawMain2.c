/**
 * @brief Entity draw main variant 2: different render path
 * @note Original: func_8002C920 at 0x8002C920
 */
// Entity_DrawMain2



#include "tomba.h"
void Entity_DrawMain2(int param_1)

{
  u8 bVar1;
  uint uVar2;
  int iVar3;
  s16 sVar4;
  s16 sVar5;
  int iVar6;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    iVar6 = 1;
    if (bVar1 != 0) {
      return;
    }
    param_1->state = 1;
    param_1->behavior_state = 0;
    *(s32 *)(param_1 + 0x50) = 0;
    *(s32 *)(param_1 + 0x54) = 0;
    param_1->rot_z = param_1->pos_x;
    param_1->target_rot_y = param_1->pos_y;
    sVar4 = 0x834;
    param_1->draw_y = *(s16 *)(param_1 + 0x30) + 3000;
    do {
      sVar5 = 16000 - sVar4;
      iVar3 = 0;
      if (6 < DAT_800e7e7c) {
        iVar3 = Entity_AllocByPoolId(0,6,1);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          *(s16 *)(iVar3 + 0x32) = 0;
          Entity_InitBehavior(iVar3,0x1a);
        }
      }
      bVar1 = DAT_800e7e7c;
      iVar3->pos_x = 100;
      *(s16 *)(iVar3 + 0x30) = sVar5;
      iVar3 = 0;
      if (6 < bVar1) {
        iVar3 = Entity_AllocByPoolId(0,6,1);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          *(s16 *)(iVar3 + 0x32) = 0;
          Entity_InitBehavior(iVar3,0x1a);
        }
      }
      sVar4 = sVar4 + 0x834;
      iVar6 = iVar6 + 1;
      iVar3->pos_x = 0x76c;
      *(s16 *)(iVar3 + 0x30) = sVar5;
    } while (iVar6 < 6);
  }
  if (2 < g_GameMode) {
    uVar2 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar2 + 1;
    if ((uVar2 & 7) != 0) {
      return;
    }
    iVar6 = 0;
    if (6 < DAT_800e7e7c) {
      iVar6 = Entity_AllocByPoolId(0,6,1);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        *(s16 *)(iVar6 + 0x32) = 0;
        Entity_InitBehavior(iVar6,0x1a);
      }
    }
    iVar6->pos_x = 100;
    bVar1 = DAT_800e7e7c;
    *(s16 *)(iVar6 + 0x30) = 16000;
    iVar6 = 0;
    if (6 < bVar1) {
      iVar6 = Entity_AllocByPoolId(0,6,1);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        *(s16 *)(iVar6 + 0x32) = 0;
        Entity_InitBehavior(iVar6,0x1a);
      }
    }
    iVar6->pos_x = 0x76c;
    *(s16 *)(iVar6 + 0x30) = 16000;
    return;
  }
  if (g_GameMode == 1) {
    uVar2 = *(int *)(param_1 + 0x50) + 1U & 0x3f;
  }
  else {
    if (g_GameMode != 2) goto LAB_8002cad0;
    uVar2 = (*(int *)(param_1 + 0x50) + 4U & 0x3f) + 0x80;
  }
  *(uint *)(param_1 + 0x50) = uVar2;
LAB_8002cad0:
  param_1->flags = 1;
  if (param_1->behavior_state == '\0') {
    param_1->draw_y =
         param_1->draw_y +
         (s16)((uint)((int)*(s16 *)(param_1 + 0x30) - (param_1->draw_y + 300)) >> 8);
    uVar2 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar2 + 1;
    if ((uVar2 & 0x1f) == 0) {
      iVar6 = 0;
      if (6 < DAT_800e7e7c) {
        iVar6 = Entity_AllocByPoolId(0,6,1);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          *(s16 *)(iVar6 + 0x32) = 0;
          Entity_InitBehavior(iVar6,0x1a);
        }
      }
      iVar6->pos_x = 100;
      bVar1 = DAT_800e7e7c;
      *(s16 *)(iVar6 + 0x30) = 16000;
      iVar6 = 0;
      if (6 < bVar1) {
        iVar6 = Entity_AllocByPoolId(0,6,1);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          *(s16 *)(iVar6 + 0x32) = 0;
          Entity_InitBehavior(iVar6,0x1a);
        }
      }
      iVar6->pos_x = 0x76c;
      *(s16 *)(iVar6 + 0x30) = 16000;
    }
    if (g_DMAFlag != '\0') {
      param_1->behavior_state = 1;
    }
  }
  else if (param_1->behavior_state == '\x01') {
    param_1->draw_y = param_1->draw_y + -0x42;
  }
  return;
}
