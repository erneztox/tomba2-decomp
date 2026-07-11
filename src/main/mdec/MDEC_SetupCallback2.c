/**
 * @brief MDEC callback setup variant: sets callbacks + entity[0x51/0x52/0x53] params
 * @note Original: func_80088908 at 0x80088908
 */
// MDEC_SetupCallback2



#include "tomba.h"
s32 FUN_80088908(int param_1,s8 param_2,u8 param_3)

{
  int iVar1;
  
  iVar1 = (*DAT_800abe54)();
  if (iVar1 == 0) {
    param_1->state = 1;
    *(u8 **)(param_1 + 0x14) = &LAB_800889a0;
    param_1->state = FUN_800889f4;
    *(s8*)(param_1 + 0x51) = param_2;
    *(u8 *)(param_1 + 0x52) = param_3;
    *(s32 *)(param_1 + 0x53) = param_2 == param_1->state;
  }
  return iVar1 == 0;
}
