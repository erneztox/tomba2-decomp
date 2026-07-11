/**
 * @brief Audio device read: if param<0x18, calls CD_ReadReg to read data
 * @note Original: func_80092EA0 at 0x80092EA0
 */
// Audio_ReadDevice



#include "tomba.h"
s32 Audio_ReadDevice(u16 param_1,s16 *param_2,s16 *param_3)

{
  s32 uVar1;
  s16 local_18;
  s16 local_16->flags;
  
  if (param_1 < 0x18) {
    CD_ReadReg((int)(s16)param_1,&local_18,local_16);
    *param_2 = local_18 / 0x81;
    uVar1 = 0;
    *param_3 = local_16->flags / 0x81;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
