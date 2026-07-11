/**
 * @brief Entity main variant 2: complex entity controller (453L)
 * @note Original: func_8001DD00 at 0x8001DD00
 */
// Entity_Main2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
#include "common.h"

uint FUN_8001dd00(char *param_1,char *param_2,int param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char *puVar7;
  uint uVar8;
  undefined2 local_6e;
  short local_6a;
  undefined2 local_66;
  undefined2 local_5e;
  short local_5a;
  undefined2 local_56;
  undefined2 local_4e;
  short local_4a;
  undefined2 local_46;
  undefined2 local_3e;
  short local_3a;
  undefined2 local_36;
  undefined2 local_2e;
  short local_2a;
  undefined2 local_26;
  char auStack_70 [16];
  char auStack_60 [16];
  char auStack_50 [16];
  char auStack_40 [16];
  char auStack_30 [24];
  
  uVar8 = 0;
  switch(*param_1) {
  case 1:
    FUN_80074590(10,0,0);
    uVar8 = 2;
    if ((param_4 & 0x90) == 0) {
      if ((param_4 & 2) != 0) {
        param_1->move_mode = 1;
        if ((param_4 & 1) == 0) {
          *param_2 = 2;
          param_2->state = 2;
          param_2->behavior_state = 2;
        }
        else {
          *param_2 = 3;
          param_2->state = 2;
          param_2->behavior_state = 0;
        }
        param_2->action_state = 0;
        param_2->move_mode = (char)(param_1->target_angle >> 4);
        puVar7 = param_1 + 0x2c;
        FUN_8003116c((byte)param_1->kind + 0xc,puVar7,0xffffffb0);
        uVar6 = 1;
        goto LAB_8001e67c;
      }
      param_2->move_mode = (char)(param_1->target_angle >> 4);
      if ((param_4 & 1) == 0) {
        if (param_1->flag_5E != '\0') {
          *param_2 = 2;
          param_2->state = 2;
          uVar5 = 7;
          goto LAB_8001de18;
        }
      }
      else if (param_1->flag_5E == '\0') {
        *param_2 = 3;
        param_2->state = 2;
        uVar5 = 4;
LAB_8001de18:
        param_2->behavior_state = uVar5;
        param_2->action_state = 0;
      }
      puVar7 = param_1 + 0x2c;
      FUN_800313a0(0x16,puVar7,0xffffffb0,param_1 + 0x54);
      FUN_8003116c((byte)param_1->kind + 0xc,puVar7,0xffffffb0);
      uVar6 = 1;
      goto LAB_8001e67c;
    }
    uVar6 = 2;
    puVar7 = param_1 + 0x2c;
    goto LAB_8001e67c;
  case 2:
    FUN_80074590(0xb,0,0);
    uVar8 = 8;
    if ((param_4 & 0x10) == 0) {
      param_2->move_mode = (char)(param_1->rot_y >> 4);
      if (((param_4 & 1) == 0) && (param_1->flag_5E != '\0')) {
        *param_2 = 2;
        param_2->state = 2;
        param_2->behavior_state = 2;
      }
      else {
        *param_2 = 3;
        param_2->state = 2;
        param_2->behavior_state = 0;
      }
      param_2->action_state = 0;
      uVar6 = 1;
      puVar7 = param_1 + 0x2c;
    }
    else {
      uVar6 = 2;
      puVar7 = param_1 + 0x2c;
    }
    break;
  case 3:
    FUN_80074590(0xc,0,0);
    uVar8 = 0x20;
    if ((param_4 & 0x60) == 0) {
      if ((param_4 & 1) == 0) {
        if (param_1->flag_5E == '\0') {
          *param_1 = 2;
          FUN_80074590(0xd,0,0);
        }
        else {
          param_1->move_mode = 1;
        }
        uVar4 = param_1->rot_y;
        *param_2 = 2;
        param_2->state = 2;
        param_2->behavior_state = 7;
        param_2->action_state = 0;
        param_2->move_mode = (char)(uVar4 >> 4);
        if ((_DAT_800e7fee != 0) && (DAT_1f800137 == '\0')) {
          if ((param_4 & 0x100) == 0) {
            sVar1 = param_3->pos_x;
            sVar2 = *(short *)(param_3 + 0x30);
            sVar3 = *(short *)(param_3 + 0x34);
            _DAT_1f800208 = (undefined1 *)(param_3 & 0x7fffffff);
            _DAT_1f800280 = param_2;
          }
          else {
            sVar1 = param_2->pos_y;
            sVar2 = *(short *)(param_2 + 0x32);
            sVar3 = param_2->pos_z;
            _DAT_1f800208 = param_2;
          }
          *(undefined2 *)(param_1 + 0x78) = param_1->target_angle;
          DAT_800e7fc6 = 4;
          DAT_1f80027b = 1;
          param_1->collision_state = 1;
          param_1->draw_x = param_1->pos_y - sVar1;
          param_1->angle_delta = *(short *)(param_1 + 0x32) - sVar2;
          *(short *)(param_1 + 100) = param_1->pos_z - sVar3;
          _DAT_1f800200 = param_1->pos_y;
          _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
          _DAT_1f800204 = param_1->pos_z;
          DAT_1f80023a = (param_4 & 0x1000) == 0;
          FUN_80074590(0xc,0,0);
        }
        uVar6 = 2;
        puVar7 = param_1 + 0x2c;
      }
      else {
        if (param_1->flag_5E == '\x01') {
          param_1->move_mode = 1;
        }
        else {
          *param_1 = 2;
          FUN_80074590(0xd,0,0);
        }
        uVar4 = param_1->rot_y;
        *param_2 = 3;
        param_2->state = 2;
        param_2->behavior_state = 4;
        param_2->action_state = 0;
        param_2->move_mode = (char)(uVar4 >> 4);
        if ((_DAT_800e7fee != 0) && (DAT_1f800137 == '\0')) {
          if ((param_4 & 0x100) == 0) {
            sVar1 = param_3->pos_x;
            sVar2 = *(short *)(param_3 + 0x30);
            sVar3 = *(short *)(param_3 + 0x34);
            _DAT_1f800208 = (undefined1 *)(param_3 & 0x7fffffff);
            _DAT_1f800280 = param_2;
          }
          else {
            sVar1 = param_2->pos_y;
            sVar2 = *(short *)(param_2 + 0x32);
            sVar3 = param_2->pos_z;
            _DAT_1f800208 = param_2;
          }
          *(undefined2 *)(param_1 + 0x78) = param_1->target_angle;
          DAT_800e7fc6 = 4;
          DAT_1f80027b = 1;
          param_1->collision_state = 1;
          param_1->draw_x = param_1->pos_y - sVar1;
          param_1->angle_delta = *(short *)(param_1 + 0x32) - sVar2;
          *(short *)(param_1 + 100) = param_1->pos_z - sVar3;
          _DAT_1f800200 = param_1->pos_y;
          _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
          _DAT_1f800204 = param_1->pos_z;
          DAT_1f80023a = (param_4 & 0x1000) == 0;
          FUN_80074590(0xc,0,0);
        }
        uVar6 = 2;
        puVar7 = param_1 + 0x2c;
      }
    }
    else {
      uVar6 = 1;
      puVar7 = param_1 + 0x2c;
      uVar4 = param_1->rot_y;
      *param_2 = 2;
      param_2->state = 2;
      param_2->behavior_state = 2;
      param_2->action_state = 0;
      param_2->move_mode = (char)(uVar4 >> 4);
    }
    break;
  case 4:
    FUN_80074590(0x2e,0,0);
    uVar8 = 0x40;
    if ((param_4 & 0xbe) == 0) {
      param_2->move_mode = (char)(param_1->target_angle >> 4);
      if (((param_4 & 1) == 0) && (param_1->flag_5E != '\0')) {
        *param_2 = 2;
        param_2->state = 2;
        param_2->behavior_state = 2;
      }
      else {
        *param_2 = 3;
        param_2->state = 2;
        param_2->behavior_state = 0;
      }
      param_2->action_state = 0;
      uVar6 = 0x16;
    }
    else {
      uVar6 = 0x16;
    }
    goto LAB_8001e59c;
  case 5:
    FUN_80074590(0x2c,0,0);
    FUN_80074590(0x2d,0,0);
    *param_1 = 2;
    if ((param_4 & 0xbc) == 0) {
      param_2->move_mode = (char)(param_1->target_angle >> 4);
      if (((param_4 & 1) == 0) && (param_1->flag_5E != '\0')) {
        uVar5 = 7;
        *param_2 = 2;
      }
      else {
        *param_2 = 3;
        uVar5 = 4;
      }
      param_2->state = 2;
      param_2->behavior_state = uVar5;
      param_2->action_state = 0;
    }
    puVar7 = param_1 + 0x2c;
    FUN_800313a0(0x17,puVar7,0xffffffb0,param_1 + 0x54);
    FUN_8003116c(0x18,puVar7,0xffffffb0);
    FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),puVar7,0x400,0x15);
    FUN_80074590(0xc,0,0);
    return 0x42;
  case 6:
    FUN_80074590(0x2c,0,0);
    uVar8 = 0x42;
    if ((param_4 & 0xbc) == 0) {
      param_2->move_mode = (char)(param_1->target_angle >> 4);
      if ((param_4 & 1) == 0) {
        if (param_1->flag_5E == '\0') {
          *param_1 = 2;
          FUN_80074590(0x2d,0,0);
        }
        else {
          param_1->move_mode = 1;
        }
        *param_2 = 2;
        param_2->state = 2;
        uVar5 = 7;
      }
      else {
        if (param_1->flag_5E == '\x01') {
          param_1->move_mode = 1;
        }
        else {
          *param_1 = 2;
          FUN_80074590(0x2d,0,0);
          FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x400,0x15);
          FUN_80074590(0xc,0,0);
        }
        *param_2 = 3;
        param_2->state = 2;
        uVar5 = 4;
      }
      param_2->behavior_state = uVar5;
      param_2->action_state = 0;
    }
    else if (param_1->flag_5E == '\x01') {
      param_1->move_mode = 1;
    }
    else {
      *param_1 = 2;
      FUN_80074590(0x2d,0,0);
      FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x400,0x15);
      FUN_80074590(0xc,0,0);
    }
    FUN_8003116c(0x18,param_1 + 0x2c,0xffffffb0);
    uVar6 = 0x17;
LAB_8001e59c:
    FUN_800313a0(uVar6,param_1 + 0x2c,0xffffffb0,param_1 + 0x54);
    return uVar8;
  case 7:
    FUN_80074590(0x31,0,0);
    uVar8 = 0x80;
    if ((param_4 & 0x7e) == 0) {
      param_1->move_mode = 1;
      param_2->move_mode = (char)(param_1->target_angle >> 4);
      if (((param_4 & 1) == 0) && (param_1->flag_5E != '\0')) {
        uVar5 = 2;
        *param_2 = 2;
        param_2->state = 2;
      }
      else {
        *param_2 = 3;
        param_2->state = 2;
        uVar5 = 6;
      }
      param_2->behavior_state = uVar5;
      param_2->action_state = 0;
      local_6e = param_1->pos_y;
      local_6a = *(short *)(param_1 + 0x32);
      uVar6 = 1;
      local_66 = param_1->pos_z;
      puVar7 = auStack_70;
    }
    else {
      local_6e = param_1->pos_y;
      local_6a = *(short *)(param_1 + 0x32);
      uVar6 = 2;
      local_66 = param_1->pos_z;
      puVar7 = param_1 + 0x2c;
    }
    local_6a = local_6a + 0x5a;
    break;
  case 8:
    FUN_80074590(0x31,0,0);
    if ((param_4 & 0x7a) == 0) {
      param_1->move_mode = 1;
      param_2->move_mode = (char)(param_1->target_angle >> 4);
      if (((param_4 & 1) == 0) && (param_1->flag_5E != '\0')) {
        *param_2 = 2;
        param_2->state = 2;
        uVar5 = 8;
      }
      else {
        *param_2 = 3;
        param_2->state = 2;
        uVar5 = 5;
      }
      param_2->behavior_state = uVar5;
      param_2->action_state = 0;
      local_4e = param_1->pos_y;
      uVar8 = 1;
      puVar7 = auStack_50;
      local_4a = *(short *)(param_1 + 0x32) + 0x5a;
      local_46 = param_1->pos_z;
    }
    else {
      local_5e = param_1->pos_y;
      uVar8 = 2;
      puVar7 = auStack_60;
      local_5a = *(short *)(param_1 + 0x32) + 0x5a;
      local_56 = param_1->pos_z;
    }
    goto LAB_8001e818;
  case 9:
    FUN_80074590(0x31,0,0);
    if ((param_4 & 0x7a) == 0) {
      param_2->move_mode = (char)(param_1->target_angle >> 4);
      if ((param_4 & 1) == 0) {
        *param_2 = 2;
        param_2->state = 2;
        uVar5 = 8;
      }
      else {
        *param_2 = 3;
        param_2->state = 2;
        uVar5 = 5;
      }
      param_2->behavior_state = uVar5;
      param_2->action_state = 0;
      local_2e = param_1->pos_y;
      uVar8 = 1;
      puVar7 = auStack_30;
      local_2a = *(short *)(param_1 + 0x32) + 0x5a;
      local_26 = param_1->pos_z;
    }
    else {
      local_3e = param_1->pos_y;
      uVar8 = 2;
      puVar7 = auStack_40;
      local_3a = *(short *)(param_1 + 0x32) + 0x5a;
      local_36 = param_1->pos_z;
    }
LAB_8001e818:
    FUN_80031470(uVar8,puVar7,param_1->flag_5E,param_1 + 0x68);
    FUN_8003116c((byte)param_1->kind + 0xc,puVar7,0xffffffb0);
    return 0x84;
  case 10:
    FUN_80074590(0xd,0,0);
    uVar6 = 2;
    if ((param_4 & 0xfe) == 0) {
      param_2->move_mode = (char)(param_1->rot_y >> 4);
      if (((param_4 & 1) == 0) && (param_1->flag_5E != '\0')) {
        *param_2 = 2;
        param_2->state = 2;
        param_2->behavior_state = 2;
      }
      else {
        *param_2 = 3;
        param_2->state = 2;
        param_2->behavior_state = 0;
      }
      param_2->action_state = 0;
      uVar6 = 1;
      puVar7 = param_1 + 0x2c;
      uVar5 = 0;
    }
    else {
      puVar7 = param_1 + 0x2c;
      uVar5 = 0;
    }
    goto LAB_8001e67c;
  case 0xb:
    uVar8 = 0x100;
    FUN_80074590(0xd,0,0);
    if ((param_4 & 0x800) != 0) {
      uVar4 = param_1->rot_y;
      *param_2 = 3;
      param_2->state = 2;
      param_2->behavior_state = 10;
      param_2->action_state = 0;
      param_2->move_mode = (char)(uVar4 >> 4);
      FUN_80031470(1,param_1 + 0x2c,0,param_1 + 0x68);
      return 0x100;
    }
    param_2->move_mode = 10;
    uVar6 = 2;
    puVar7 = param_1 + 0x2c;
    uVar5 = 0;
    goto LAB_8001e67c;
  default:
    goto switchD_8001dd00_default;
  }
  uVar5 = param_1->flag_5E;
LAB_8001e67c:
  FUN_80031470(uVar6,puVar7,uVar5,param_1 + 0x68);
switchD_8001dd00_default:
  return uVar8;
}
