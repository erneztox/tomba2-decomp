/**
 * @brief Physics step with rotation: computes rotation angles from collision data via atan2
 * @note Original: func_80048750 at 0x80048750
 */
// Entity_PhysicsStepRot



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80048750(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  _DAT_1f8001bc = param_1->pos_y;
  _DAT_1f8001be = *(undefined2 *)(param_1 + 0x32);
  _DAT_1f8001c0 = param_1->pos_z;
  do {
    FUN_80047778(param_1);
    FUN_80049968(param_1->collision_dir);
    iVar3 = FUN_80047cbc();
    if (iVar3 == 0) {
      return 0;
    }
  } while (((*_DAT_1f8001e0 & 0x4000) != 0) &&
          (param_1->collision_dir = (char)*_DAT_1f8001e0, (*_DAT_1f8001e0 & 0x4000) != 0));
  FUN_80048034();
  cVar1 = _DAT_1f8001e8->flags;
  iVar4 = (int)_DAT_1f8001e8->kind;
  iVar3 = (int)*_DAT_1f8001e8;
  sVar2 = FUN_80085690(iVar4,iVar3);
  _DAT_1f8001a0 = -sVar2 & 0xfff;
  sVar2 = FUN_80084080(iVar3 * iVar3 + iVar4 * iVar4);
  _DAT_1f8001a2 = FUN_80085690((int)(short)cVar1,(int)sVar2);
  return 1;
}
