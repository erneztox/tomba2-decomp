/**
 * @brief Audio voice setup: extracts bits from params, stores in voice struct
 * @note Original: func_8008F260 at 0x8008F260
 */
// Audio_SetupVoice



#include "tomba.h"
void FUN_8008f260(uint param_1,uint param_2,u16 *param_3)

{
  u16 uVar1;
  
  param_3->flags = (u16)param_1 & 0x8000;
  uVar1 = (u16)param_2;
  param_3->flags = uVar1 & 0x8000;
  param_3->flags = uVar1 & 0x4000;
  param_3->flags = uVar1 & 0x20;
  *param_3 = (u16)((param_1 & 0xffff) >> 8) & 0x7f;
  param_3->flags = (u16)((param_1 & 0xffff) >> 4) & 0xf;
  param_3->flags = (u16)param_1 & 0xf;
  param_3->flags = (u16)(param_2 >> 6) & 0x7f;
  param_3->flags = uVar1 & 0x1f;
  return;
}
