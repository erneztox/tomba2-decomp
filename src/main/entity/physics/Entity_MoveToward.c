/**
 * @brief Moves entity toward target: physics step with collision, sets angle on success
 * @note Original: func_80041194 at 0x80041194
 */
// Entity_MoveToward



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80041194(int param_1,s16 param_2,u8 param_3,int param_4)

{
  s16 sVar1;
  s16 uVar2;
  u16 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_8004766c();
  if (iVar4 == 0) {
    return 0;
  }
  if (param_4 == 0) {
    FUN_80048894(param_1);
    if (_DAT_1f8001a4 == 0) {
      return 0;
    }
    iVar4 = (int)*(s16 *)(param_1 + 0x32) - (int)_DAT_1f8001a4;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0xc7f < iVar4) {
      return 0;
    }
    *(s16 *)(param_1 + 0x32) = _DAT_1f8001a4 - param_2;
  }
  else {
    iVar4 = 0;
    do {
      iVar5 = FUN_80049250(param_1,0,(int)param_2);
      if (iVar5 != 0) break;
      iVar4 = iVar4 + 1;
      *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 0x20;
    } while (iVar4 < 100);
    if (iVar4 == 100) {
      return 0;
    }
  }
  FUN_80049674(param_1);
  uVar2 = _g_CollisionNormalY;
  sVar1 = _g_CollisionNormalX;
  param_1->gte_flags = param_3 & 1;
  param_1->draw_x = sVar1;
  param_1->angle_delta = uVar2;
  if ((param_3 & 1) == 0) {
    uVar3 = param_1->draw_x;
  }
  else {
    uVar3 = sVar1 - 0x800U & 0xfff;
  }
  param_1->rot_y = uVar3;
  return 1;
}
