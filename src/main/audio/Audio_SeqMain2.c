/**
 * @brief Audio sequence main variant 2: SEQ+SPU control (236L)
 * @note Original: func_80075FF8 at 0x80075FF8
 */
// Audio_SeqMain2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80075ff8(int param_1,u16 *param_2,s16 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  u8 *pbVar7;
  u8 *pbVar8;
  u8 *pbVar9;
  uint uVar10;
  
  uVar10 = *(uint *)((uint)*param_2 * 4 + param_1->sprite_data);
  param_1->anim_data = param_1->anim_data & 0x7fffffff;
  pbVar7 = (u8 *)(param_1->sprite_data + (uVar10 & 0xffffff));
  param_1->counter1 = (char)(uVar10 >> 0x18);
  if (((int)uVar10 >> 0x18 & 0x40U) == 0) {
    if ((param_1->counter1 & 0x80) == 0) {
      iVar1 = 0;
    }
    else {
      uVar10 = (int)((uint)*pbVar7 << 0x18) >> 0x14 | (uint)(pbVar7->flags >> 4);
      _g_GTE_WorkC0 = (u16)uVar10;
      pbVar8 = pbVar7 + 3;
      _DAT_1f8000c2 = (u16)((int)((uint)pbVar7->flags << 0x1c) >> 0x14) | (u16)pbVar7->kind;
      pbVar7 = pbVar7 + 4;
      _g_GTE_WorkC4 = (u16)((int)((uint)*pbVar8 << 0x18) >> 0x14) | (u16)(*pbVar7 >> 4);
      iVar3 = (int)param_3;
      iVar1 = uVar10 - (int)param_1->gte_input;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->move_speed = (s16)(iVar1 / iVar3);
      iVar1 = (int)(s16)_DAT_1f8000c2 - (int)*(s16 *)(param_1 + 0x8a);
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->gte_offset_y = (s16)(iVar1 / iVar3);
      iVar2 = (int)(s16)_g_GTE_WorkC4 - (int)*(s16 *)(param_1 + 0x8c);
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      iVar1 = 1;
      param_1->gte_offset_z = (s16)(iVar2 / iVar3);
    }
    iVar2 = 0;
    param_1->counter1 = param_1->counter1 & 0x3f;
    iVar3 = param_1;
    if (param_1->counter2 != '\0') {
      do {
        if ((int)(uint)param_1->counter1 <= iVar2) {
          return;
        }
        if ((iVar2 + iVar1 & 1U) == 0) {
          _g_GTE_WorkC0 = (u16)*pbVar7 << 4 | (u16)(pbVar7->flags >> 4);
          pbVar8 = pbVar7 + 3;
          _DAT_1f8000c2 = (pbVar7->flags & 0xf) << 8 | (u16)pbVar7->kind;
          pbVar7 = pbVar7 + 4;
          _g_GTE_WorkC4 = (u16)*pbVar8 << 4 | (u16)(*pbVar7 >> 4);
        }
        else {
          _g_GTE_WorkC0 = (*pbVar7 & 0xf) << 8 | (u16)pbVar7->flags;
          pbVar8 = pbVar7 + 3;
          _DAT_1f8000c2 = (u16)pbVar7->kind << 4 | (u16)(*pbVar8 >> 4);
          pbVar9 = pbVar7 + 4;
          pbVar7 = pbVar7 + 5;
          _g_GTE_WorkC4 = (*pbVar8 & 0xf) << 8 | (u16)*pbVar9;
        }
        iVar6 = (uint)_g_GTE_WorkC0 - (uint)*(u16 *)(iVar3->sprite_ptr1 + 8);
        _g_GTE_WorkC0 = (u16)iVar6;
        iVar5 = (uint)_DAT_1f8000c2 - (uint)*(u16 *)(iVar3->sprite_ptr1 + 10);
        _DAT_1f8000c2 = (u16)iVar5;
        iVar4 = (uint)_g_GTE_WorkC4 - (uint)*(u16 *)(iVar3->sprite_ptr1 + 0xc);
        _g_GTE_WorkC4 = (u16)iVar4;
        if (0x800 < iVar6 * 0x10000 >> 0x10) {
          _g_GTE_WorkC0 = _g_GTE_WorkC0 + -0x1000;
        }
        if ((s16)_g_GTE_WorkC0 < -0x800) {
          _g_GTE_WorkC0 = _g_GTE_WorkC0 + 0x1000;
        }
        if (0x800 < iVar5 * 0x10000 >> 0x10) {
          _DAT_1f8000c2 = _DAT_1f8000c2 - 0x1000;
        }
        if ((s16)_DAT_1f8000c2 < -0x800) {
          _DAT_1f8000c2 = _DAT_1f8000c2 + 0x1000;
        }
        if (0x800 < iVar4 * 0x10000 >> 0x10) {
          _g_GTE_WorkC4 = _g_GTE_WorkC4 - 0x1000;
        }
        if ((s16)_g_GTE_WorkC4 < -0x800) {
          _g_GTE_WorkC4 = _g_GTE_WorkC4 + 0x1000;
        }
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_g_GTE_WorkC0 == -0x80000000)) {
          trap(0x1800);
        }
        *(s16 *)(iVar3->sprite_ptr1 + 0x10) = (s16)_g_GTE_WorkC0 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_DAT_1f8000c2 == -0x80000000)) {
          trap(0x1800);
        }
        *(s16 *)(iVar3->sprite_ptr1 + 0x12) = (s16)_DAT_1f8000c2 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_g_GTE_WorkC4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar2 = iVar2 + 1;
        *(s16 *)(iVar3->sprite_ptr1 + 0x14) = (s16)_g_GTE_WorkC4 / param_3;
        iVar3 = iVar3 + 4;
      } while (iVar2 < (int)(uint)param_1->counter2);
    }
  }
  else {
    if (((int)uVar10 >> 0x18 & 0x80U) != 0) {
      uVar10 = (int)((uint)*pbVar7 << 0x18) >> 0x14 | (uint)(pbVar7->flags >> 4);
      _g_GTE_WorkC0 = (u16)uVar10;
      _DAT_1f8000c2 = (u16)((int)((uint)pbVar7->flags << 0x1c) >> 0x14) | (u16)pbVar7->kind;
      _g_GTE_WorkC4 = (u16)((int)((uint)pbVar7->sub_type << 0x18) >> 0x14) | (u16)(pbVar7->state >> 4);
      iVar1 = (int)param_3;
      iVar3 = uVar10 - (int)param_1->gte_input;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->move_speed = (s16)(iVar3 / iVar1);
      iVar3 = (int)(s16)_DAT_1f8000c2 - (int)*(s16 *)(param_1 + 0x8a);
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->gte_offset_y = (s16)(iVar3 / iVar1);
      iVar3 = (int)(s16)_g_GTE_WorkC4 - (int)*(s16 *)(param_1 + 0x8c);
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      pbVar7 = pbVar7 + 9;
      param_1->gte_offset_z = (s16)(iVar3 / iVar1);
    }
    iVar3 = 0;
    param_1->counter1 = param_1->counter1 & 0x3f;
    iVar1 = param_1;
    if (param_1->counter2 != '\0') {
      do {
        if ((int)(uint)param_1->counter1 <= iVar3) {
          return;
        }
        _g_GTE_WorkC0 = (u16)*pbVar7 << 4 | (u16)(pbVar7->flags >> 4);
        _DAT_1f8000c2 = (pbVar7->flags & 0xf) << 8 | (u16)pbVar7->kind;
        _g_GTE_WorkC4 = (u16)pbVar7->sub_type << 4 | (u16)(pbVar7->state >> 4);
        *(u16 *)(iVar1->sprite_ptr1 + 0x38) = (pbVar7->state & 0xf) << 8;
        *(u16 *)(iVar1->sprite_ptr1 + 0x38) =
             *(u16 *)(iVar1->sprite_ptr1 + 0x38) | (u16)pbVar7->behavior_state;
        *(s16 *)(iVar1->sprite_ptr1 + 0x38) = *(s16 *)(iVar1->sprite_ptr1 + 0x38) << 3;
        *(u16 *)(iVar1->sprite_ptr1 + 0x3a) = (u16)pbVar7->action_state << 4;
        *(u16 *)(iVar1->sprite_ptr1 + 0x3a) =
             *(u16 *)(iVar1->sprite_ptr1 + 0x3a) | (u16)(pbVar7->sub_action >> 4);
        *(s16 *)(iVar1->sprite_ptr1 + 0x3a) = *(s16 *)(iVar1->sprite_ptr1 + 0x3a) << 3;
        *(u16 *)(iVar1->sprite_ptr1 + 0x3c) = (pbVar7->sub_action & 0xf) << 8;
        *(u16 *)(iVar1->sprite_ptr1 + 0x3c) =
             *(u16 *)(iVar1->sprite_ptr1 + 0x3c) | (u16)pbVar7->counter1;
        *(s16 *)(iVar1->sprite_ptr1 + 0x3c) = *(s16 *)(iVar1->sprite_ptr1 + 0x3c) << 3;
        iVar4 = (uint)_g_GTE_WorkC0 - (uint)*(u16 *)(iVar1->sprite_ptr1 + 8);
        _g_GTE_WorkC0 = (u16)iVar4;
        iVar6 = (uint)_DAT_1f8000c2 - (uint)*(u16 *)(iVar1->sprite_ptr1 + 10);
        _DAT_1f8000c2 = (u16)iVar6;
        pbVar7 = pbVar7 + 9;
        iVar2 = (uint)_g_GTE_WorkC4 - (uint)*(u16 *)(iVar1->sprite_ptr1 + 0xc);
        _g_GTE_WorkC4 = (u16)iVar2;
        if (0x800 < iVar4 * 0x10000 >> 0x10) {
          _g_GTE_WorkC0 = _g_GTE_WorkC0 + -0x1000;
        }
        if ((s16)_g_GTE_WorkC0 < -0x800) {
          _g_GTE_WorkC0 = _g_GTE_WorkC0 + 0x1000;
        }
        if (0x800 < iVar6 * 0x10000 >> 0x10) {
          _DAT_1f8000c2 = _DAT_1f8000c2 - 0x1000;
        }
        if ((s16)_DAT_1f8000c2 < -0x800) {
          _DAT_1f8000c2 = _DAT_1f8000c2 + 0x1000;
        }
        if (0x800 < iVar2 * 0x10000 >> 0x10) {
          _g_GTE_WorkC4 = _g_GTE_WorkC4 - 0x1000;
        }
        if ((s16)_g_GTE_WorkC4 < -0x800) {
          _g_GTE_WorkC4 = _g_GTE_WorkC4 + 0x1000;
        }
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_g_GTE_WorkC0 == -0x80000000)) {
          trap(0x1800);
        }
        *(s16 *)(iVar1->sprite_ptr1 + 0x10) = (s16)_g_GTE_WorkC0 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_DAT_1f8000c2 == -0x80000000)) {
          trap(0x1800);
        }
        *(s16 *)(iVar1->sprite_ptr1 + 0x12) = (s16)_DAT_1f8000c2 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_g_GTE_WorkC4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar3 = iVar3 + 1;
        *(s16 *)(iVar1->sprite_ptr1 + 0x14) = (s16)_g_GTE_WorkC4 / param_3;
        iVar1 = iVar1 + 4;
      } while (iVar3 < (int)(uint)param_1->counter2);
    }
  }
  return;
}
