/**
 * @brief Entity state checker: tests entity[0x158] state ptr, validates
 * @note Original: func_80053D0C at 0x80053D0C
 */
// Entity_StateCheck



#include "tomba.h"
void Entity_StateCheck(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  iVar2 = param_1->state_ptr;
  if ((iVar2 != 0) && (iVar2 != 1)) {
    bVar1 = *(u8 *)(iVar2 + 0xc);
    if (bVar1 == 4) {
      if (1 < iVar2->kind - 0x2f) {
        iVar2->collision_state = 0;
      }
    }
    else {
      if (bVar1 < 5) {
        if (bVar1 != 2) {
          param_1->state_ptr = 0;
          goto LAB_80053d88;
        }
      }
      else if ((bVar1 != 5) && (bVar1 != 9)) goto LAB_80053d84;
      iVar2->flag_5E = 0;
    }
  }
LAB_80053d84:
  param_1->state_ptr = 0;
LAB_80053d88:
  param_1->action_flag = 0;
  return;
}
