/**
 * @brief Entity ladder state: entity->action_state dispatch, climb movement
 * @note Original: func_800624B4 at 0x800624B4
 */
// Entity_State_Ladder



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800624b4(undefined1 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  
  param_1->flag_17B = 1;
  DAT_1f80027a = 2;
  switchparam_1->action_state {
  case 0:
    DAT_800bf80e = 0;
    *param_1 = 6;
    DAT_800bf809 = 1;
    if (param_1->kind == '\0') {
      FUN_80053d90(param_1);
      FUN_800551c4(param_1);
    }
    DAT_800bf88f = param_1->sprite_param3;
    FUN_80067ef4(param_1);
    FUN_8001cf2c();
    if (param_1->kind == '\0') {
      FUN_80055d5c(param_1);
    }
    param_1->action_state = param_1->action_state + '\x01';
    FUN_80076d68(param_1);
    iVar3 = FUN_800310f4(0x1e,0);
    if (iVar3 != 0) {
      iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    }
    FUN_80074590(0x37,0x16,0x1e);
    param_1->parent = iVar3;
    param_1->timer1 = 5;
    break;
  case 1:
    if (param_1->timer1 != 0) {
      param_1->timer1 = param_1->timer1 + -1;
      return;
    }
    cVar2 = param_1->action_state;
    param_1->flags = 0;
    goto code_r0x8006266c;
  case 2:
    if (_DAT_801fe0e0 != 0) {
      FUN_8001cf2c();
      return;
    }
    goto LAB_80062664;
  case 3:
    iVar3 = FUN_80044cd4(_DAT_800ed014,
                         *(uint *)(&DAT_800fb170 + (param_1->entity_flags & 0xf) * 8) >> 0xb,
                         *(int *)(&DAT_800fb170 + ((param_1->entity_flags & 0xf) << 3 | 4)) -
                         *(uint *)(&DAT_800fb170 + (param_1->entity_flags & 0xf) * 8));
    if (iVar3 == 0) {
      return;
    }
LAB_80062664:
    cVar2 = param_1->action_state;
code_r0x8006266c:
    param_1->action_state = cVar2 + '\x01';
    break;
  case 4:
    if (DAT_1f80019b != '\0') {
      iVar3 = param_1->parent;
      if (iVar3 != 0) {
        iVar3->state = 2;
        iVar3->behavior_state = 0;
      }
      FUN_80057fd4(param_1);
      param_1->flags = 1;
      if (DAT_1f800137 != '\x01') {
        FUN_80074f24(DAT_800bf870);
      }
      *param_1 = 3;
      uVar1 = _DAT_1f80023c;
      param_1->timer_172 = 0x1e;
      *(undefined4 *)(param_1 + 4) = uVar1;
      if (DAT_1f800137 == '\x02') {
        DAT_1f800137 = '\0';
      }
      DAT_800bf809 = 0;
    }
  }
  return;
}
