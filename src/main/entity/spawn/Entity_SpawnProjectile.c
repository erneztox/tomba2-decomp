/**
 * @brief Spawns projectile entity 0x1B at entity position with scale 0x200, type 1, behavior 4
 * @note Original: func_80068214 at 0x80068214
 */
// Entity_SpawnProjectile



#include "tomba.h"
void Entity_SpawnProjectile(int param_1)

{
  s16 uVar1;
  int iVar2;
  
  if (g_GameMode == '\x06') {
    Entity_SpawnWithBehavior(param_1,1);
  }
  else {
    iVar2 = Entity_SpawnNoPos(0x1b,0xffffffa0);
    if (iVar2 != 0) {
      iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
      iVar2->pos_x = param_1->pos_y;
      iVar2->pos_y = *(s16 *)(param_1 + 0x32) + param_1->angle_delta * 2;
      uVar1 = param_1->pos_z;
      *(s32 *)(iVar2 + 0x54) = 0x200;
      *(s32 *)(iVar2 + 0x58) = 0x200;
      iVar2->state = 1;
      *(s32 *)(iVar2 + 0x50) = 0;
      iVar2->behavior_state = 4;
      *(s16 *)(iVar2 + 0x30) = uVar1;
    }
  }
  return;
}
