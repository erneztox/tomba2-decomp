/**
 * @brief Runs physics step only if global flag at 0x800BF816 matches entity[0x6A] ID
 * @note Original: func_8003FC8C at 0x8003FC8C
 */
// Entity_PhysicsIfMatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_PhysicsIfMatch(int param_1)

{
  s32 uVar1;
  
  if (g_ActionFlag == '\x01') {
    uVar1 = 0;
    if ((u16)g_HurtParam == param_1->type_flags) {
      Entity_PhysicsStep();
      Entity_PhysicsStepRot(param_1);
      param_1->rot_y = _g_CollisionNormalX;
      uVar1 = 1;
      *(s16 *)(param_1 + 0x32) = _DAT_800bf812;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
