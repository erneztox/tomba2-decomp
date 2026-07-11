/**
 * @brief Entity shop state: entity->sub_action=1, checks g_ActionFlag flag
 * @note Original: func_800735F4 at 0x800735F4
 */
// Entity_State_Shop



#include "tomba.h"
void Entity_State_Shop(int param_1,s16 param_2)

{
  u8 bVar1;
  s8 cVar2;
  s16 sVar3;
  int iVar4;
  
  bVar1 = param_1->sub_action;
  if (bVar1 == 1) {
    if ((g_ActionFlag != '\0') && (DAT_800bf80f == '\0')) {
      if (*(u8 *)(param_1->script_ptr + 4) < 2) {
        *(u8 *)(param_1->script_ptr + 4) = 2;
        param_1->script_ptr = 0;
      }
      goto LAB_8007373c;
    }
    sVar3 = param_1->timer1 + -1;
    param_1->timer1 = sVar3;
    if (sVar3 != -1) {
      return;
    }
    if (*(u8 *)(param_1->script_ptr + 4) < 2) {
      *(u8 *)(param_1->script_ptr + 4) = 2;
      param_1->script_ptr = 0;
    }
    cVar2 = param_1->sub_action;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      if (param_1->collision_state != '\0') {
        return;
      }
LAB_8007373c:
      param_1->sub_action = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (g_ActionFlag != '\0') {
      return;
    }
    if (param_1->collision_state == '\0') {
      return;
    }
    iVar4 = Entity_ActivatePool3((int)param_2,2);
    param_1->script_ptr = iVar4;
    if (iVar4 == 0) {
      return;
    }
    cVar2 = param_1->sub_action;
    param_1->timer1 = 0x46;
  }
  param_1->sub_action = cVar2 + '\x01';
  return;
}
