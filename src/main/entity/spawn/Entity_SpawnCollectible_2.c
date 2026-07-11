/**
 * @brief Spawns collectible entity with behavior 0x8004BB38 from pool
 * @note Original: func_8004BD04 at 0x8004BD04
 */
// Entity_SpawnCollectible



#include "tomba.h"
int Entity_SpawnCollectible(s32 param_1,u8 param_2,s16 param_3)

{
  int iVar1;
  
  iVar1 = Entity_SpawnChild(param_1,0x81,5,1);
  if (iVar1 != 0) {
    iVar1->callback = Entity_Behavior_Item2;
    iVar1->sub_type = 0;
    iVar1->draw_y = param_3;
    iVar1->flag_5E = param_2;
  }
  return iVar1;
}
