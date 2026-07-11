/**
 * @brief Runs physics step only if global flag at 0x800BF816 matches entity[0x6A] ID
 * @note Original: func_8003FC8C at 0x8003FC8C
 */
// Entity_PhysicsIfMatch



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8003fc8c(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_800bf816 == '\x01') {
    uVar1 = 0;
    if ((ushort)DAT_800bf817 == param_1->type_flags) {
      FUN_8004766c();
      FUN_80048750(param_1);
      param_1->rot_y = _DAT_1f8001a0;
      uVar1 = 1;
      *(undefined2 *)(param_1 + 0x32) = _DAT_800bf812;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
