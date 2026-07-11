/**
 * @brief Applies gravity: entity[0x4A] += 0x400, updates entity[0x30] Y pos, triggers at angle wrap
 * @note Original: func_80066478 at 0x80066478
 */
// Entity_ApplyGravity



#include "tomba.h"
void Entity_ApplyGravity(int param_1)

{
  s16 sVar1;
  u16 uVar2;
  
  if ((-0x2400 < param_1->velocity_y) &&
     (sVar1 = param_1->rot_z + 0x40, param_1->rot_z = sVar1, -0x200 < sVar1)
     ) {
    param_1->rot_z = 0xfe00;
    Entity_AnimFrame();
  }
  Entity_ApplyVelocity(param_1,1);
  Entity_PhysicsStep2(param_1);
  Entity_SubState(param_1,3);
  uVar2 = param_1->velocity_y + 0x400;
  param_1->velocity_y = uVar2;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    param_1->state_flag145 = 2;
    param_1->action_state = param_1->action_state + '\x01';
  }
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  return;
}
