/**
 * @brief GPU put draw environment: sends PutDrawEnv cmd, returns ptr
 * @note Original: func_800815D0 at 0x800815D0
 */
// GPU_PutDrawEnv



#include "tomba.h"
int GPU_PutDrawEnv(int param_1)

{
  void *puVar1;
  
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_PutDrawEnv__08x_____8001bf94,param_1);
  }
  GPU_PrimSend2(param_1 + 0x1c,param_1);
  puVar1 = PTR_PTR_800a5998;
  param_1->callback = param_1->callback | 0xffffff;
  (**(code **)(puVar1 + 8))(puVar1->script_data,param_1 + 0x1c,0x40,0);
  Mem_Copy(&DAT_800a59b0,param_1,0x5c);
  return param_1;
}
