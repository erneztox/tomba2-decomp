/**
 * @brief Entity physics initializer: calls collision + slope calc, checks result
 * @note Original: func_80069858 at 0x80069858
 */
// Entity_PhysicsInit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_PhysicsInit(int param_1,int param_2,int param_3)

{
  int iVar1;
  s32 uVar2;
  int iVar3;
  
  if (DAT_800e7feb == '\0') {
    iVar1 = Entity_PhysicsStep(param_1);
    if (iVar1 < 0) {
      Collision_CalcAngle(param_1);
      return 1;
    }
    Collision_CalcAngle(param_1);
  }
  else {
    iVar1 = Math_CosGTE((int)_DAT_1f80018c);
    iVar3 = (int)_DAT_1f80018c;
    param_1->normal_x = (s16)(iVar1 >> 4);
    iVar1 = Math_Cos(iVar3);
    param_1->normal_z = -(s16)(iVar1 >> 4);
  }
  uVar2 = 0;
  if (param_3 == 0) {
    if ((param_2 == 0) && (param_1->move_mode != '\0')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      if (DAT_800e7feb == '\0') {
        uVar2 = Entity_CheckGround(param_1,param_1->kind - 2 < 2);
      }
    }
  }
  return uVar2;
}
