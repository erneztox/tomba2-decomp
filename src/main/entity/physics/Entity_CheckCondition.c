/**
 * @brief Entity condition check: tests entity->kind and game state for behavior activation
 * @note Original: func_8006BD20 at 0x8006BD20
 */
// Entity_CheckCondition



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_CheckCondition(int param_1)

{
  int iVar1;
  
  if (((7 < param_1->kind) &&
      (((g_GameState != '\x05' || (2 < g_LevelId - 1)) && ((DAT_800e7ff4 & 8) != 0)))) &&
     ((Entity_ActionDispatch(&g_CollisionEntity,1), DAT_800bfad6 == '\0' &&
      (iVar1 = Entity_BehaviorList(&g_CollisionEntity,param_1,1,1), iVar1 != 0)))) {
    DAT_800e7eab = (u8)(_g_EntityAngle + 0x800 >> 4);
  }
  return;
}
