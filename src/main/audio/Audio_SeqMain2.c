/**
 * @brief Audio sequence main variant 2: SEQ+SPU control (236L)
 * @note Original: func_80075FF8 at 0x80075FF8
 */
// Audio_SeqMain2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Audio_SeqMain2(int param_1,u16 *param_2,s16 param_3)

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
  
  uVar10 = *(uint *)((uint)*param_2 * 4 + param_1->flags);
  param_1->flags = param_1->flags & 0x7fffffff;
  pbVar7 = (u8 *)(param_1->flags + (uVar10 & 0xffffff));
  param_1->flags = (char)(uVar10 >> 0x18);
  if (((int)uVar10 >> 0x18 & 0x40U) == 0) {
    if ((param_1->flags & 0x80) == 0) {
      iVar1 = 0;
    }
    else {
      uVar10 = (int)((uint)*pbVar7 << 0x18) >> 0x14 | (uint)(pbVar7->flags >> 4);
      _g_GTE_WorkC0 = (u16)uVar10;
      pbVar8 = pbVar7 + 3;
      _DAT_1f8000c2 = (u16)((int)((uint)pbVar7->flags << 0x1c) >> 0x14) | (u16)pbVar7->flags;
      pbVar7 = pbVar7 + 4;
      _g_GTE_WorkC4 = (u16)((int)((uint)*pbVar8 << 0x18) >> 0x14) | (u16)(*pbVar7 >> 4);
      iVar3 = (int)param_3;
      iVar1 = uVar10 - (int)param_1->flags;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->flags = (s16)(iVar1 / iVar3);
      iVar1 = (int)(s16)_DAT_1f8000c2 - (int)param_1->flags;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar1 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->flags = (s16)(iVar1 / iVar3);
      iVar2 = (int)(s16)_g_GTE_WorkC4 - (int)param_1->flags;
      if (iVar3 == 0) {
        trap(0x1c00);
      }
      if ((iVar3 == -1) && (iVar2 == -0x80000000)) {
        trap(0x1800);
      }
      iVar1 = 1;
      param_1->flags = (s16)(iVar2 / iVar3);
    }
    iVar2 = 0;
    param_1->flags = param_1->flags & 0x3f;
    iVar3 = param_1;
    if (param_1->flags != '\0') {
      do {
        if ((int)(uint)param_1->flags <= iVar2) {
          return;
        }
        if ((iVar2 + iVar1 & 1U) == 0) {
          _g_GTE_WorkC0 = (u16)*pbVar7 << 4 | (u16)(pbVar7->flags >> 4);
          pbVar8 = pbVar7 + 3;
          _DAT_1f8000c2 = (pbVar7->flags & 0xf) << 8 | (u16)pbVar7->flags;
          pbVar7 = pbVar7 + 4;
          _g_GTE_WorkC4 = (u16)*pbVar8 << 4 | (u16)(*pbVar7 >> 4);
        }
        else {
          _g_GTE_WorkC0 = (*pbVar7 & 0xf) << 8 | (u16)pbVar7->flags;
          pbVar8 = pbVar7 + 3;
          _DAT_1f8000c2 = (u16)pbVar7->flags << 4 | (u16)(*pbVar8 >> 4);
          pbVar9 = pbVar7 + 4;
          pbVar7 = pbVar7 + 5;
          _g_GTE_WorkC4 = (*pbVar8 & 0xf) << 8 | (u16)*pbVar9;
        }
        iVar6 = (uint)_g_GTE_WorkC0 - (uint)*(u16 *)(iVar3->flags + 8);
        _g_GTE_WorkC0 = (u16)iVar6;
        iVar5 = (uint)_DAT_1f8000c2 - (uint)*(u16 *)(iVar3->flags + 10);
        _DAT_1f8000c2 = (u16)iVar5;
        iVar4 = (uint)_g_GTE_WorkC4 - (uint)*(u16 *)(iVar3->flags + 0xc);
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
        *(s16 *)(iVar3->flags + 0x10) = (s16)_g_GTE_WorkC0 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_DAT_1f8000c2 == -0x80000000)) {
          trap(0x1800);
        }
        *(s16 *)(iVar3->flags + 0x12) = (s16)_DAT_1f8000c2 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_g_GTE_WorkC4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar2 = iVar2 + 1;
        *(s16 *)(iVar3->flags + 0x14) = (s16)_g_GTE_WorkC4 / param_3;
        iVar3 = iVar3 + 4;
      } while (iVar2 < (int)(uint)param_1->flags);
    }
  }
  else {
    if (((int)uVar10 >> 0x18 & 0x80U) != 0) {
      uVar10 = (int)((uint)*pbVar7 << 0x18) >> 0x14 | (uint)(pbVar7->flags >> 4);
      _g_GTE_WorkC0 = (u16)uVar10;
      _DAT_1f8000c2 = (u16)((int)((uint)pbVar7->flags << 0x1c) >> 0x14) | (u16)pbVar7->flags;
      _g_GTE_WorkC4 = (u16)((int)((uint)pbVar7->flags << 0x18) >> 0x14) | (u16)(pbVar7->flags >> 4);
      iVar1 = (int)param_3;
      iVar3 = uVar10 - (int)param_1->flags;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->flags = (s16)(iVar3 / iVar1);
      iVar3 = (int)(s16)_DAT_1f8000c2 - (int)param_1->flags;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      param_1->flags = (s16)(iVar3 / iVar1);
      iVar3 = (int)(s16)_g_GTE_WorkC4 - (int)param_1->flags;
      if (iVar1 == 0) {
        trap(0x1c00);
      }
      if ((iVar1 == -1) && (iVar3 == -0x80000000)) {
        trap(0x1800);
      }
      pbVar7 = pbVar7 + 9;
      param_1->flags = (s16)(iVar3 / iVar1);
    }
    iVar3 = 0;
    param_1->flags = param_1->flags & 0x3f;
    iVar1 = param_1;
    if (param_1->flags != '\0') {
      do {
        if ((int)(uint)param_1->flags <= iVar3) {
          return;
        }
        _g_GTE_WorkC0 = (u16)*pbVar7 << 4 | (u16)(pbVar7->flags >> 4);
        _DAT_1f8000c2 = (pbVar7->flags & 0xf) << 8 | (u16)pbVar7->flags;
        _g_GTE_WorkC4 = (u16)pbVar7->flags << 4 | (u16)(pbVar7->flags >> 4);
        *(u16 *)(iVar1->flags + 0x38) = (pbVar7->flags & 0xf) << 8;
        *(u16 *)(iVar1->flags + 0x38) =
             *(u16 *)(iVar1->flags + 0x38) | (u16)pbVar7->flags;
        *(s16 *)(iVar1->flags + 0x38) = *(s16 *)(iVar1->flags + 0x38) << 3;
        *(u16 *)(iVar1->flags + 0x3a) = (u16)pbVar7->flags << 4;
        *(u16 *)(iVar1->flags + 0x3a) =
             *(u16 *)(iVar1->flags + 0x3a) | (u16)(pbVar7->flags >> 4);
        *(s16 *)(iVar1->flags + 0x3a) = *(s16 *)(iVar1->flags + 0x3a) << 3;
        *(u16 *)(iVar1->flags + 0x3c) = (pbVar7->flags & 0xf) << 8;
        *(u16 *)(iVar1->flags + 0x3c) =
             *(u16 *)(iVar1->flags + 0x3c) | (u16)pbVar7->flags;
        *(s16 *)(iVar1->flags + 0x3c) = *(s16 *)(iVar1->flags + 0x3c) << 3;
        iVar4 = (uint)_g_GTE_WorkC0 - (uint)*(u16 *)(iVar1->flags + 8);
        _g_GTE_WorkC0 = (u16)iVar4;
        iVar6 = (uint)_DAT_1f8000c2 - (uint)*(u16 *)(iVar1->flags + 10);
        _DAT_1f8000c2 = (u16)iVar6;
        pbVar7 = pbVar7 + 9;
        iVar2 = (uint)_g_GTE_WorkC4 - (uint)*(u16 *)(iVar1->flags + 0xc);
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
        *(s16 *)(iVar1->flags + 0x10) = (s16)_g_GTE_WorkC0 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_DAT_1f8000c2 == -0x80000000)) {
          trap(0x1800);
        }
        *(s16 *)(iVar1->flags + 0x12) = (s16)_DAT_1f8000c2 / param_3;
        if (param_3 == 0) {
          trap(0x1c00);
        }
        if ((param_3 == -1) && ((s16)_g_GTE_WorkC4 == -0x80000000)) {
          trap(0x1800);
        }
        iVar3 = iVar3 + 1;
        *(s16 *)(iVar1->flags + 0x14) = (s16)_g_GTE_WorkC4 / param_3;
        iVar1 = iVar1 + 4;
      } while (iVar3 < (int)(uint)param_1->flags);
    }
  }
  return;
}
