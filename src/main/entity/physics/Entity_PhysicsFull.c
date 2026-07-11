/**
 * @brief Full physics step: runs collision check + rotation, sets entity[0x56] from result
 * @note Original: func_8003FBC4 at 0x8003FBC4
 */
// Entity_PhysicsFull



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_PhysicsFull(int param_1)

{
  Entity_PhysicsStep();
  Entity_PhysicsStepRot(param_1);
  param_1->rot_y = _g_CollisionNormalX;
  return;
}
