/**
 * @brief Entity attack state variant 6: entity->action_state dispatch
 * @note Original: func_8005A39C at 0x8005A39C
 */
// Entity_State_Attack6



#include "tomba.h"
void FUN_8005a39c(int param_1,int param_2)

{
  s16 sVar1;
  u16 uVar2;
  uint uVar3;
  uint uVar4;
  s8 cVar5;
  int iVar6;
  
  if (param_1->kind == '\0') {
    param_1->flag_177 = param_1->flag_177 | 1;
  }
  switch(param_1->sub_action) {
  case 0:
    break;
  case 1:
    goto switchD_8005a3fc_caseD_1;
  case 2:
    DAT_800e807e = ((&DAT_800a4613)[param_1->timer1 * 4] & 2) + 7;
  case 3:
    if ((param_2 == 1) &&
       (sVar1 = param_1->draw_pos_x, param_1->draw_pos_x = sVar1 + -1, sVar1 == 1))
    {
      param_1->sub_action = 1;
      param_1->timer1 = param_1->timer1 + 1;
    }
    uVar4 = (uint)(u8)(&DAT_800a4612)[param_1->timer1 * 4];
    if ((int)param_1->draw_pos_z != uVar4) {
      uVar3 = 0;
      if (uVar4 == 1) {
        uVar3 = (uint)(param_1->direction != '\0');
      }
      iVar6 = uVar4 + uVar3 * 2;
      sVar1 = FUN_800776f8(iVar6 * 0x4000000 >> 0x10,(int)param_1->draw_pos_y,0x80);
      param_1->draw_pos_y = sVar1;
      if ((int)sVar1 == iVar6 * 0x400) {
        param_1->draw_pos_z = (u16)(u8)(&DAT_800a4612)[param_1->timer1 * 4]
        ;
      }
    }
    if (((&DAT_800a4613)[param_1->timer1 * 4] & 4) == 0) {
      return;
    }
    if (*(s16 *)(param_1->anim_data + 2) == 0xe) {
      DAT_800e807e = ((&DAT_800a4613)[param_1->timer1 * 4] & 2) + 6;
      param_1->sub_action = 2;
    }
    if (*(s16 *)(param_1->anim_data + 2) != 0x11) {
      return;
    }
    goto LAB_8005a6bc;
  default:
    goto switchD_8005a3fc_caseD_4;
  case 7:
    cVar5 = param_1->sub_action;
    param_1->action_state = 3;
    goto LAB_8005a6d8;
  case 8:
    if (param_2 == 1) {
      param_1->sub_action = 0;
      FUN_80054d14(param_1,2,6);
    }
    goto switchD_8005a3fc_caseD_4;
  }
  param_1->timer1 = 0;
  param_1->draw_pos_z = 0;
  param_1->sub_action = param_1->sub_action + '\x01';
switchD_8005a3fc_caseD_1:
  if (param_1->sprite_param2 == '\0') {
    if (param_1->kind == '\0') {
      uVar2 = param_1->type_flags & 0xf00;
      if ((uVar2 == 0x100) || (uVar2 == 0x200)) {
        cVar5 = (&DAT_800a4610)[param_1->timer1 * 4];
        if ((cVar5 == -0x51) || (cVar5 == -0x4f)) goto LAB_8005a4f4;
        cVar5 = (&DAT_800a4610)[param_1->timer1 * 4];
      }
      else {
        cVar5 = (&DAT_800a4610)[param_1->timer1 * 4];
      }
    }
    else {
      cVar5 = (&DAT_800a4610)[param_1->timer1 * 4];
    }
LAB_8005a4ec:
    FUN_80054d14(param_1,cVar5,4);
  }
  else {
    cVar5 = (&DAT_800a4610)[param_1->timer1 * 4];
    if (cVar5 != -0x4f) goto LAB_8005a4ec;
  }
LAB_8005a4f4:
  iVar6 = param_1->timer1 * 4;
  param_1->draw_pos_x = (u16)(u8)(&DAT_800a4611)[param_1->timer1 * 4];
  if ((&DAT_800a4611)[iVar6] == -1) {
    param_1->sub_action = 6;
  }
  else if (((&DAT_800a4613)[iVar6] & 1) == 0) {
LAB_8005a6bc:
    param_1->sub_action = 3;
  }
  else {
    DAT_800e807e = ((&DAT_800a4613)[iVar6] & 2) + 6;
    cVar5 = param_1->sub_action;
LAB_8005a6d8:
    param_1->sub_action = cVar5 + '\x01';
  }
switchD_8005a3fc_caseD_4:
  return;
}
