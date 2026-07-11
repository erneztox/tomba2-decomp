/**
 * @brief Checks collision at position offset, stores surface angle in entity[0x62]
 * @note Original: func_800419C4 at 0x800419C4
 */
// Entity_CheckCollisionAndAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800419c4(int param_1,s16 param_2,s16 param_3)

{
  int iVar1;
  
  iVar1 = FUN_80049250(param_1,(int)param_2,(int)param_3);
  if (iVar1 == 1) {
    FUN_80049674(param_1);
    param_1->angle_delta = _g_CollisionNormalY;
  }
  return iVar1 == 1;
}
