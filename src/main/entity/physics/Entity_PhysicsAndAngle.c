/**
 * @brief Runs physics step + stores resulting angle in entity[0x60]
 * @note Original: func_80041AC0 at 0x80041AC0
 */
// Entity_PhysicsAndAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_PhysicsAndAngle(int param_1)

{
  s32 uVar1;
  
  uVar1 = Entity_PhysicsStep();
  Collision_CalcAngle(param_1);
  param_1->draw_x = _g_CollisionNormalX;
  return uVar1;
}
