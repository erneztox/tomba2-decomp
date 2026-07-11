/**
 * @brief Runs child entity through 4-step init pipeline (position, rotation, scale, finalize)
 * @note Original: func_80027058 at 0x80027058
 */
// Entity_InitChildPipeline



#include "tomba.h"
void Entity_InitChildPipeline(s32 param_1,u16 *param_2,int param_3)

{
  u16 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = Entity_InitChildPosition(param_1,param_2,param_2 + 8,param_3);
  if (iVar2 != 0) {
    uVar1 = *param_2;
    iVar2 = Entity_InitChildRotation(param_1,param_2,iVar2,param_3 - (uint)uVar1);
    if (iVar2 != 0) {
      iVar3 = (param_3 - (uint)uVar1) - (uint)param_2->flags;
      iVar2 = Entity_InitChildScale(param_1,param_2,iVar2,iVar3);
      if (iVar2 != 0) {
        Entity_InitChildFinalize(param_1,param_2,iVar2,iVar3 - (uint)param_2->kind);
      }
    }
  }
  return;
}
