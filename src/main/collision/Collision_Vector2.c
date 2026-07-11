/**
 * @brief Collision vector calc variant 2: GTE cos/sin, stores result
 * @note Original: func_800492B0 at 0x800492B0
 */
// Collision_Vector2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800492b0(int param_1,s16 param_2,s16 param_3,s16 param_4)

{
  int iVar1;
  int iVar2;
  s32 uVar3;
  u16 uVar4;
  
  iVar1 = FUN_80083e80((int)param_4);
  iVar2 = FUN_80083f50((int)param_4);
  _DAT_1f8001be = *(s16 *)(param_1 + 0x32) + param_3;
  _DAT_1f8001c0 = param_1->pos_z + (s16)(-iVar1 * (int)param_2 >> 0xc);
  _DAT_1f8001bc = param_1->pos_y + (s16)(iVar2 * param_2 >> 0xc);
  iVar1 = FUN_800498c8();
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_80045724();
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
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
      uVar3 = 2;
    }
  }
  return uVar3;
}
