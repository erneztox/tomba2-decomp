/**
 * @brief Physics step with rotation: computes rotation angles from collision data via atan2
 * @note Original: func_80048750 at 0x80048750
 */
// Entity_PhysicsStepRot



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_PhysicsStepRot(int param_1)

{
  s8 cVar1;
  s16 sVar2;
  int iVar3;
  int iVar4;
  
  _DAT_1f8001bc = param_1->pos_y;
  _DAT_1f8001be = *(s16 *)(param_1 + 0x32);
  _DAT_1f8001c0 = param_1->pos_z;
  do {
    Entity_CheckCollision(param_1);
    Collision_InitGrid(param_1->collision_dir);
    iVar3 = Collision_GetFloorHeight();
    if (iVar3 == 0) {
      return 0;
    }
  } while (((*_g_CollisionResult & 0x4000) != 0) &&
          (param_1->collision_dir = (char)*_g_CollisionResult, (*_g_CollisionResult & 0x4000) != 0));
  Collision_ProcessResult();
  cVar1 = _DAT_1f8001e8->flags;
  iVar4 = (int)_DAT_1f8001e8->kind;
  iVar3 = (int)*_DAT_1f8001e8;
  sVar2 = Math_Atan2(iVar4,iVar3);
  _g_CollisionNormalX = -sVar2 & 0xfff;
  sVar2 = Math_SqrtGTE(iVar3 * iVar3 + iVar4 * iVar4);
  _g_CollisionNormalY = Math_Atan2((int)(s16)cVar1,(int)sVar2);
  return 1;
}
