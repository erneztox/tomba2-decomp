/**
 * @brief MDEC param getter: returns entity->state or entity[0xEC] based on sign
 * @note Original: func_80087CB0 at 0x80087CB0
 */
// MDEC_GetParam



#include "tomba.h"
u8 FUN_80087cb0(s32 param_1,int param_2,s32 param_3)

{
  u8 uVar1;
  int iVar2;
  u8 *puVar3;
  
  iVar2 = (*DAT_800abe4c)();
  if (param_2 < 0) {
    return iVar2->state;
  }
  if (param_2 < (int)(uint)iVar2->state) {
    puVar3 = (u8 *)(*(int *)(iVar2 + 4) + param_2 * 5);
    switch(param_3) {
    case 1:
      uVar1 = *puVar3;
      break;
    case 2:
      uVar1 = puVar3->state;
      break;
    case 3:
      uVar1 = puVar3->state;
      break;
    case 4:
      uVar1 = puVar3->state;
      break;
    case 5:
      uVar1 = puVar3->state;
      break;
    default:
      goto switchD_80087d28_default;
    }
  }
  else {
switchD_80087d28_default:
    uVar1 = 0;
  }
  return uVar1;
}
