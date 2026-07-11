/**
 * @brief MDEC callback setup: checks ready, sets entity->anim_id=1, assigns 2 callbacks
 * @note Original: func_800887BC at 0x800887BC
 */
// MDEC_SetupCallback



#include "tomba.h"
s32 FUN_800887bc(int param_1,s32 param_2)

{
  int iVar1;
  
  iVar1 = (*DAT_800abe54)();
  if (iVar1 == 0) {
    param_1->anim_id = 1;
    *(u8 **)(param_1 + 0x14) = &LAB_80088824;
    param_1->prev = param_2;
    *(u8 **)(param_1 + 0x18) = &LAB_80088840;
  }
  return iVar1 == 0;
}
