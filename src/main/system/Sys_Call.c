/**
 * @brief Generic system call wrapper: passes command packet to kernel at 0x80099490
 * @note Original: func_8001CF00 at 0x8001CF00
 */
// Sys_Call



#include "tomba.h"
void Sys_Call(s32 param_1)

{
  s32 local_30->action_state;
  s32 local_18;
  
  local_30->type = 0x200;
  local_18 = param_1;
  CD_SPU_Main(local_30);
  return;
}
