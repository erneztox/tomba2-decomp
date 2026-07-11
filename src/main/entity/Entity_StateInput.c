/**
 * @brief Entity input state: tests _g_InputState input bits, dispatches action
 * @note Original: func_80060268 at 0x80060268
 */
// Entity_StateInput



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
u8 FUN_80060268(int param_1)

{
  u8 bVar1;
  u8 bVar2;
  
  if ((_g_InputState & 0x10) == 0) {
    if ((_g_InputState & 0xa0) != 0) {
      if ((param_1->input_flags != 0) &&
         (param_1->direction == (param_1->input_flags & 1))) {
        return 0;
      }
      if (param_1->direction == (param_1->behavior_flags & 1)) {
        _DAT_1f800238 = _DAT_1f800238 + 1;
        if (5 < _DAT_1f800238) {
          *(u8 *)(param_1 + 0x169) = 1;
        }
        bVar1 = *(u8 *)(param_1 + 0x169);
        bVar2 = 1;
      }
      else {
        _DAT_1f800238 = 0;
        bVar1 = *(u8 *)(param_1 + 0x169);
        bVar2 = 2;
      }
      *(u8 *)(param_1 + 0x169) = bVar1 | bVar2;
      return bVar2;
    }
  }
  else {
    *(u8 *)(param_1 + 0x169) = *(u8 *)(param_1 + 0x169) | 2;
  }
  return 0;
}
