/**
 * @brief Executes script command via Sys_CallWithParams with entity[0x72-0x76] params
 * @note Original: func_800439E4 at 0x800439E4
 */
// Entity_ExecScriptCmd3



#include "tomba.h"
s32 Entity_ExecScriptCmd3(int param_1)

{
  Sys_CallWithParams(0,*(u8 *)(param_1 + 0x74),param_1->camera_mode,
               *(u8 *)(param_1 + 0x72));
  return 1;
}
