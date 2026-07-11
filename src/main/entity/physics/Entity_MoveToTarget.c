/**
 * @brief Entity moves toward target: collision check with entity->collision_state state, sets angle via atan2
 * @note Original: func_80041938 at 0x80041938
 */
// Entity_MoveToTarget



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s8 FUN_80041938(int param_1,s16 param_2,s16 param_3)

{
  u8 bVar1;
  s8 cVar2;
  
  cVar2 = param_1->collision_state;
  if (cVar2 == '\0') {
    bVar1 = FUN_80049250(param_1,(int)param_2,(int)param_3);
    param_1->collision_state = bVar1;
    if (bVar1 == 0) {
      cVar2 = '\0';
    }
    else {
      bVar1 = bVar1 & 1;
      param_1->collision_state = bVar1;
      if (bVar1 != 0) {
        param_1->collision_state = bVar1 | 0x80;
        FUN_80049674(param_1);
        param_1->angle_delta = _g_CollisionNormalY;
      }
      cVar2 = param_1->collision_state;
    }
  }
  return cVar2;
}
