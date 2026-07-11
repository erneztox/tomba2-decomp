/**
 * @brief Processes collision result: calls Entity_CalcPos, branches on entity->action_flag mode
 * @note Original: func_800235A0 at 0x800235A0
 */
// Entity_ProcessCollision



#include "tomba.h"
s32 Entity_ProcessCollision(int param_1,s32 param_2)

{
  int iVar1;
  s32 uVar2;
  
  iVar1 = Entity_CalcPos(param_1,param_2,1);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    if (param_1->action_flag == '\f') {
      uVar2 = 4;
    }
    else {
      uVar2 = 1;
    }
    Entity_MoveTo(param_1,param_2,iVar1,uVar2);
    uVar2 = 1;
  }
  return uVar2;
}
