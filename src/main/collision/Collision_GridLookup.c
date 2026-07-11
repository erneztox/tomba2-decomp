/**
 * @brief Collision grid lookup: indexes grid from _g_CollisionGrid table
 * @note Original: func_80048ECC at 0x80048ECC
 */
// Collision_GridLookup



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80048ecc(u8 param_1)

{
  u16 *puVar1;
  
  g_CollisionZone = param_1;
  puVar1 = (u16 *)(_g_CollisionGrid + (uint)*(u16 *)((uint)param_1 * 2 + _g_CollisionGrid) * 2);
  _DAT_1f8001b2 = *puVar1;
  _DAT_1f8001aa = puVar1->flags;
  _DAT_1f8001b4 = puVar1->kind;
  _DAT_1f8001b6 = _DAT_1f8001aa;
  _DAT_1f8001b8 = puVar1->sub_type;
  _DAT_1f8001ba = puVar1->state;
  DAT_1f8001fc = (char)puVar1->behavior_state;
  DAT_1f8001fd = (char)(puVar1->behavior_state >> 8);
  if (_DAT_1f8001aa < _DAT_1f8001b2) {
    _DAT_1f8001ae = _DAT_1f8001b2 - _DAT_1f8001aa;
  }
  else {
    _DAT_1f8001ae = _DAT_1f8001aa - _DAT_1f8001b2;
    _DAT_1f8001aa = _DAT_1f8001b2;
  }
  if (_DAT_1f8001b4 <= _DAT_1f8001b8) {
    _DAT_1f8001ac = _DAT_1f8001b4;
    _DAT_1f8001b0 = _DAT_1f8001b8 - _DAT_1f8001b4;
    return;
  }
  _DAT_1f8001ac = _DAT_1f8001b8;
  _DAT_1f8001b0 = _DAT_1f8001b4 - _DAT_1f8001b8;
  return;
}
