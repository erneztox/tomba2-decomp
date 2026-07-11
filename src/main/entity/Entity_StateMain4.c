/**
 * @brief Entity state main variant 4: extended state handler
 * @note Original: func_80063B94 at 0x80063B94
 */
// Entity_StateMain4



#include "tomba.h"
void Entity_StateMain4(int param_1,int param_2)

{
  u8 bVar1;
  int iVar2;
  uint uVar3;
  s16 sVar4;
  u16 uVar5;
  u8 uVar6;
  void **ppuVar7;
  void *puVar8;
  s32 uVar9;
  
  if (param_2 == 0) {
    ppuVar7 = &PTR_DAT_800a4784;
    bVar1 = *(u8 *)(param_1 + 0x168);
  }
  else {
    ppuVar7 = &PTR_DAT_800a4794;
    bVar1 = *(u8 *)(param_1 + 0x168) >> 1;
  }
  switch(bVar1) {
  case 0:
    param_1->state_flag144 = 0;
    uVar9 = 4;
    if (param_2 == 0) {
      uVar3 = param_1->rot_z + 0x100 & 0xfff;
      uVar5 = (u16)uVar3;
      if (uVar5 < 0x501) {
        sVar4 = (s16)(uVar3 >> 7);
        if (0x200 < uVar5) {
          sVar4 = 3;
        }
      }
      else {
        sVar4 = 0;
      }
      uVar6 = (*ppuVar7)[sVar4];
      uVar9 = 4;
    }
    else {
      uVar6 = **ppuVar7;
    }
    goto LAB_80063e84;
  case 1:
    param_1->state_flag144 = 0;
    puVar8 = ppuVar7->flags;
    if (param_2 == 0) {
      uVar3 = (uint)param_1->rot_z;
      uVar9 = 3;
LAB_80063e74:
      uVar3 = (uVar3 & 0xfff) >> 8;
    }
    else {
      iVar2 = param_1->rot_z + 0x60;
      sVar4 = (s16)iVar2;
      iVar2 = iVar2 * 0x10000 >> 0x10;
      if (iVar2 < 0) {
        sVar4 = 0;
      }
      else if (0xbf < iVar2) {
        sVar4 = 0xb0;
      }
      uVar9 = 4;
      uVar3 = ((int)sVar4 / 0x30) * 0x10000 >> 0x10;
    }
    break;
  case 2:
    param_1->state_flag144 = 2;
    puVar8 = ppuVar7->kind;
    if (param_2 == 0) {
      uVar3 = (uint)param_1->rot_z;
      uVar9 = 2;
      goto LAB_80063e74;
    }
    iVar2 = param_1->rot_z + 0x140;
    sVar4 = (s16)iVar2;
    iVar2 = iVar2 * 0x10000 >> 0x10;
    if (iVar2 < 0) {
      sVar4 = 0;
    }
    else if (0x22f < iVar2) {
      sVar4 = 0x230;
    }
    uVar9 = 3;
    uVar3 = ((int)sVar4 / 0x50) * 0x10000 >> 0x10;
    break;
  default:
    param_1->state_flag144 = 2;
    if (param_2 == 0) {
      uVar9 = 2;
      uVar3 = (uint)param_1->rot_z;
      puVar8 = ppuVar7->sub_type;
      goto LAB_80063e74;
    }
    if (bVar1 < 5) {
      puVar8 = ppuVar7->kind;
      iVar2 = param_1->rot_z + 0x140;
      sVar4 = (s16)iVar2;
      iVar2 = iVar2 * 0x10000 >> 0x10;
      if (iVar2 < 0) {
        sVar4 = 0;
      }
      else if (0x22f < iVar2) {
        sVar4 = 0x230;
      }
      uVar9 = 3;
      uVar3 = ((int)sVar4 / 0x50) * 0x10000 >> 0x10;
    }
    else {
      puVar8 = ppuVar7->sub_type;
      iVar2 = param_1->rot_z + 0x340;
      sVar4 = (s16)iVar2;
      iVar2 = iVar2 * 0x10000 >> 0x10;
      if (iVar2 < 0) {
        sVar4 = 0;
      }
      else if (0x67f < iVar2) {
        sVar4 = 0x670;
      }
      uVar9 = 2;
      uVar3 = ((int)sVar4 / 0xd0) * 0x10000 >> 0x10;
    }
  }
  uVar6 = puVar8[uVar3];
LAB_80063e84:
  if (param_2 != 0) {
    uVar9 = 2;
    param_1->state_flag144 = 0;
    if (param_1->draw_pos_y != 0) {
      uVar6 = 0xd7;
      uVar9 = 6;
    }
    if (param_2 == 2) {
      uVar9 = 0;
    }
  }
  Entity_LoadAnimIfChanged(param_1,uVar6,uVar9);
  return;
}
