/**
 * @brief Entity state main variant 9: entity->action_state switch (219L)
 * @note Original: func_8005C26C at 0x8005C26C
 */
// Entity_StateMain9



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8005c26c(int param_1)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1->parent;
  switch(param_1->action_state) {
  case 0:
    param_1->direction = param_1->behavior_flags & 1;
    FUN_80055284(param_1);
    param_1->flag_16A = 0;
    FUN_80053d0c(param_1);
    FUN_80053bf8(param_1,0);
    param_1->state_flag146 = 0;
    param_1->anim_counter = 0;
    FUN_80054198(param_1);
    param_1->velocity_y = 0;
    if ((param_1->sub_state == '\x04') || (param_1->sub_state == '\a')) {
      FUN_8005b370(param_1,0);
      FUN_800551c4(param_1);
      param_1->action_state = 2;
      param_1->state_flag144 = 0;
      param_1->velocity_y = 0;
      return;
    }
    param_1->action_state = 1;
  case 1:
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,6);
    if ((param_1->entity_flags & 0x40) != 0) {
      param_1->state_flag144 = 0;
    }
    iVar5 = FUN_80053bf8(param_1,0);
    if (iVar5 == 0) {
      FUN_80076d68(param_1);
      iVar5 = FUN_80055824();
      if (iVar5 == 0) {
        if (param_1->collision_state != '\0') {
          param_1->velocity_y = 0;
          param_1->state_flag144 = 0;
          param_1->action_state = param_1->action_state + '\x01';
        }
      }
      else {
        param_1->action_state = 3;
        param_1->state_flag144 = 0;
        param_1->velocity_y = 0;
        param_1->state_flag145 = 1;
      }
    }
    else {
      FUN_80076d68(param_1);
      if (param_1->collision_state != '\0') {
        param_1->velocity_y = 0;
        param_1->state_flag144 = 0;
        param_1->action_state = param_1->action_state + '\x01';
        FUN_80053bf8(param_1);
      }
    }
    FUN_8005b370(param_1,1);
LAB_8005c7a0:
    FUN_800551c4(param_1);
    break;
  case 2:
    FUN_80076d68(param_1);
    if (param_1->sub_state != '\a') {
      FUN_80055e28(param_1,1);
      FUN_80055d5c(param_1);
      if (param_1->sub_state == '\x04') {
        FUN_8005b370(param_1,0);
        FUN_800551c4(param_1);
        param_1->type_flags = 0;
        iVar5 = FUN_80049280(param_1,0,(int)param_1->angle_delta);
        if (iVar5 != 0) {
          param_1->type_flags = _DAT_1f8001a6;
        }
      }
      else {
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 8;
        FUN_8005444c(param_1);
        FUN_8005b370(param_1,1);
        FUN_800551c4(param_1);
        FUN_80056c00(param_1,1);
      }
      iVar5 = FUN_80055824();
      if (iVar5 == 0) {
        return;
      }
      param_1->velocity_y = 0;
      param_1->state_flag145 = 1;
      cVar2 = param_1->action_state + '\x01';
      goto LAB_8005c884;
    }
    FUN_8005b370(param_1,0);
    goto LAB_8005c7a0;
  case 3:
    FUN_80074590(0x20,0,0);
    param_1->rot_z = 0;
    FUN_80054d14(param_1,param_1->anim_id + 1,0);
    param_1->sub_action = 0;
    param_1->action_state = param_1->action_state + '\x01';
  case 4:
    if (param_1->sub_state == '\b') {
      FUN_80055e28(param_1,1);
      FUN_80055fbc(param_1,param_1->behavior_flags);
      FUN_80056b48(param_1,1);
    }
    FUN_80055d5c(param_1);
    FUN_800574e0(param_1,2);
    if (param_1->sub_state == '\b') {
      FUN_8005b20c(param_1,0);
    }
    else {
      FUN_8005b370(param_1,1);
    }
    if ((DAT_800bf848 == '\0') &&
       ((iVar4 = FUN_80055824(), iVar4 != 0 || (param_1->collision_state != '\0')))) {
      if (param_1->sub_state == '\x04') {
        cVar2 = '\x06';
LAB_8005c79c:
        param_1->action_state = cVar2;
      }
      else {
        iVar4 = FUN_8005c138(param_1,iVar5);
        if (iVar4 == 0) {
          iVar5->state = 3;
        }
        cVar2 = '\t';
        if (param_1->sub_state != '\b') {
          cVar2 = param_1->action_state + '\x01';
        }
        param_1->action_state = cVar2;
        param_1->sub_action = 1;
        param_1->sub_state = 0;
        FUN_80054d14(param_1,0x26,0);
        param_1->state_flag145 = 1;
        param_1->collision_state = 0;
        param_1->state_flag144 = 0;
        *(undefined1 *)(param_1 + 0x148) = 0;
        param_1->velocity_y = 0;
        param_1->rot_z = 0x20;
      }
    }
    goto LAB_8005c7a0;
  case 5:
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
LAB_8005c7dc:
    sVar3 = param_1->rot_z + 0x200;
    param_1->rot_z = sVar3;
    if (0xfff < sVar3) {
      param_1->rot_z = 0x1000;
      param_1->behavior_state = 2;
      param_1->action_state = 1;
      FUN_80054d14(param_1,0x15,3);
    }
    goto LAB_8005c828;
  case 6:
    FUN_80054d14(param_1,0x24,0);
    param_1->timer1 = 0;
    param_1->timer2 = 0;
    uVar1 = *(undefined2 *)(&DAT_800a4694 + param_1->timer1 * 2);
    param_1->action_state = param_1->action_state + '\x01';
    param_1->rot_z = uVar1;
    FUN_8005b20c();
    break;
  case 7:
    sVar3 = param_1->timer1 + 1;
    param_1->timer1 = sVar3;
    if (10 < sVar3) {
      param_1->timer1 = 10;
    }
    param_1->rot_z =
         *(undefined2 *)(&DAT_800a4694 + param_1->timer1 * 2);
    if ((param_1->timer2 == 0) &&
       (FUN_8005b20c(param_1,1), *(short *)(param_1->anim_data + 2) == 6)) {
      FUN_80074590(0x21,0,0);
      iVar5->behavior_state = 3;
      iVar5->action_state = 0;
      param_1->timer2 = 1;
      param_1->sub_state = 0;
    }
    iVar5 = FUN_80076d68(param_1);
    if (iVar5 != 1) goto LAB_8005c7a0;
    FUN_80054d14(param_1,param_1->anim_id + 1,0);
    param_1->state_flag145 = 1;
    param_1->collision_state = 0;
    param_1->state_flag144 = 0;
    *(undefined1 *)(param_1 + 0x148) = 0;
    param_1->velocity_y = 0;
    param_1->sub_action = 1;
    cVar2 = param_1->action_state + '\x01';
    goto LAB_8005c79c;
  case 8:
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    if (1 < *(ushort *)(param_1->anim_data + 2)) goto LAB_8005c7dc;
LAB_8005c828:
    FUN_800574e0(param_1,8);
    FUN_80057c08(param_1,0);
    break;
  case 9:
    FUN_80055d5c(param_1);
    FUN_80076d68(param_1);
    sVar3 = param_1->rot_z + 0x200;
    param_1->rot_z = sVar3;
    if (sVar3 < 0x1000) {
      return;
    }
    param_1->behavior_state = 3;
    cVar2 = '\a';
    param_1->rot_z = 0;
LAB_8005c884:
    param_1->action_state = cVar2;
  }
  return;
}
