/**
 * @brief Collision full check variant 2: extended validation
 * @note Original: func_80046A44 at 0x80046A44
 */
// Collision_CheckFull2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
u16 Collision_CheckFull2(int param_1,u16 param_2,s16 param_3,s16 param_4)

{
  s32 bVar1;
  s16 sVar2;
  s16 sVar3;
  s16 sVar4;
  s16 sVar5;
  int iVar6;
  int iVar7;
  u16 uVar8;
  int iVar9;
  int iVar10;
  s16 unaff_s4;
  s8 cVar11;
  uint uVar12;
  uint uVar13;
  
  iVar6 = Math_Cos((int)param_1->rot_y);
  uVar13 = (uint)(-iVar6 * (int)(s16)param_2) >> 0xc;
  iVar7 = Math_CosGTE((int)param_1->rot_y);
  cVar11 = '\0';
  iVar6 = 10;
  iVar10 = (int)param_4;
  iVar9 = iVar10 + -1;
  uVar12 = (uint)(iVar7 * (s16)param_2) >> 0xc;
  do {
    _DAT_1f8001bc = param_1->pos_y + (s16)uVar12;
    _DAT_1f8001be = *(s16 *)(param_1 + 0x32) + param_3;
    _DAT_1f8001c0 = param_1->pos_z + (s16)uVar13;
    iVar7 = Collision_FindGround(param_1);
    if (iVar7 == 0) {
      return 0;
    }
    sVar4 = Math_Atan2((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                         (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
    sVar4 = -sVar4;
    if (cVar11 == '\0') {
      uVar8 = (sVar4 - param_1->rot_y) + 0x400U & 0xfff;
      if ((int)((uint)param_2 << 0x10) < 0) {
        uVar8 = uVar8 + 0x800 & 0xfff;
      }
      unaff_s4 = 4;
      if (0x7ff < uVar8) {
        unaff_s4 = 8;
      }
    }
    sVar5 = Collision_Push3((int)unaff_s4,1,cVar11);
    sVar3 = _g_CollisionFlag2;
    if ((int)sVar5 == 0) {
      return 0;
    }
    uVar8 = _DAT_1f8001bc & 0xffc0;
    param_1->pos_z = _DAT_1f8001c0 & 0xffc0;
    sVar2 = _g_CollisionFlag;
    param_1->pos_y = uVar8;
    param_1->pos_y = uVar8 + sVar2;
    bVar1 = ((int)sVar5 & 0x8000U) != 0;
    param_1->pos_z = param_1->pos_z + sVar3;
    if (bVar1) {
      iVar6 = iVar6 + -1;
      if (unaff_s4 == 8) {
        iVar7 = Math_CosGTE((int)sVar4);
        param_1->pos_y = param_1->pos_y + (s16)(iVar7 * iVar10 >> 0xc);
        iVar7 = Math_Cos((int)sVar4);
        sVar4 = param_1->pos_z + (s16)(-iVar7 * iVar10 >> 0xc);
LAB_80046cc8:
        param_1->pos_z = sVar4;
      }
      else if (unaff_s4 == 4) {
        iVar7 = Math_CosGTE((int)sVar4);
        param_1->pos_y = param_1->pos_y - (s16)(iVar7 * iVar10 >> 0xc);
        iVar7 = Math_Cos((int)sVar4);
        sVar4 = param_1->pos_z - (s16)(-iVar7 * iVar10 >> 0xc);
        goto LAB_80046cc8;
      }
      iVar7 = Math_CosGTE((int)param_1->rot_y);
      uVar12 = (uint)(iVar7 * iVar9) >> 0xc;
      iVar7 = Math_Cos((int)param_1->rot_y);
      uVar13 = (uint)(-iVar7 * iVar9) >> 0xc;
    }
    else {
      if (unaff_s4 == 8) {
        iVar7 = Math_CosGTE((int)sVar4);
        param_1->pos_y = param_1->pos_y + (s16)(iVar7 * iVar9 >> 0xc);
        iVar7 = Math_Cos((int)sVar4);
        sVar4 = param_1->pos_z + (s16)(-iVar7 * iVar9 >> 0xc);
      }
      else {
        if (unaff_s4 != 4) goto LAB_80046db0;
        iVar7 = Math_CosGTE((int)sVar4);
        param_1->pos_y = param_1->pos_y - (s16)(iVar7 * iVar9 >> 0xc);
        iVar7 = Math_Cos((int)sVar4);
        sVar4 = param_1->pos_z - (s16)(-iVar7 * iVar9 >> 0xc);
      }
      param_1->pos_z = sVar4;
    }
LAB_80046db0:
    if ((iVar6 == 0) || (cVar11 = '\x01', !bVar1)) {
      if ((_DAT_1f8001a6 & 0x400) != 0) {
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + _DAT_1f8001c4;
      }
      return _DAT_1f8001a6 >> 9 & 3;
    }
  } while( true );
}
