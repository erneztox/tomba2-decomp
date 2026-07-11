/**
 * @brief Audio key on: checks slot state, calls CD_CheckSlot, triggers voice
 * @note Original: func_80092310 at 0x80092310
 */
// Audio_KeyOn



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Audio_KeyOn(s16 param_1,s16 param_2,u8 *param_3)

{
  s32 uVar1;
  int iVar2;
  
  if (*(s8*)(param_1 + -0x7fefa2e8) == '\x01') {
    CD_CheckSlot((int)param_1,(int)param_2);
    iVar2 = param_2 * 0x10;
    *param_3 = *(u8 *)(iVar2 + _DAT_80105cdc);
    param_3->flags = *(u8 *)(iVar2 + _DAT_80105cdc + 1);
    param_3->flags = *(u8 *)(iVar2 + _DAT_80105cdc + 2);
    param_3->flags = *(u8 *)(iVar2 + _DAT_80105cdc + 3);
    param_3->flags = *(u8 *)(iVar2 + _DAT_80105cdc + 4);
    uVar1 = 0;
    *(s16 *)(param_3 + 6) = *(s16 *)(iVar2 + _DAT_80105cdc + 6);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
