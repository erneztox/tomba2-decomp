/**
 * @brief Checks if specific event (level 4, bit 0x10) should trigger for entity
 * @note Original: func_8005344C at 0x8005344C
 */
// Entity_CheckEventTrigger



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_8005344c(int param_1)

{
  if (((DAT_800bf870 == '\x04') && ((_DAT_800bfe56 & 0x10) == 0)) &&
     ((param_1->type_flags & 0xf00) == 0x500)) {
    param_1->flag_16A = 0xc;
    param_1->behavior_state = 0x37;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    return 1;
  }
  return 0;
}
