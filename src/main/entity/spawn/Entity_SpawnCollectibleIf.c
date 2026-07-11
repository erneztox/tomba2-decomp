/**
 * @brief Spawns collectible entity based on entity->sprite_param2 type u8
 * @note Original: func_80067FE4 at 0x80067FE4
 */
// Entity_SpawnCollectibleIf



#include "tomba.h"
void Entity_SpawnCollectibleIf(int param_1)

{
  s32 uVar1;
  
  if (param_1->sprite_param2 != '\0') {
    *(u8 *)(*(int *)(param_1 + 0x74) + 4) = 3;
  }
  if ((param_1->sprite_param2 == '(') || (param_1->sprite_param2 == 'a')) {
    uVar1 = Entity_SpawnCollectible(param_1,0,0);
    *(s32 *)(param_1 + 0x74) = uVar1;
  }
  return;
}
