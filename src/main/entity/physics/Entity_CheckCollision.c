/**
 * @brief Main collision detection: checks entity bounds against world geometry
 * @note Original: func_80047778 at 0x80047778
 */
// Entity_CheckCollision



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_CheckCollision(int param_1)

{
  s32 bVar1;
  u16 uVar2;
  s32 uVar3;
  
  uVar2 = (u16)param_1->collision_dir;
  uVar3 = 1;
  if ((uVar2 == 0) || ((*_g_CollisionGrid & 0xff) < uVar2)) {
    Collision_GridWalk(param_1);
  }
  else {
    if (uVar2 != g_CollisionZone) {
      Collision_GridLookup(param_1->collision_dir);
    }
    if (_DAT_1f8001ae < _DAT_1f8001b0) {
      bVar1 = _DAT_1f8001b0 < (u16)(_DAT_1f8001c0 - _DAT_1f8001ac);
    }
    else {
      bVar1 = _DAT_1f8001ae < (u16)(_DAT_1f8001bc - _DAT_1f8001aa);
    }
    if (bVar1) {
      uVar3 = Collision_Slope2(param_1,0);
    }
  }
  if (_DAT_1f8001ae < _DAT_1f8001b0) {
    if ((int)_DAT_1f8001c0 < (int)_DAT_1f8001ac) {
      _DAT_1f8001c0 = _DAT_1f8001ac;
    }
    else if ((int)((int)_DAT_1f8001ac + (uint)_DAT_1f8001b0) < (int)_DAT_1f8001c0) {
      _DAT_1f8001c0 = _DAT_1f8001ac + _DAT_1f8001b0;
    }
    _DAT_1f8001bc =
         _DAT_1f8001b2 +
         (s16)((int)(((int)_DAT_1f8001c0 - (uint)_DAT_1f8001b4) * (int)_DAT_1f8001ba) >> 0xe);
  }
  else {
    if ((int)_DAT_1f8001bc < (int)_DAT_1f8001aa) {
      _DAT_1f8001bc = _DAT_1f8001aa;
    }
    else if ((int)((int)_DAT_1f8001aa + (uint)_DAT_1f8001ae) < (int)_DAT_1f8001bc) {
      _DAT_1f8001bc = _DAT_1f8001aa + _DAT_1f8001ae;
    }
    _DAT_1f8001c0 =
         _DAT_1f8001b4 +
         (s16)((int)(((int)_DAT_1f8001bc - (uint)_DAT_1f8001b2) * (int)_DAT_1f8001ba) >> 0xe);
  }
  return uVar3;
}
