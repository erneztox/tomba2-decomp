/**
 * @brief Collision move main: full collision response pipeline
 * @note Original: func_80045CAC at 0x80045CAC
 */
// Collision_MoveMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80045cac(int param_1,u16 param_2,s16 param_3,s16 param_4)

{
  s32 bVar1;
  s16 sVar2;
  s16 sVar3;
  s16 sVar4;
  u16 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u16 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  s16 unaff_s6;
  u16 local_38;
  int local_30;
  
  iVar10 = (int)param_4;
  iVar6 = FUN_80083e80(iVar10);
  local_38 = 0;
  local_30 = 10;
  uVar11 = -iVar6 * (int)(s16)param_2 >> 0xc;
  iVar6 = FUN_80083f50(iVar10);
  uVar5 = 0;
  iVar12 = 0;
  sVar2 = (s16)uVar11;
  _DAT_1f8001be = *(s16 *)(param_1 + 0x32) + param_3;
  iVar7 = iVar6 * (s16)param_2 >> 0xc;
  iVar6 = -iVar7;
  while( true ) {
    do {
      _DAT_1f8001bc = param_1->pos_y + (s16)iVar7;
      _DAT_1f8001c0 = param_1->pos_z + (s16)uVar11;
      iVar8 = FUN_800498c8(param_1);
      if (iVar8 == 0) {
        return false;
      }
      sVar4 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                           (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
      if (uVar5 == 0) {
        if (iVar12 == 0) {
          uVar9 = (-param_4 - sVar4) + 0x400U & 0xfff;
          if ((int)((uint)param_2 << 0x10) < 0) {
            param_2 = -param_2;
            uVar9 = uVar9 + 0x800 & 0xfff;
          }
          unaff_s6 = 4;
          if (0x7ff < uVar9) {
            unaff_s6 = 8;
          }
        }
        else {
          bVar1 = unaff_s6 == 4;
          unaff_s6 = 4;
          if (bVar1) {
            unaff_s6 = 8;
          }
        }
      }
      uVar5 = FUN_8004602c((int)unaff_s6,0,(int)(s16)uVar5);
      sVar4 = _g_CollisionFlag2;
      if ((int)(s16)uVar5 == 0) {
        uVar11 = (uint)(u16)-sVar2;
        iVar7 = iVar6;
      }
      else {
        local_38 = uVar5 & 0x7fff;
        uVar9 = _DAT_1f8001bc & 0xffc0;
        param_1->pos_z = _DAT_1f8001c0 & 0xffc0;
        sVar3 = _g_CollisionFlag;
        param_1->pos_y = uVar9;
        param_1->pos_y = uVar9 + sVar3;
        bVar1 = ((int)(s16)uVar5 & 0x8000U) != 0;
        param_1->pos_z = param_1->pos_z + sVar4;
        if (bVar1) {
          local_30 = local_30 + -1;
        }
        uVar5 = (u16)bVar1;
        if (uVar5 == 0) {
          if (iVar7 << 0x10 < 1) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar7 = iVar7 + -1;
          }
          if ((int)(uVar11 << 0x10) < 1) {
            uVar11 = uVar11 + 1;
          }
          else {
            uVar11 = uVar11 - 1;
          }
          param_1->pos_y = param_1->pos_y - (s16)iVar7;
          param_1->pos_z = param_1->pos_z - (s16)uVar11;
        }
        else {
          param_1->pos_y = param_1->pos_y - (s16)iVar7;
          param_1->pos_z = param_1->pos_z - (s16)uVar11;
          iVar7 = FUN_80083f50(iVar10);
          iVar7 = iVar7 * (s16)param_2 >> 0xc;
          iVar8 = FUN_80083e80(iVar10);
          uVar11 = (uint)(-iVar8 * (int)(s16)param_2) >> 0xc;
          if (iVar7 << 0x10 < 1) {
            iVar7 = iVar7 + 1;
          }
          else {
            iVar7 = iVar7 + -1;
          }
          if ((int)(uVar11 << 0x10) < 1) {
            uVar11 = uVar11 + 1;
          }
          else {
            uVar11 = uVar11 - 1;
          }
          if (iVar12 != 0) {
            uVar11 = -uVar11;
            iVar7 = -iVar7;
          }
        }
      }
    } while ((local_30 != 0) && (uVar5 != 0));
    if (local_38 != 0) break;
    iVar12 = iVar12 + 1;
    if (1 < iVar12) {
      return false;
    }
  }
  DAT_1f800258 = 1;
  return iVar12 == 0;
}
