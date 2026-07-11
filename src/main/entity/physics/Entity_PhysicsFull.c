/**
 * @brief Full physics step: runs collision check + rotation, sets entity[0x56] from result
 * @note Original: func_8003FBC4 at 0x8003FBC4
 */
// Entity_PhysicsFull



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8003fbc4(int param_1)

{
  FUN_8004766c();
  FUN_80048750(param_1);
  param_1->rot_y = _DAT_1f8001a0;
  return;
}
