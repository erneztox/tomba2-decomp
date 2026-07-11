/**
 * @brief Spawns entity with behavior at 0x800527C8 and specific entity type
 * @note Original: func_800525D0 at 0x800525D0
 */
// Entity_SpawnWithBehavior



#include "tomba.h"
int Entity_SpawnWithBehavior(s32 param_1,u8 param_2)

{
  int iVar1;
  
  iVar1 = Entity_SpawnChild(param_1,0x84,3,0);
  if (iVar1 != 0) {
    iVar1->callback = Entity_DrawMain7;
    iVar1->sub_type = param_2;
    iVar1->parent = param_1;
  }
  return iVar1;
}
