/**
 * @brief Entity spawn with check: calls Entity_GetTypeData, then AllocByPoolId if valid
 * @note Original: func_800727D4 at 0x800727D4
 */
// Entity_SpawnChecked



#include "tomba.h"
int Entity_SpawnChecked(s32 param_1,s32 param_2,s32 param_3)

{
  s16 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = Entity_GetTypeData(param_2,param_3);
  if ((iVar2 == 0) || (iVar3 = Entity_AllocByPoolId(0,3,1), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3->callback = Entity_AnimController;
    iVar3->kind = 0x1d;
    iVar3->sub_type = (char)param_3;
    iVar3->draw_x = (s16)param_2;
    iVar3->parent = param_1;
    iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    uVar1 = String_Format(iVar2,iVar3 + 0x44);
    iVar3->anim_timer = uVar1;
    iVar3->draw_y = 0x7c7e;
  }
  return iVar3;
}
