/**
 * @brief Checks if climb action should end: tests collision below entity
 * @note Original: func_800661E0 at 0x800661E0
 */
// Entity_CheckClimbEnd



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800661e0(int param_1)

{
  int iVar1;
  
  FUN_80076d68();
  if ((DAT_1f800236 == '\x05') && (param_1->action_state == '\0')) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    iVar1 = FUN_8005444c(param_1);
    if (iVar1 != 0) {
      param_1->action_state = param_1->action_state + '\x01';
      _DAT_800e7efe = 1;
    }
  }
  return;
}
