/**
 * @brief Applies velocity with cap: entity[0x4A] capped at 0x2800, updates Y pos, advances timer
 * @note Original: func_80066538 at 0x80066538
 */
// Entity_ApplyVelocityMax



#include "tomba.h"
void Entity_ApplyVelocityMax(int param_1)

{
  u16 uVar1;
  s16 sVar2;
  
  uVar1 = param_1->rot_z + 0x40;
  param_1->rot_z = uVar1;
  if (0 < (int)((uint)uVar1 << 0x10)) {
    param_1->state_flag144 = 1;
    param_1->rot_z = 0;
  }
  Entity_AnimFrame(param_1);
  Entity_ApplyVelocity(param_1,1);
  Entity_PhysicsStep2(param_1);
  Entity_SubState(param_1,3);
  sVar2 = param_1->velocity_y + 0x400;
  param_1->velocity_y = sVar2;
  if (0x2800 < sVar2) {
    param_1->velocity_y = 0x2800;
  }
  param_1->timer1 = param_1->timer1 + 1;
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  Entity_CollisionGround();
  return;
}
