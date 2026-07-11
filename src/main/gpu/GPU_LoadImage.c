/**
 * @brief PsyQ LoadImage wrapper: uploads texture data from RAM to VRAM
 * @note Original: func_80081218 at 0x80081218
 */
// GPU_LoadImage



#include "tomba.h"
void FUN_80081218(s32 param_1,s32 param_2)

{
  FUN_80080fd4(s_LoadImage_8001bf2c,param_1);
  (**(code **)(PTR_PTR_800a5998 + 8))(PTR_PTR_800a5998->prev,param_1,8,param_2);
  return;
}
