/**
 * @brief Dispatches CD driver function at table+0x14 with params
 * @note Original: func_80085BB0 at 0x80085BB0
 */
// CD_Dispatch14



#include "tomba.h"
void CD_Dispatch14(s32 param_1)

{
  (*PTR_PTR_800abda0->script_ptr)(4,param_1);
  return;
}
