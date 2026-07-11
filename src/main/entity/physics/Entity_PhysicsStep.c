/**
 * @brief Physics/collision step: checks collision, updates entity position from result
 * @note Original: func_8004766C at 0x8004766C
 */
// Entity_PhysicsStep



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8004766c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  
  _DAT_1f8001bc = param_1->pos_y;
  _DAT_1f8001be = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f8001c0 = param_1->pos_z;
  do {
    uVar1 = FUN_80047778(param_1);
    FUN_80049968(param_1->collision_dir);
    iVar2 = FUN_80047cbc();
    if (iVar2 == 0) {
      return 0;
    }
  } while (((*_DAT_1f8001e0 & 0x4000) != 0) &&
          (param_1->collision_dir = (char)*_DAT_1f8001e0, (*_DAT_1f8001e0 & 0x4000) != 0));
  FUN_80048134();
  FUN_80048034();
  _DAT_1f8001bc = _DAT_1f8001bc + _DAT_1f8001c2;
  sVar3 = _DAT_1f8001c0 + _DAT_1f8001c6;
  _DAT_1f8001c0 = sVar3;
  param_1->pos_y = _DAT_1f8001bc;
  param_1->pos_z = sVar3;
  return uVar1;
}
