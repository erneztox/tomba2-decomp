/**
 * @brief Audio device read: if param<0x18, calls FUN_8009a170 to read data
 * @note Original: func_80092EA0 at 0x80092EA0
 */
// Audio_ReadDevice



#include "tomba.h"
undefined4 FUN_80092ea0(ushort param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  short local_18;
  short local_16->sub_type;
  
  if (param_1 < 0x18) {
    FUN_8009a170((int)(short)param_1,&local_18,local_16);
    *param_2 = local_18 / 0x81;
    uVar1 = 0;
    *param_3 = local_16->type / 0x81;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
