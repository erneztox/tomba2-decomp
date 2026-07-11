/**
 * @brief Runs child entity through 4-step init pipeline (position, rotation, scale, finalize)
 * @note Original: func_80027058 at 0x80027058
 */
// Entity_InitChildPipeline



#include "tomba.h"
void FUN_80027058(undefined4 param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80026d08(param_1,param_2,param_2 + 8,param_3);
  if (iVar2 != 0) {
    uVar1 = *param_2;
    iVar2 = FUN_80026dd8(param_1,param_2,iVar2,param_3 - (uint)uVar1);
    if (iVar2 != 0) {
      iVar3 = (param_3 - (uint)uVar1) - (uint)param_2->flags;
      iVar2 = FUN_80026eb8(param_1,param_2,iVar2,iVar3);
      if (iVar2 != 0) {
        FUN_80026f88(param_1,param_2,iVar2,iVar3 - (uint)param_2->kind);
      }
    }
  }
  return;
}
