/**
 * @brief Resets entity animation mode and sets sub-state via entity[0x74]
 * @note Original: func_800442A0 at 0x800442A0
 */
// Entity_ResetAnimAndState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800442a0(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (((int)param_1->event_id & 0x8000U) != 0) {
    iVar1 = _g_PlayerEntity;
  }
  FUN_80041718(iVar1,(int)param_1->event_param,4);
  FUN_800440e4(&g_CollisionEntity,(int)*(s16 *)(param_1 + 0x76),4);
  return 1;
}
