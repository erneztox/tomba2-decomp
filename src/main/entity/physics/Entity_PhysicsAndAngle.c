/**
 * @brief Runs physics step + stores resulting angle in entity[0x60]
 * @note Original: func_80041AC0 at 0x80041AC0
 */
// Entity_PhysicsAndAngle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80041ac0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8004766c();
  FUN_80049760(param_1);
  param_1->draw_x = _DAT_1f8001a0;
  return uVar1;
}
