/**
 * @brief Animates menu icon with sine wave oscillation using GTE trig functions
 * @note Original: func_8003A3E8 at 0x8003A3E8
 */
// Menu_AnimIcon



#include "tomba.h"
void Menu_AnimIcon(s32 param_1,s16 *param_2)

{
  s16 uVar1;
  u16 uVar2;
  int iVar3;
  
  if (*(s8*)(param_2 + 0x1f) == '\0') {
    *(u8 *)(param_2 + 0x1f) = 1;
    uVar1 = Entity_DebugText(param_1,param_2);
    *param_2 = uVar1;
    uVar2 = Math_Random();
    param_2->counter2 = (uVar2 & 0x1f) << 7;
  }
  else if (*(s8*)(param_2 + 0x1f) != '\x01') {
    return;
  }
  iVar3 = Math_CosGTE((int)(s16)param_2->counter2);
  param_2->flags = (s16)(iVar3 * 3 >> 0xc);
  param_2->counter2 = param_2->counter2 + 0x80;
  return;
}
