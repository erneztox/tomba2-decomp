/**
 * @brief Physics/collision step: checks collision, updates entity position from result
 * @note Original: func_8004766C at 0x8004766C
 */
// Entity_PhysicsStep



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_PhysicsStep(int param_1)

{
  s32 uVar1;
  int iVar2;
  s16 sVar3;
  
  _DAT_1f8001bc = param_1->pos_y;
  _DAT_1f8001be = *(s16 *)(param_1 + 0x32);
  _DAT_1f8001c0 = param_1->pos_z;
  do {
    uVar1 = Entity_CheckCollision(param_1);
    Collision_InitGrid(param_1->collision_dir);
    iVar2 = Collision_GetFloorHeight();
    if (iVar2 == 0) {
      return 0;
    }
  } while (((*_g_CollisionResult & 0x4000) != 0) &&
          (param_1->collision_dir = (char)*_g_CollisionResult, (*_g_CollisionResult & 0x4000) != 0));
  Collision_CheckWall();
  Collision_ProcessResult();
  _DAT_1f8001bc = _DAT_1f8001bc + _g_CollisionFlag;
  sVar3 = _DAT_1f8001c0 + _g_CollisionFlag2;
  _DAT_1f8001c0 = sVar3;
  param_1->pos_y = _DAT_1f8001bc;
  param_1->pos_z = sVar3;
  return uVar1;
}
