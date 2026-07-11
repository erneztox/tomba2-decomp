/**
 * @brief Entity shop state: entity->sub_action=1, checks DAT_800bf816 flag
 * @note Original: func_800735F4 at 0x800735F4
 */
// Entity_State_Shop



void FUN_800735f4(int param_1,short param_2)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = param_1->sub_action;
  if (bVar1 == 1) {
    if ((DAT_800bf816 != '\0') && (DAT_800bf80f == '\0')) {
      if (*(byte *)(param_1->script_ptr + 4) < 2) {
        *(undefined1 *)(param_1->script_ptr + 4) = 2;
        param_1->script_ptr = 0;
      }
      goto LAB_8007373c;
    }
    sVar3 = param_1->timer1 + -1;
    param_1->timer1 = sVar3;
    if (sVar3 != -1) {
      return;
    }
    if (*(byte *)(param_1->script_ptr + 4) < 2) {
      *(undefined1 *)(param_1->script_ptr + 4) = 2;
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
    if (DAT_800bf816 != '\0') {
      return;
    }
    if (param_1->collision_state == '\0') {
      return;
    }
    iVar4 = FUN_8007e038((int)param_2,2);
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
