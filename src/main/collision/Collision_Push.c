/**
 * @brief Collision push handler: reads _DAT_1f8001e0, applies push vector
 * @note Original: func_80045810 at 0x80045810
 */
// Collision_Push



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80045810(ushort param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = _DAT_1f8001a4;
  if ((*_DAT_1f8001e0 & 8) == 0) {
    iVar2 = (int)(short)_DAT_1f8001ec->kind * ((int)_DAT_1f8001c2 - (int)(short)param_1);
    iVar4 = (int)(short)(param_1 ^ 0x3f);
    if (iVar4 == 0) {
      trap(0x1c00);
    }
    if ((iVar4 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    _DAT_1f8001a4 = _DAT_1f8001ec->flags + (short)(iVar2 / iVar4);
  }
  else {
    _DAT_1f8001a4 =
         _DAT_1f8001ec->flags + (short)((int)(short)_DAT_1f8001ec->kind * (int)_DAT_1f8001c2 >> 6);
  }
  if (_DAT_1f8001a4 + 0x80 < (int)_DAT_1f8001be) {
    uVar5 = 1;
    if (param_2 == 0) {
      _DAT_1f8001a4 = uVar3;
      _DAT_1f8001a6 = 0;
      return 0;
    }
    _DAT_1f8001c4 = _DAT_1f8001a4 - _DAT_1f8001be;
    _DAT_1f8001a6 = *_DAT_1f8001ec;
    uVar1 = _DAT_1f8001ec->sub_type;
  }
  else {
    uVar5 = 0xffffffff;
    if ((int)_DAT_1f8001a4 <= (int)_DAT_1f8001be) {
      _DAT_1f8001c4 = _DAT_1f8001a4 - _DAT_1f8001be;
      _DAT_1f8001a6 = *_DAT_1f8001ec;
      _DAT_1f8001e8 = _DAT_1f8001dc + (uint)(ushort)_DAT_1f8001ec->sub_type * 3;
      return 1;
    }
    uVar1 = _DAT_1f8001ec->sub_type;
  }
  _DAT_1f8001e8 = _DAT_1f8001dc + (uint)uVar1 * 3;
  return uVar5;
}
