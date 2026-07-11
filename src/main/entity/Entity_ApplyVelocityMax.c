/**
 * @brief Applies velocity with cap: entity[0x4A] capped at 0x2800, updates Y pos, advances timer
 * @note Original: func_80066538 at 0x80066538
 */
// Entity_ApplyVelocityMax



#include "tomba.h"
void FUN_80066538(int param_1)

{
  ushort uVar1;
  short sVar2;
  
  uVar1 = param_1->rot_z + 0x40;
  param_1->rot_z = uVar1;
  if (0 < (int)((uint)uVar1 << 0x10)) {
    param_1->state_flag144 = 1;
    param_1->rot_z = 0;
  }
  FUN_80076d68(param_1);
  FUN_80056b48(param_1,1);
  FUN_80055d5c(param_1);
  FUN_800541f4(param_1,3);
  sVar2 = param_1->velocity_y + 0x400;
  param_1->velocity_y = sVar2;
  if (0x2800 < sVar2) {
    param_1->velocity_y = 0x2800;
  }
  param_1->timer1 = param_1->timer1 + 1;
  param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  FUN_8005444c();
  return;
}
