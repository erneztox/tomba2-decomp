/**
 * @brief Updates player entity state (g_PlayerEntity)
 * @note Original address: 0x800597AC
 */
// Player_Update

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Player_Update(int param_1)

{
  u8 uVar1;
  s16 sVar2;
  s32 bVar3;
  s32 bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar1 = param_1->counter1;
  if (((param_1->entity_flags & 0x20) != 0) && (*(s8*)(param_1 + 0x179) != '\0')) {
    param_1->counter1 = param_1->counter2;
  }
  GTE_LoadScaleMatrix(0x1f800000,(int)param_1->scale_x,(int)param_1->scale_y,
               (int)param_1->scale_z);
  _g_GTE_WorkC0 = param_1->rot_x;
  _DAT_1f8000c2 = param_1->rot_y;
  _g_GTE_WorkC4 = param_1->rot_z;
  GTE_LoadRotMatrixFromSVec(&g_GTE_WorkC0,&DAT_1f800040);
  _DAT_1f8000c2 = 0;
  if ((param_1->flag_177 & 1) != 0) {
    _DAT_1f8000c2 = param_1->draw_pos_y;
  }
  _g_GTE_WorkC0 = 0;
  _g_GTE_WorkC4 = 0;
  Math_Sin2(&g_GTE_WorkC0,&DAT_1f800020);
  iVar8 = param_1 + 0x98;
  GTE_ComposeMatrix(&DAT_1f800020,0x1f800000,iVar8);
  GTE_MulMatrix4(&DAT_1f800040,iVar8);
  GTE_MulMatrixVec(iVar8,param_1 + 0x88,param_1 + 0xac);
  param_1->projected_x = param_1->projected_x + (int)param_1->pos_y;
  param_1->projected_z = param_1->projected_z + (int)param_1->pos_z;
  param_1->projected_y = param_1->projected_y + (int)*(s16 *)(param_1 + 0x32);
  if (param_1->action_flag == '\x05') {
    GTE_MulMatrix3(iVar8,param_1->parent + 0x18);
  }
  bVar4 = false;
  if ((param_1->state_flag145 == '\0') && ((param_1->state_flag146 & 3) != 0)) {
    _g_GTE_WorkC0 = param_1->rot_x;
    _DAT_1f8000c2 = param_1->rot_y;
    _g_GTE_WorkC4 = 0;
    GTE_LoadRotMatrixFromSVec(&g_GTE_WorkC0,&DAT_1f800040);
    GTE_ComposeMatrix(&DAT_1f800020,0x1f800000,0x1f800060);
    GTE_MulMatrix4(&DAT_1f800040,0x1f800060);
    GTE_MulMatrixVec(0x1f800060,param_1 + 0x88,&DAT_1f800074);
    _DAT_1f800074 = _DAT_1f800074 + param_1->pos_y;
    _DAT_1f800078 = _DAT_1f800078 + *(s16 *)(param_1 + 0x32);
    bVar3 = true;
    _DAT_1f80007c = _DAT_1f80007c + param_1->pos_z;
  }
  else {
    bVar3 = false;
  }
  iVar9 = 0;
  iVar8 = param_1;
  if (param_1->counter2 != '\0') {
    do {
      if ((int)(uint)param_1->counter1 <= iVar9) break;
      iVar5 = iVar8->sprite_ptr1;
      sVar2 = *(s16 *)(iVar5 + 6);
      GTE_LoadScaleMatrix(0x1f800000,(int)*(s16 *)(iVar5 + 0x38),(int)*(s16 *)(iVar5 + 0x3a),
                   (int)*(s16 *)(iVar5 + 0x3c));
      GTE_LoadRotMatrixFromSVec(iVar8->sprite_ptr1 + 8,&DAT_1f800020);
      GTE_ComposeMatrix(&DAT_1f800020,0x1f800000,&DAT_1f800040);
      if (sVar2 < 0) {
        if (bVar3) {
          if (!bVar4) {
            GTE_ComposeMatrix(0x1f800060,&DAT_1f800040,iVar8->sprite_ptr1 + 0x18);
            GTE_MulMatrix(iVar8->sprite_ptr1,iVar8->sprite_ptr1 + 0x2c);
            *(int *)(iVar8->sprite_ptr1 + 0x2c) =
                 *(int *)(iVar8->sprite_ptr1 + 0x2c) + _DAT_1f800074;
            *(int *)(iVar8->sprite_ptr1 + 0x30) =
                 *(int *)(iVar8->sprite_ptr1 + 0x30) + _DAT_1f800078;
            iVar7 = iVar8->sprite_ptr1;
            iVar6 = iVar7->scale_y;
            bVar4 = true;
            iVar5 = _DAT_1f80007c;
            goto code_r0x80059c08;
          }
          GTE_ComposeMatrix(param_1 + 0x98,&DAT_1f800040,iVar8->sprite_ptr1 + 0x18);
          GTE_MulMatrix(iVar8->sprite_ptr1,iVar8->sprite_ptr1 + 0x2c);
          *(int *)(iVar8->sprite_ptr1 + 0x2c) =
               *(int *)(iVar8->sprite_ptr1 + 0x2c) + param_1->projected_x;
          *(int *)(iVar8->sprite_ptr1 + 0x30) =
               *(int *)(iVar8->sprite_ptr1 + 0x30) + param_1->projected_y;
          iVar7 = iVar8->sprite_ptr1;
          iVar6 = iVar7->scale_y + param_1->projected_z;
        }
        else {
          GTE_ComposeMatrix(param_1 + 0x98,&DAT_1f800040,iVar8->sprite_ptr1 + 0x18);
          GTE_MulMatrix(iVar8->sprite_ptr1,iVar8->sprite_ptr1 + 0x2c);
          *(int *)(iVar8->sprite_ptr1 + 0x2c) =
               *(int *)(iVar8->sprite_ptr1 + 0x2c) + param_1->projected_x;
          *(int *)(iVar8->sprite_ptr1 + 0x30) =
               *(int *)(iVar8->sprite_ptr1 + 0x30) + param_1->projected_y;
          iVar7 = iVar8->sprite_ptr1;
          iVar6 = iVar7->scale_y + param_1->projected_z;
        }
      }
      else {
        iVar5 = param_1 + sVar2 * 4;
        GTE_ComposeMatrix(iVar5->sprite_ptr1 + 0x18,&DAT_1f800040,iVar8->sprite_ptr1 + 0x18);
        GTE_MulMatrix(iVar8->sprite_ptr1,iVar8->sprite_ptr1 + 0x2c);
        *(int *)(iVar8->sprite_ptr1 + 0x2c) =
             *(int *)(iVar8->sprite_ptr1 + 0x2c) + *(int *)(iVar5->sprite_ptr1 + 0x2c);
        *(int *)(iVar8->sprite_ptr1 + 0x30) =
             *(int *)(iVar8->sprite_ptr1 + 0x30) + *(int *)(iVar5->sprite_ptr1 + 0x30);
        iVar7 = iVar8->sprite_ptr1;
        iVar6 = iVar7->scale_y;
        iVar5 = *(int *)(iVar5->sprite_ptr1 + 0x34);
code_r0x80059c08:
        iVar6 = iVar6 + iVar5;
      }
      iVar7->scale_y = iVar6;
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar9 < (int)(uint)param_1->counter2);
  }
  param_1->counter1 = uVar1;
  return;
}

