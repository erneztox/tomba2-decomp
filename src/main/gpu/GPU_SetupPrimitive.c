/**
 * @brief GPU primitive setup: sets type byte at +3, encodes color from param bits
 * @note Original: func_8007C8C8 at 0x8007C8C8
 */
// GPU_SetupPrimitive



#include "tomba.h"
short * FUN_8007c8c8(short *param_1,ushort param_2,short *param_3,undefined1 param_4)

{
  short sVar1;
  
  *(undefined1 *)((int)param_1 + 3) = 0x80;
  param_1->kind = (param_2 & 0xf) << 4;
  param_1->sub_type = (param_2 & 0xf0) + 0x78;
  sVar1 = *param_3;
  param_1->flags = param_4;
  *param_1 = sVar1;
  *param_3 = *param_3 + 0x10;
  return param_1 + 4;
}
