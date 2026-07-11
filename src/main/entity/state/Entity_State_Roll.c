/**
 * @brief Entity roll state: entity->action_state state machine, rolling movement
 * @note Original: func_8006271C at 0x8006271C
 */
// Entity_State_Roll



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
#include "overlay.h"
s32 Entity_State_Roll(int param_1,int param_2)

{
  s16 sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = param_1->parent;
  iVar7 = param_1->state_ptr;
  iVar8 = 0x20;
  if (-1 < param_1->entity_flags) {
    iVar8 = 0x40;
  }
  iVar2 = param_1->rot_y + 0x800;
  iVar5 = iVar2 * 0x10000 >> 0x10;
  iVar3 = Math_CosGTE(iVar5);
  param_1->pos_y = iVar6->pos_x + (s16)(iVar3 * iVar8 >> 0xc);
  iVar3 = Math_Cos(iVar5);
  param_1->pos_z = *(s16 *)(iVar6 + 0x34) - (s16)(iVar3 * iVar8 >> 0xc);
  iVar3 = param_2;
  if (param_1->state_165 != '\0') {
    iVar3 = param_2 + 3;
  }
  if (param_2 == 0) {
    sVar1 = param_1->speed2 + (s16)(char)(&DAT_800a4700)[iVar3];
    param_1->speed2 = sVar1;
    if ((int)sVar1 < -(int)iVar7->bounds_min_y) {
      param_1->speed2 = -iVar7->bounds_min_y;
    }
  }
  else if (param_2 == 1) {
    param_1->speed2 = param_1->speed2 + (s16)(char)(&DAT_800a4700)[iVar3];
  }
  *(s16 *)(param_1 + 0x32) = *(s16 *)(iVar6 + 0x30) + param_1->speed2;
  Entity_CalcAimPos(param_1);
  sVar1 = (s16)iVar2;
  if (g_GameState == '\0') {
    iVar7 = Overlay_801148d8(param_1,iVar7);
    iVar6 = _g_GTE_Work84;
    if (iVar7 == 0) {
LAB_800629f0:
      param_1->action_flag = 0;
      param_1->state_ptr = 0;
      Entity_ResetActionState(param_1,0);
      return 0;
    }
    param_1->parent = _g_GTE_Work84;
    iVar7 = Math_CosGTE((int)sVar1);
    param_1->pos_y = iVar6->pos_x + (s16)(iVar7 * iVar8 >> 0xc);
    iVar7 = Math_Cos((int)sVar1);
    param_1->pos_z = *(s16 *)(iVar6 + 0x34) - (s16)(iVar7 * iVar8 >> 0xc);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(iVar6 + 0x30) + param_1->speed2;
    uVar4 = Entity_CollisionGround(param_1);
    if ((uVar4 & 1) != 0) {
      param_1->action_flag = 0;
      param_1->state_ptr = 0;
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      Entity_LoadAnimIfChanged(param_1,2,3);
      return 0;
    }
  }
  else {
    if ((g_GameState != '\x06') ||
       (iVar7 = Overlay_80110e60(param_1,iVar7), iVar6 = _g_GTE_Work84, iVar7 == 0))
    goto LAB_800629f0;
    param_1->parent = _g_GTE_Work84;
    iVar7 = Math_CosGTE((int)sVar1);
    param_1->pos_y = iVar6->pos_x + (s16)(iVar7 * iVar8 >> 0xc);
    iVar7 = Math_Cos((int)sVar1);
    param_1->pos_z = *(s16 *)(iVar6 + 0x34) - (s16)(iVar7 * iVar8 >> 0xc);
    *(s16 *)(param_1 + 0x32) = *(s16 *)(iVar6 + 0x30) + param_1->speed2;
    uVar4 = Entity_CollisionGround(param_1);
    if ((uVar4 & 1) != 0) {
      param_1->action_flag = 0;
      param_1->state_ptr = 0;
      param_1->behavior_state = 0;
      param_1->action_state = 0;
      Entity_LoadAnimIfChanged(param_1,2,3);
      return 0;
    }
  }
  return 1;
}
