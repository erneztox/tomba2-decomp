/**
 * @brief Entity combo state: chain attacks, timer-based
 * @note Original: func_800574E0 at 0x800574E0
 */
// Entity_State_Combo



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800574e0(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  short sVar6;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = param_1->sub_action;
  uVar3 = param_1->entity_flags;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      if ((uVar3 & 0x20) != 0) {
        FUN_80056f3c(param_1);
      }
      if (((((param_2 & 0x10) == 0) && (DAT_800bf848 == 0)) && (*(char *)(param_1 + 0x61) == '\0'))
         && (((uVar3 & 0x40) != 0 || (*(char *)(param_1 + 0x179) == '\x01')))) {
        iVar5 = FUN_800572ec(param_1,param_2);
        if (iVar5 != 0) {
          return;
        }
      }
      else {
        FUN_800541f4(param_1,0);
        if (param_1->collision_state != '\0') goto LAB_8005797c;
        if ((uVar3 & 0x60) != 0) {
          if (param_2 != 8) {
            uVar4 = FUN_800776f8(0,(int)param_1->rot_z,0x40);
            param_1->rot_z = uVar4;
          }
          if ((uVar3 & 0x20) != 0) {
            if ((param_1->behavior_flags & 8) != 0) {
              *(char *)(param_1 + 0x178) = *(char *)(param_1 + 0x178) + '\x01';
            }
            cVar2 = *(char *)(param_1 + 0x178) + '\x01';
            *(char *)(param_1 + 0x178) = cVar2;
            if (cVar2 == -1) {
              *(undefined1 *)(param_1 + 0x178) = 0xff;
            }
          }
        }
        sVar6 = 0x360;
        if (((param_2 & 1) == 0) && (param_1->anim_id == -0x1b)) {
          sVar6 = 0x500;
        }
        sVar6 = param_1->velocity_y + sVar6;
        param_1->velocity_y = sVar6;
        if (0x3e00 < sVar6) {
          param_1->velocity_y = 0x3e00;
        }
        param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
        if (param_2 == 2) {
          if ((DAT_800bf848 != 0) && ((_DAT_800e7e68 & _DAT_1f800172) != 0)) {
            param_1->sub_action = 0;
            param_1->state_flag145 = 1;
            FUN_80074590(0x1d,0,0);
            return;
          }
          cVar2 = FUN_80049280(param_1,0,((int)param_1->angle_delta << 0x11) >> 0x10);
          param_1->collision_state = cVar2;
          if (cVar2 != '\0') {
            return;
          }
        }
        else if (DAT_800bf848 == 0) {
          if (((-1 < param_1->velocity_y) && ((param_2 & 2) == 0)) &&
             (param_1->state_flag144 == '\0')) {
            param_1->state_flag144 = 1;
          }
        }
        else {
          if (param_1->state_flag144 == '\x01') {
            param_1->state_flag144 = 0;
          }
          if (((int)param_2 < 2) && ((_DAT_800e7e68 & _DAT_1f800172) != 0)) goto LAB_80057908;
        }
        FUN_8005444c(param_1);
      }
      if (param_1->collision_state == '\0') {
        return;
      }
LAB_8005797c:
      *(undefined1 *)(param_1 + 0x148) = 0;
      param_1->angle_offset = 0;
      if (param_1->state_flag144 < 2) {
        param_1->state_flag144 = 0;
      }
      param_1->state_flag145 = 0;
      local_1c = param_1->pos_y_fixed;
      if (param_1->direction == '\0') {
        local_20 = param_1->normal_x * -0x2800;
        local_18 = param_1->normal_z * -0x2800;
      }
      else {
        local_20 = param_1->normal_x * 0x2800;
        local_18 = param_1->normal_z * 0x2800;
      }
      local_20 = *(int *)(param_1 + 0x2c) + local_20;
      local_18 = param_1->scale_y + local_18;
      FUN_800538e0(param_1,&local_20,0);
      FUN_8005314c(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_8005749c(param_1);
    if ((param_2 & 1) == 0) {
      FUN_80055f48(param_1,1);
      if (param_1->state_165 != '\0') {
        param_1->velocity_y = param_1->velocity_y + -0x580;
      }
      if (param_1->sub_state == '\x06') {
        param_1->velocity_y = param_1->velocity_y + -0x1000;
      }
    }
  }
  FUN_800541f4(param_1,0);
  FUN_800543c0(param_1);
  if (((((param_2 & 0x10) == 0) && (DAT_800bf848 == 0)) && (*(char *)(param_1 + 0x61) == '\0')) &&
     ((uVar3 & 0x60) != 0)) {
    FUN_8005706c(param_1,param_2);
  }
  else {
    sVar6 = 0x360;
    if (((param_2 & 1) == 0) && ((uVar3 & 0x180) != 0)) {
      sVar6 = 0x120;
    }
    uVar3 = param_1->velocity_y + sVar6;
    param_1->velocity_y = uVar3;
    if (-1 < (int)((uint)uVar3 << 0x10)) {
      param_1->state_flag145 = 2;
      param_1->sub_action = param_1->sub_action + '\x01';
      if ((param_2 & 2) == 0) {
        param_1->state_flag144 = 1;
      }
    }
    param_1->pos_y_fixed = param_1->pos_y_fixed + param_1->velocity_y * 0x100;
  }
  if ((param_2 & 1) == 0) {
    FUN_80056e08(param_1);
  }
  if ((DAT_800bf848 & 3) == 0) {
    return;
  }
  if (param_1->state_flag144 == '\x01') {
    param_1->state_flag144 = 0;
  }
  if ((1 < (int)param_2) || ((_DAT_800e7e68 & _DAT_1f800172) == 0)) {
    param_1->sub_action = 2;
    param_1->state_flag145 = 2;
    return;
  }
LAB_80057908:
  param_1->sub_action = 0;
  param_1->state_flag145 = 1;
  FUN_80054d14(param_1,0x14,4);
  FUN_80074590(0x1d,0,0);
  return;
}
