/**
 * @brief Collision grid initializer: sets up collision grid bounds
 * @note Original: func_8004798C at 0x8004798C
 */
// Collision_GridInit



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Collision_GridInit(int param_1)

{
  s32 bVar1;
  
  if (param_1->collision_dir != g_CollisionZone) {
    Collision_GridLookup(param_1->collision_dir);
  }
  if (_DAT_1f8001ae < _DAT_1f8001b0) {
    bVar1 = _DAT_1f8001b0 < (u16)(_DAT_1f8001c0 - _DAT_1f8001ac);
  }
  else {
    bVar1 = _DAT_1f8001ae < (u16)(_DAT_1f8001bc - _DAT_1f8001aa);
  }
  if (bVar1) {
    Collision_Slope2(param_1,1);
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
  return;
}
