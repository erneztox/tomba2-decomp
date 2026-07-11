/**
 * @brief Collision loop: repeatedly checks floor height until valid ground found (bit 0x4000)
 * @note Original: func_800498C8 at 0x800498C8
 */
// Collision_FindGround



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Collision_FindGround(int param_1)

{
  int iVar1;
  
  while( true ) {
    Collision_GridInit(param_1);
    Collision_InitGrid(g_CollisionZone);
    iVar1 = Collision_GetFloorHeight();
    if (iVar1 == 0) {
      return 0;
    }
    if ((*_g_CollisionResult & 0x4000) == 0) break;
    param_1->collision_dir = (char)*_g_CollisionResult;
    if ((*_g_CollisionResult & 0x4000) == 0) {
      return 1;
    }
  }
  return 1;
}
