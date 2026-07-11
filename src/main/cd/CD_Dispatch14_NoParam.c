/**
 * @brief Dispatches CD driver function at table+0x14 without params
 * @note Original: func_80085BE4 at 0x80085BE4
 */
// CD_Dispatch14_NoParam



#include "tomba.h"
void FUN_80085be4(void)

{
  (*PTR_PTR_800abda0->script_ptr)();
  return;
}
