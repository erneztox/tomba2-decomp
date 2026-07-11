/**
 * @brief Entity state dispatch variant 3: entity[0x6A] dispatch
 * @note Original: func_800532A0 at 0x800532A0
 */
// Entity_StateDispatch3



/* WARNING: Removing unreachable block (ram,0x800532d0) */

undefined4 FUN_800532a0(int param_1)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_1->type_flags >> 0xc;
  uVar5 = (param_1->type_flags & 0xf00) >> 8;
  if (uVar5 < 4) {
    if (uVar5 == 0) {
      iVar6 = (int)param_1->draw_scale;
      cVar2 = -(char)(param_1->draw_scale >> 7);
      if (uVar1 == 2) {
        cVar3 = cVar2 + '\x04';
        if (param_1->direction == '\0') {
          if (0 < (int)((uint)param_1->anim_counter << 0x10)) {
            param_1->anim_counter = (short)param_1->anim_counter >> 1;
          }
          goto LAB_800533ec;
        }
      }
      else {
        if (uVar1 != 3) goto LAB_800533ec;
        iVar4 = (int)param_1->anim_counter;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        cVar3 = cVar2 + '\x0e';
        if (iVar4 < 0x1500) {
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (iVar6 < 0xf0) goto LAB_800533ec;
          cVar3 = cVar2 + '\x0e';
        }
      }
    }
    else {
      if ((uVar1 != 3) || (DAT_800bf870 != '\x04')) goto LAB_800533ec;
      cVar3 = '\x06';
    }
  }
  else {
    if (uVar5 != 5) goto LAB_800533ec;
    if (uVar1 == 3) {
      if (DAT_800bf870 != '\x04') goto LAB_800533ec;
      cVar3 = '\x06';
    }
    else if ((uVar1 != 4) || (cVar3 = '\b', (param_1->entity_flags & 0x30) == 0))
    goto LAB_800533ec;
  }
  param_1->flag_16A = cVar3;
LAB_800533ec:
  cVar3 = (&DAT_800a4478)[(param_1->flag_16A & 0xe) >> 1];
  if (cVar3 != '\0') {
    if (param_1->behavior_state != cVar3) {
      param_1->behavior_state = cVar3;
      param_1->action_state = 0;
      param_1->sub_action = 0;
      return 1;
    }
    if (param_1->behavior_state == '3') {
      return 1;
    }
  }
  return 0;
}
