/**
 * @brief Particle burst: wait for animation flag, spawn children, dealloc
 * @note Original: func_80040390 at 0x80040390
 */
// Entity_Behavior_ParticleBurst



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_Behavior_ParticleBurst(int param_1)

{
  if (param_1->collision_state != '\0') {
    Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x700,8);
    Audio_PlaySoundEffect(0xc,0,0);
    param_1->state = STATE_DEAD;
    if (param_1->flag_5E == '\x05') {
      _DAT_800bf850 = _DAT_800bf850 + -1;
    }
  }
  return;
}
