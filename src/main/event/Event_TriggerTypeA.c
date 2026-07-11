/**
 * @brief Triggers event type A (0x18): spawns entity with overlay func at 0x8011600C
 * @note Original: func_80035528 at 0x80035528
 */
// Event_TriggerTypeA



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_80035528(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_80035640(0x18);
  if (((iVar2 != 0) && (param_3 != 1)) &&
     (iVar3 = FUN_8004bd04(param_1,0,1), uVar1 = _DAT_1f800080, iVar3 != 0)) {
    iVar3->callback = 0x8011600c;
    iVar3->script_ptr = uVar1;
    FUN_8004d4f4(0x61,1);
  }
  return iVar2;
}
