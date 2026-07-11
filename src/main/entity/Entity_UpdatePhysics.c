/**
 * @brief Updates entity physics/movement via GTE transforms
 * @note Original address: 0x8003B704
 */
// Entity_UpdatePhysics

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_UpdatePhysics(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  undefined1 auStack_88->sub_action;
  undefined1 local_81;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined2 local_7a;
  undefined1 local_74;
  undefined1 local_73;
  undefined2 local_72;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_64;
  undefined1 local_63;
  short local_60;
  short local_5e;
  short local_5c;
  short local_58;
  short local_56;
  short local_54;
  short local_50;
  short local_4e;
  short local_4c;
  short local_48;
  short local_46;
  short local_44;
  int local_40;
  int local_3c;
  short *local_38;
  int local_30;
  
  iVar3 = _DAT_800e7f5c;
  local_81 = 0x2d;
  local_72 = 5;
  local_7a = 0x3e9f;
  local_6c = 0xe0;
  local_7c = 0xe0;
  local_64 = 0xf7;
  local_74 = 0xf7;
  local_7b = (&DAT_800a3b04)[*(short *)(param_1 + 0x66) * 2];
  local_6b = (&DAT_800a3b05)[*(short *)(param_1 + 0x66) * 2];
  local_73 = local_7b;
  local_63 = local_6b;
  if (DAT_800e7fc6 < 4) {
    iVar4 = FUN_80083f50(param_1->type_flags + 0x400);
    iVar7 = param_1->type_flags + 0x400;
  }
  else {
    iVar4 = FUN_80083f50((int)param_1->type_flags);
    iVar7 = (int)param_1->type_flags;
  }
  iVar5 = FUN_80083e80(iVar7);
  iVar7 = FUN_80083f50((int)param_1->target_angle);
  iVar7 = iVar7 * iVar4 * 0x14;
  iVar6 = FUN_80083e80((int)param_1->target_angle);
  local_40 = -iVar6 * iVar4 * 0x14 >> 0x18;
  FUN_80084660(&DAT_1f8000f8);
  FUN_80084690(&DAT_1f8000f8);
  iVar4 = iVar7 >> 0x18;
  sVar2 = (short)(iVar5 * 0x14 >> 0xc);
  cVar1 = (char)((uint)iVar7 >> 0x18);
  local_44 = (short)local_40;
  if (param_1->draw_x == 3) {
    local_38 = &local_60;
    local_3c = (*(int *)(iVar3 + 0x2c) + (int)param_1->pos_y) / 2;
    local_60 = iVar3->pos_x - (short)cVar1;
    sVar10 = (short)((iVar3->pos_y_fixed + (int)*(short *)(param_1 + 0x32)) / 2);
    sVar13 = sVar10 - sVar2;
    sVar11 = (short)local_3c + (short)cVar1;
    sVar10 = sVar10 + sVar2;
    local_5e = *(short *)(iVar3 + 0x30) - sVar2;
    local_5c = *(short *)(iVar3 + 0x34) - local_44;
    local_3c = local_3c - iVar4;
    local_50 = iVar3->pos_x + (short)cVar1;
    local_58 = (short)local_3c;
    local_4e = *(short *)(iVar3 + 0x30) + sVar2;
    sVar9 = (short)((iVar3->scale_y + (int)param_1->pos_z) / 2);
    sVar12 = sVar9 - local_44;
    local_4c = *(short *)(iVar3 + 0x34) + local_44;
    sVar9 = sVar9 + local_44;
    local_56 = sVar13;
    local_54 = sVar12;
    local_48 = sVar11;
    local_46 = sVar10;
    local_44 = sVar9;
    local_30 = iVar4;
    FUN_8003b320(auStack_88,local_38,0);
    local_58 = param_1->pos_y - (short)local_30;
    local_46 = *(short *)(param_1 + 0x32);
    local_56 = *(short *)(param_1 + 0x32) - sVar2;
    local_48 = param_1->pos_y + (short)local_30;
    local_60 = (short)local_3c;
    local_54 = param_1->pos_z - (short)local_40;
    local_44 = param_1->pos_z + (short)local_40;
    psVar8 = local_38;
    local_5e = sVar13;
    local_5c = sVar12;
    local_50 = sVar11;
    local_4e = sVar10;
    local_4c = sVar9;
  }
  else {
    psVar8 = &local_60;
    local_60 = iVar3->pos_x - (short)cVar1;
    local_5e = *(short *)(iVar3 + 0x30) - sVar2;
    local_58 = param_1->pos_y - (short)cVar1;
    local_56 = *(short *)(param_1 + 0x32) - sVar2;
    local_50 = iVar3->pos_x + (short)cVar1;
    local_4e = *(short *)(iVar3 + 0x30) + sVar2;
    local_46 = *(short *)(param_1 + 0x32);
    local_48 = param_1->pos_y + (short)cVar1;
    local_5c = *(short *)(iVar3 + 0x34) - local_44;
    local_54 = param_1->pos_z - local_44;
    local_4c = *(short *)(iVar3 + 0x34) + local_44;
    local_44 = param_1->pos_z + local_44;
  }
  local_46 = local_46 + sVar2;
  FUN_8003b320(auStack_88,psVar8,0);
  return;
}

