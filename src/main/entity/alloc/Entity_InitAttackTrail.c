/**
 * @brief Inits attack trail: sets entity[0x68] angle, entity[0x6A]=0x400, SFX 0x22, optional trail
 * @note Original: func_8006BDF0 at 0x8006BDF0
 */
// Entity_InitAttackTrail



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_InitAttackTrail(int param_1,int param_2)

{
  s16 sVar1;
  
  param_1->anim_id = param_1->anim_id & 1;
  sVar1 = _g_EntityAngle;
  if (g_CollisionType == '\t') {
    sVar1 = _g_EntityAngle + -0x800;
  }
  param_1->target_angle = sVar1;
  param_1->type_flags = 0x400;
  Audio_PlaySoundEffect(0x22,0,0);
  if (param_2 == 0) {
    Entity_SpawnTrail(param_1,param_1->kind - 1);
  }
  return;
}
