/**
 * @brief Entity attack main: entity->action_state switch, attack states
 * @note Original: func_8006C0C4 at 0x8006C0C4
 */
// Entity_Behavior_AttackMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8006c0c4(undefined1 *param_1)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  switchparam_1->action_state {
  case 0:
    FUN_8006bdf0(param_1,0);
    cVar1 = param_1->action_state;
    goto LAB_8006c25c;
  case 1:
    param_1->action_state = param_1->action_state + '\x01';
    if (param_1->flag_5E == '\0') {
      FUN_80074590(0xb,0xfffffffe,0);
      param_1->timer1 = 4;
    }
    else {
      FUN_80074590(0xb,0xfffffffc,0);
      param_1->timer1 = 2;
    }
    break;
  case 2:
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 == 1) {
      param_1->bounds_min_x = 100;
      param_1->bounds_size = 200;
      param_1->bounds_min_y = 0xa0;
      param_1->bounds_max_y = 0x104;
      *param_1 = 1;
      param_1->action_state = param_1->action_state + '\x01';
      if (param_1->flag_5E == '\0') {
        uVar3 = 8;
      }
      else {
        uVar3 = 7;
      }
      param_1->timer1 = uVar3;
      param_1->timer2 = 3;
      FUN_8006bd20(param_1);
    }
    break;
  case 3:
    if ((param_1->move_mode == '\x01') &&
       (sVar2 = param_1->timer2, param_1->timer2 = sVar2 + -1, sVar2 == 1)) {
      param_1->timer2 = 3;
      param_1->move_mode = 0;
    }
    FUN_8006be88(param_1);
    if ((byte)param_1->move_mode < 2) goto LAB_8006c2a8;
    if (param_1->move_mode == 2) {
      DAT_800e7ef9 = 2;
    }
    param_1->timer1 = 10;
    cVar1 = param_1->action_state;
    param_1->timer2 = 0x155;
LAB_8006c25c:
    param_1->action_state = cVar1 + '\x01';
    break;
  case 4:
    if (param_1->timer2 < 0x800) {
      iVar4 = FUN_80083e80();
      _DAT_800e7eb0 = _DAT_800e7eb0 + iVar4 * -0x100;
      param_1->timer2 = param_1->timer2 + 0x155;
    }
LAB_8006c2a8:
    sVar2 = param_1->timer1;
    param_1->timer1 = sVar2 + -1;
    if (sVar2 == 1) {
      DAT_800e807e = 0;
      *param_1 = 2;
      param_1->state = 3;
      if ((DAT_800e7fc6 & 1) != 0) {
        DAT_800e7ef9 = 0;
      }
    }
  }
  if (DAT_800e7fc6 == 0) {
    DAT_800e807e = 0;
    *param_1 = 2;
    param_1->move_mode = 2;
    param_1->state = 2;
  }
  return;
}
