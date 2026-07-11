/**
 * @brief PsyQ MoveImage wrapper: copies data within VRAM
 * @note Original: func_800812D8 at 0x800812D8
 */
// GPU_MoveImage



#include "tomba.h"
s32 GPU_MoveImage(s32 *param_1,uint param_2,int param_3)

{
  s32 uVar1;
  
  GPU_SetupPacket(s_MoveImage_8001bf44,param_1);
  uVar1 = 0xffffffff;
  if (*(s16 *)(param_1 + 1) != 0) {
    if (*(s16 *)((int)param_1 + 6) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      DAT_800a5a44 = param_3 << 0x10 | param_2 & 0xffff;
      DAT_800a5a40 = *param_1;
      DAT_800a5a48 = param_1->flags;
      uVar1 = (**(code **)(PTR_PTR_800a5998 + 8))
                        (PTR_PTR_800a5998->script_data,&DAT_800a5a38,0x14,0);
    }
  }
  return uVar1;
}
