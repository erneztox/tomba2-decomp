/**
 * @brief Entity sprite dispatch: calls Entity_SpawnMultiple, stores result in globals
 * @note Original: func_80043858 at 0x80043858
 */
// Entity_DispatchSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_DispatchSprite(int param_1)

{
  s32 uVar1;
  s32 uVar2;
  int iVar3;
  
  iVar3 = Entity_SpawnMultiple(param_1,(int)param_1->event_id);
  uVar2 = _DAT_800e7eb4;
  uVar1 = _DAT_800e7eb0;
  _DAT_800bf844 = iVar3;
  if (iVar3 != 0) {
    *(s32 *)(iVar3 + 0x2c) = _DAT_800e7eac;
    iVar3->pos_y_fixed = uVar1;
    iVar3->scale_y = uVar2;
  }
  return iVar3 != 0;
}
