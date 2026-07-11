/**
 * @brief Sums 8 u16 values from child distribution table
 * @note Original: func_800270F8 at 0x800270F8
 */
// Entity_GetChildCount



#include "tomba.h"
int FUN_800270f8(ushort *param_1)

{
  return (int)(((uint)*param_1 + (uint)param_1->flags + (uint)param_1->kind + (uint)param_1->sub_type +
                (uint)param_1->state + (uint)param_1->behavior_state + (uint)param_1->action_state + (uint)param_1->sub_action) * 0x10000
              ) >> 0x10;
}
