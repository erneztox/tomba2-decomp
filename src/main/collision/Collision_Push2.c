/**
 * @brief Collision push variant 2: GTE cos/sin, applies push
 * @note Original: func_80047468 at 0x80047468
 */
// Collision_Push2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80047468(int param_1,s16 param_2,s16 param_3,s16 param_4)

{
  s16 sVar1;
  int iVar2;
  int iVar3;
  u16 uVar4;
  s32 uVar5;
  int iVar6;
  
  iVar2 = FUN_80083e80((int)param_4);
  iVar6 = (int)param_2;
  iVar3 = FUN_80083f50((int)param_4);
  _DAT_1f8001be = *(s16 *)(param_1 + 0x32) + param_3;
  _DAT_1f8001c0 = param_1->pos_z + (s16)(-iVar2 * iVar6 >> 0xc);
  _DAT_1f8001bc = param_1->pos_y + (s16)(iVar3 * iVar6 >> 0xc);
  iVar2 = FUN_800498c8();
  if (iVar2 != 0) {
    sVar1 = FUN_80085690((uint)_DAT_1f8001b8 - (uint)_DAT_1f8001b4,
                         (uint)_DAT_1f8001b6 - (uint)_DAT_1f8001b2);
    uVar4 = (-param_4 - sVar1) + 0x400U & 0xfff;
    if (iVar6 < 0) {
      uVar4 = uVar4 + 0x800 & 0xfff;
    }
    uVar5 = 4;
    if (0x7ff < uVar4) {
      uVar5 = 8;
    }
    iVar2 = FUN_8004720c(uVar5,0);
    if (iVar2 != 0) {
      uVar4 = _DAT_1f8001a6 & 0xf;
      if (uVar4 == 2) {
        if ((_DAT_1f8001a6 & 0xf00) == 0x100) {
          return 0xfffffffe;
        }
        return 2;
      }
      if (2 < uVar4) {
        if (uVar4 == 4) {
          return uVar5;
        }
        if (uVar4 == 8) {
          return uVar5;
        }
        return 0;
      }
      if (uVar4 != 1) {
        return 0;
      }
      uVar4 = _DAT_1f8001a6 & 0xf00;
      if (uVar4 != 0x600) {
        if (uVar4 < 0x601) {
          if (uVar4 != 0x100) {
            return 1;
          }
          if (g_SubState != '\0') {
            _DAT_1f8001a6 = _DAT_1f8001a6 & 0xff;
            return 1;
          }
        }
        else if (uVar4 != 0x700) {
          return 1;
        }
      }
      return 0xffffffff;
    }
  }
  return 0;
}
