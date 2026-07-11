/**
 * @brief Sets entity animation flag at entity->sub_state2 from FUN_80076d68
 * @note Original: func_8004190C at 0x8004190C
 */
// Entity_SetAnimFlag79



#include "tomba.h"
undefined4 FUN_8004190c(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = FUN_80076d68();
  param_1->sub_state2 = uVar1;
  return 1;
}
