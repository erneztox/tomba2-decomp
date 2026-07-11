/**
 * @brief PsyQ StoreImage wrapper: downloads VRAM to RAM
 * @note Original: func_80081278 at 0x80081278
 */
// GPU_StoreImage



#include "tomba.h"
void FUN_80081278(s32 param_1,s32 param_2)

{
  FUN_80080fd4(s_StoreImage_8001bf38,param_1);
  (**(code **)(PTR_PTR_800a5998 + 8))(PTR_PTR_800a5998->callback,param_1,8,param_2);
  return;
}
