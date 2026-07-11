/**
 * @brief Spawns collectible entity based on entity->sprite_param2 type byte
 * @note Original: func_80067FE4 at 0x80067FE4
 */
// Entity_SpawnCollectibleIf



#include "tomba.h"
void FUN_80067fe4(int param_1)

{
  undefined4 uVar1;
  
  if (param_1->sprite_param2 != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x74) + 4) = 3;
  }
  if ((param_1->sprite_param2 == '(') || (param_1->sprite_param2 == 'a')) {
    uVar1 = FUN_8004bd04(param_1,0,0);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
  }
  return;
}
