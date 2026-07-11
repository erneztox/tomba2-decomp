/**
 * @brief Audio key on: checks slot state, calls FUN_800962b0, triggers voice
 * @note Original: func_80092310 at 0x80092310
 */
// Audio_KeyOn



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_80092310(short param_1,short param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + -0x7fefa2e8) == '\x01') {
    FUN_800962b0((int)param_1,(int)param_2);
    iVar2 = param_2 * 0x10;
    *param_3 = *(undefined1 *)(iVar2 + _DAT_80105cdc);
    param_3->flags = *(undefined1 *)(iVar2 + _DAT_80105cdc + 1);
    param_3->kind = *(undefined1 *)(iVar2 + _DAT_80105cdc + 2);
    param_3->sub_type = *(undefined1 *)(iVar2 + _DAT_80105cdc + 3);
    param_3->state = *(undefined1 *)(iVar2 + _DAT_80105cdc + 4);
    uVar1 = 0;
    *(undefined2 *)(param_3 + 6) = *(undefined2 *)(iVar2 + _DAT_80105cdc + 6);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
