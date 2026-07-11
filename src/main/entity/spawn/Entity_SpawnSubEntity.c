/**
 * @brief Spawns a sub-entity from pool 4 with behavior at 0x8003AD48
 * @note Original: func_80040AA4 at 0x80040AA4
 */
// Entity_SpawnSubEntity



#include "tomba.h"
int Entity_SpawnSubEntity(s32 param_1,s32 param_2)

{
  int iVar1;
  
  iVar1 = Entity_AllocByPoolId(4,3,1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1->callback = Menu_SaveDraw;
    iVar1->kind = 0xb;
    iVar1->sub_type = (char)param_2;
    iVar1->draw_x = (s16)param_1;
    iVar1->alloc_flags = iVar1->alloc_flags | 0x80;
    DAT_800bf849 = DAT_800bf849 + '\x01';
    Entity_SpawnChecked(iVar1,param_1,param_2);
  }
  return iVar1;
}
