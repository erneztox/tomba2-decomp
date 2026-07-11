/**
 * @brief Entity spawn with check: calls FUN_80040a58, then AllocByPoolId if valid
 * @note Original: func_800727D4 at 0x800727D4
 */
// Entity_SpawnChecked



#include "tomba.h"
int FUN_800727d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80040a58(param_2,param_3);
  if ((iVar2 == 0) || (iVar3 = FUN_8007a980(0,3,1), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3->callback = FUN_80072898;
    iVar3->kind = 0x1d;
    iVar3->sub_type = (char)param_3;
    iVar3->draw_x = (short)param_2;
    iVar3->parent = param_1;
    iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    uVar1 = FUN_80079634(iVar2,iVar3 + 0x44);
    iVar3->anim_timer = uVar1;
    iVar3->draw_y = 0x7c7e;
  }
  return iVar3;
}
