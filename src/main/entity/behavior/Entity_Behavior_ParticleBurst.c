/**
 * @brief Particle burst: wait for animation flag, spawn children, dealloc
 * @note Original: func_80040390 at 0x80040390
 */
// Entity_Behavior_ParticleBurst



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80040390(int param_1)

{
  if (param_1->collision_state != '\0') {
    FUN_80027144(*(s32 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x700,8);
    FUN_80074590(0xc,0,0);
    param_1->state = 3;
    if (param_1->flag_5E == '\x05') {
      _DAT_800bf850 = _DAT_800bf850 + -1;
    }
  }
  return;
}
