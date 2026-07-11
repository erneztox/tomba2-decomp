/**
 * @brief Entity flag handler: entity[0x61] bit dispatch, sets mode/flag
 * @note Original: func_80053BF8 at 0x80053BF8
 */
// Entity_FlagHandler



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_FlagHandler(u8 *param_1,int param_2)

{
  u8 bVar1;
  
  if (param_1[0x61] != 0) {
    if ((param_1[0x61] & 1) != 0) {
      *param_1 = *param_1 & 7;
      if (param_2 != 0) {
        bVar1 = param_1[0x61] >> 4;
        if (bVar1 == 3) {
          param_1->physics_flag = 1;
        }
        else if (bVar1 < 4) {
          if (((bVar1 == 2) && (((int)*(s16 *)(param_1 + 0x16c) & 0xc000U) == 0xc000)) &&
             (Collision_CheckMain(param_1,0), (_DAT_1f8001a8 & 8) != 0)) {
            Collision_GetSurfaceType(param_1,0);
            Collision_CalcAngle(param_1);
            param_1->draw_angle = _g_CollisionNormalX;
          }
        }
        else if (bVar1 == 4) {
          param_1->physics_flag = 0;
        }
        param_1[0x61] = 0;
        *param_1 = *param_1 & 3;
      }
      return 1;
    }
    param_1[0x61] = 0;
  }
  return 0;
}
