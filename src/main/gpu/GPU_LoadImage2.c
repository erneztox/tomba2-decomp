/**
 * @brief Alternate LoadImage with timeout handling
 * @note Original: func_800836B8 at 0x800836B8
 */
// GPU_LoadImage2



#include "tomba.h"
s32 GPU_LoadImage2(s32 param_1,s32 param_2)

{
  int iVar1;
  uint uVar2;
  
  GPU_SetupPacket(s_LoadImage2_8001c014,param_1);
  iVar1 = Timer_GetCounter(0xffffffff);
  DAT_800a5adc = iVar1 + 0xf0;
  DAT_800a5ae0 = 0;
  uVar2 = *DAT_800a5ab4;
  while (((uVar2 & 0x1000000) != 0 || ((*DAT_800a5aa8 & 0x4000000) == 0))) {
    iVar1 = GPU_CheckTimeout();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar2 = *DAT_800a5ab4;
  }
  CD_Dispatch04(2,CD_RegisterCallback);
  (*PTR_PTR_800a5998->prev)(param_1,param_2);
  return 0;
}
