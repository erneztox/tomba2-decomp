/**
 * @brief Collision vector calc variant 4: different scratchpad usage
 * @note Original: func_80045B30 at 0x80045B30
 */
// Collision_Vector4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80045b30(int param_1,s16 param_2,s16 param_3,s16 param_4)

{
  u16 uVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  s32 uVar5;
  
  iVar3 = FUN_80083e80((int)param_4);
  iVar4 = FUN_80083f50((int)param_4);
  _DAT_1f8001be = *(s16 *)(param_1 + 0x32) + param_3;
  _DAT_1f8001c0 = param_1->pos_z + (s16)(-iVar3 * (int)param_2 >> 0xc);
  _DAT_1f8001bc = param_1->pos_y + (s16)(iVar4 * param_2 >> 0xc);
  iVar3 = FUN_800498c8();
  uVar5 = 0;
  if (iVar3 != 0) {
    iVar3 = 0;
    sVar2 = FUN_80048360();
    uVar1 = *(u16 *)(_g_CollisionResult + 4);
    _g_CollisionData = (u16 *)(_DAT_1f8001d8 + (uint)*(u16 *)(_g_CollisionResult + 2) * 8);
    if (uVar1 != 0) {
      do {
        if (((*_g_CollisionData & 2) != 0) && (iVar4 = FUN_800459d0((int)sVar2), iVar4 != -1))
        goto LAB_80045c64;
        iVar3 = iVar3 + 1;
        _g_CollisionData = _g_CollisionData + 4;
      } while (iVar3 < (int)(uint)uVar1);
    }
    iVar4 = 0;
LAB_80045c64:
    if (iVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 2;
      if ((_DAT_1f8001a6 & 0xf00) != 0x100) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}
