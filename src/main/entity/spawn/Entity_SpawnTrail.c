/**
 * @brief Spawns trail follower entity with Entity_Behavior_Trail and draw func
 * @note Original: func_80031558 at 0x80031558
 */
// Entity_SpawnTrail



#include "tomba.h"
int FUN_80031558(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = FUN_8007a980(0,6,1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1->callback = FUN_80029b40;
    iVar1->render_flags = 0x20;
    iVar1->parent = param_1;
    iVar1->script_data = FUN_80029f6c;
    iVar1->sub_type = param_2;
    iVar1->alloc_flags = iVar1->alloc_flags | 0x80;
  }
  return iVar1;
}
