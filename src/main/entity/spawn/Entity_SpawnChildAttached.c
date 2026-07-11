/**
 * @brief Spawns child entity attached to parent with behaviors at 0x8002B7B0/0x8002B3A4
 * @note Original: func_800331D8 at 0x800331D8
 */
// Entity_SpawnChildAttached



#include "tomba.h"
int Entity_SpawnChildAttached(int param_1,s32 param_2,s32 param_3,s16 param_4)

{
  int iVar1;
  
  if (((*(u8 *)(param_1 + 0x1b) & 0x40) == 0) && (iVar1 = Entity_AllocByPoolId(0,6,1), iVar1 != 0)) {
    iVar1->render_flags = 0x20;
    iVar1->callback = Entity_Behavior_Parent;
    iVar1->parent = param_2;
    iVar1->script_ptr = param_1;
    *(s32 *)(iVar1 + 0x50) = param_3;
    *(s16 *)(iVar1 + 0x32) = param_4;
    iVar1->script_data = Entity_DrawSprite6;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
