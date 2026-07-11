/**
 * @brief Spawns child entity of type 0x27 with parent reference
 * @note Original: func_8006A8C8 at 0x8006A8C8
 */
// Entity_SpawnChild27



#include "tomba.h"
void Entity_SpawnChild27(s32 param_1)

{
  int iVar1;
  
  iVar1 = Entity_SpawnNoPos(0x27,0);
  if (iVar1 != 0) {
    iVar1->parent = param_1;
  }
  return;
}
