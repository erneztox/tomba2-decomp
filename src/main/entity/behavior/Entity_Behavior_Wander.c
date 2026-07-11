/**
 * @brief Random wander/patrol with visibility check and timer
 * @note Original: func_8002918C at 0x8002918C
 */
// Entity_Behavior_Wander



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8002918c(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->state = 1;
    param_1->sub_action = 0;
    param_1->scale_y = param_1->anim_data;
    iVar3 = FUN_8009a450();
    param_1->action_state = (char)(iVar3 >> 0xb) + '\b';
    if ((param_1->sub_type == '5') && (_DAT_800e7ffe < 0)) {
      iVar3 = FUN_8009a450();
      param_1->action_state = (char)(iVar3 >> 0xc) + '\x03';
    }
  }
  iVar3 = FUN_8009a450();
  param_1->sub_action = param_1->sub_action + (char)(iVar3 >> 9);
  sVar2 = FUN_8002b278(param_1);
  if (param_1->sub_action < '\0') {
    param_1->sub_action = param_1->sub_action + -0x80;
  }
  else {
    param_1->scale_y = param_1->anim_data;
    if (param_1->anim_data == 0) {
      param_1->state = 2;
    }
    else if (sVar2 == 0) {
      FUN_80031780(param_1);
    }
  }
  return;
}
