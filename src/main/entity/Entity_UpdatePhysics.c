/**
 * @brief Updates entity physics/movement via GTE transforms
 * @note Original address: 0x8003B704
 */
// Entity_UpdatePhysics

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_UpdatePhysics(int param_1)

{
  s8 cVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  s16 *psVar8;
  s16 sVar9;
  s16 sVar10;
  s16 sVar11;
  s16 sVar12;
  s16 sVar13;
  u8 auStack_88->sub_action;
  u8 local_81;
  u8 local_7c;
  u8 local_7b;
  s16 local_7a;
  u8 local_74;
  u8 local_73;
  s16 local_72;
  u8 local_6c;
  u8 local_6b;
  u8 local_64;
  u8 local_63;
  s16 local_60;
  s16 local_5e;
  s16 local_5c;
  s16 local_58;
  s16 local_56;
  s16 local_54;
  s16 local_50;
  s16 local_4e;
  s16 local_4c;
  s16 local_48;
  s16 local_46;
  s16 local_44;
  int local_40;
  int local_3c;
  s16 *local_38;
  int local_30;
  
  iVar3 = _DAT_800e7f5c;
  local_81 = 0x2d;
  local_72 = 5;
  local_7a = 0x3e9f;
  local_6c = 0xe0;
  local_7c = 0xe0;
  local_64 = 0xf7;
  local_74 = 0xf7;
  local_7b = (&DAT_800a3b04)[*(s16 *)(param_1 + 0x66) * 2];
  local_6b = (&DAT_800a3b05)[*(s16 *)(param_1 + 0x66) * 2];
  local_73 = local_7b;
  local_63 = local_6b;
  if (DAT_800e7fc6 < 4) {
    iVar4 = Math_CosGTE(param_1->type_flags + 0x400);
    iVar7 = param_1->type_flags + 0x400;
  }
  else {
    iVar4 = Math_CosGTE((int)param_1->type_flags);
    iVar7 = (int)param_1->type_flags;
  }
  iVar5 = Math_Cos(iVar7);
  iVar7 = Math_CosGTE((int)param_1->target_angle);
  iVar7 = iVar7 * iVar4 * 0x14;
  iVar6 = Math_Cos((int)param_1->target_angle);
  local_40 = -iVar6 * iVar4 * 0x14 >> 0x18;
  GTE_LoadMatrix5(&g_GTE_WorkF8);
  GTE_LoadTranslation(&g_GTE_WorkF8);
  iVar4 = iVar7 >> 0x18;
  sVar2 = (s16)(iVar5 * 0x14 >> 0xc);
  cVar1 = (char)((uint)iVar7 >> 0x18);
  local_44 = (s16)local_40;
  if (param_1->draw_x == 3) {
    local_38 = &local_60;
    local_3c = (*(int *)(iVar3 + 0x2c) + (int)param_1->pos_y) / 2;
    local_60 = iVar3->pos_x - (s16)cVar1;
    sVar10 = (s16)((iVar3->pos_y_fixed + (int)*(s16 *)(param_1 + 0x32)) / 2);
    sVar13 = sVar10 - sVar2;
    sVar11 = (s16)local_3c + (s16)cVar1;
    sVar10 = sVar10 + sVar2;
    local_5e = *(s16 *)(iVar3 + 0x30) - sVar2;
    local_5c = *(s16 *)(iVar3 + 0x34) - local_44;
    local_3c = local_3c - iVar4;
    local_50 = iVar3->pos_x + (s16)cVar1;
    local_58 = (s16)local_3c;
    local_4e = *(s16 *)(iVar3 + 0x30) + sVar2;
    sVar9 = (s16)((iVar3->scale_y + (int)param_1->pos_z) / 2);
    sVar12 = sVar9 - local_44;
    local_4c = *(s16 *)(iVar3 + 0x34) + local_44;
    sVar9 = sVar9 + local_44;
    local_56 = sVar13;
    local_54 = sVar12;
    local_48 = sVar11;
    local_46 = sVar10;
    local_44 = sVar9;
    local_30 = iVar4;
    Entity_SubmitVerticesToOT(auStack_88,local_38,0);
    local_58 = param_1->pos_y - (s16)local_30;
    local_46 = *(s16 *)(param_1 + 0x32);
    local_56 = *(s16 *)(param_1 + 0x32) - sVar2;
    local_48 = param_1->pos_y + (s16)local_30;
    local_60 = (s16)local_3c;
    local_54 = param_1->pos_z - (s16)local_40;
    local_44 = param_1->pos_z + (s16)local_40;
    psVar8 = local_38;
    local_5e = sVar13;
    local_5c = sVar12;
    local_50 = sVar11;
    local_4e = sVar10;
    local_4c = sVar9;
  }
  else {
    psVar8 = &local_60;
    local_60 = iVar3->pos_x - (s16)cVar1;
    local_5e = *(s16 *)(iVar3 + 0x30) - sVar2;
    local_58 = param_1->pos_y - (s16)cVar1;
    local_56 = *(s16 *)(param_1 + 0x32) - sVar2;
    local_50 = iVar3->pos_x + (s16)cVar1;
    local_4e = *(s16 *)(iVar3 + 0x30) + sVar2;
    local_46 = *(s16 *)(param_1 + 0x32);
    local_48 = param_1->pos_y + (s16)cVar1;
    local_5c = *(s16 *)(iVar3 + 0x34) - local_44;
    local_54 = param_1->pos_z - local_44;
    local_4c = *(s16 *)(iVar3 + 0x34) + local_44;
    local_44 = param_1->pos_z + local_44;
  }
  local_46 = local_46 + sVar2;
  Entity_SubmitVerticesToOT(auStack_88,psVar8,0);
  return;
}

