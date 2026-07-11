/**
 * @brief GPU digit/number draw: splits value into tens/ones, draws 2 TILE prims per digit
 * @note Original: func_8007C2A4 at 0x8007C2A4
 */
// GPU_DrawNumber



/* WARNING: Removing unreachable block (ram,0x8007c314) */
/* WARNING: Removing unreachable block (ram,0x8007c390) */

#include "tomba.h"
s16 * FUN_8007c2a4(s16 *param_1,s16 *param_2,u8 param_3,uint param_4,
                    u8 param_5)

{
  s16 sVar1;
  uint uVar2;
  
  uVar2 = param_4 & 0x7f;
  if (((param_4 & 0x80) == 0) || (uVar2 / 10 != 0)) {
    sVar1 = *param_2;
    param_1->flags = param_3;
    *(u8 *)((int)param_1 + 3) = param_5;
    *param_1 = sVar1;
    param_1->kind = ((s16)(uVar2 / 10) + 0x10) * 8;
    param_1->sub_type = 0x28;
    param_1 = param_1 + 4;
  }
  sVar1 = *param_2;
  *param_2 = sVar1 + 8;
  *param_1 = sVar1 + 8;
  param_1->flags = param_3;
  *(u8 *)((int)param_1 + 3) = param_5;
  param_1->kind = ((s16)(uVar2 % 10) + 0x10) * 8;
  param_1->sub_type = 0x28;
  *param_2 = *param_2 + 8;
  return param_1 + 4;
}
