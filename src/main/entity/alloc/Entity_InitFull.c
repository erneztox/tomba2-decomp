/**
 * @brief Entity full initializer: sets all entity fields from data
 * @note Original: func_8001E860 at 0x8001E860
 */
// Entity_InitFull



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001e860(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_28->kind;
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  param_1->move_mode = 2;
  uVar8 = 0;
  switchparam_1->kind {
  case 0:
  case 10:
  case 0xb:
    FUN_80074590(0xe,0,0);
    uVar5 = 2;
    uVar6 = 0;
    break;
  case 1:
    uVar8 = 0x20;
    FUN_80074590(0xe,0,0);
    uVar5 = 2;
    uVar6 = param_1->flag_5E;
    break;
  case 3:
    uVar8 = 0x20;
  case 2:
    FUN_80074590(0xe,0,0);
    uVar8 = uVar8 | 0x10;
    if ((param_4 & 0x400) == 0) {
      if (((((param_4 & 0x300) != 0) && (param_1->collision_state == '\0')) && (_DAT_800e7fee != 0)) &&
         (DAT_1f800137 == '\0')) {
        if ((param_4 & 0x100) == 0) {
          sVar2 = param_3->pos_x;
          sVar3 = *(short *)(param_3 + 0x30);
          sVar4 = *(short *)(param_3 + 0x34);
          _DAT_1f800208 = (undefined1 *)(param_3 & 0x7fffffff);
          _DAT_1f800280 = param_2;
        }
        else {
          sVar2 = param_2->pos_y;
          sVar3 = *(short *)(param_2 + 0x32);
          sVar4 = param_2->pos_z;
          _DAT_1f800208 = param_2;
        }
        *(undefined2 *)(param_1 + 0x78) = param_1->target_angle;
        DAT_800e7fc6 = 4;
        DAT_1f80027b = 1;
        param_1->collision_state = 1;
        param_1->draw_x = param_1->pos_y - sVar2;
        param_1->angle_delta = *(short *)(param_1 + 0x32) - sVar3;
        *(short *)(param_1 + 100) = param_1->pos_z - sVar4;
        _DAT_1f800200 = param_1->pos_y;
        _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
        _DAT_1f800204 = param_1->pos_z;
        DAT_1f80023a = (param_4 & 0x1000) == 0;
        FUN_80074590(0xc,0,0);
      }
      uVar5 = 2;
      uVar6 = param_1->flag_5E;
    }
    else {
      uVar5 = 1;
      uVar1 = param_1->rot_y;
      *param_2 = 2;
      param_2->state = 2;
      param_2->behavior_state = 2;
      param_2->action_state = 0;
      param_2->move_mode = (char)(uVar1 >> 4);
      uVar6 = param_1->flag_5E;
    }
    break;
  case 4:
    uVar8 = 0x40;
    FUN_80074590(0x2f,0,0);
    uVar5 = 2;
    uVar6 = param_1->flag_5E;
    break;
  case 5:
    uVar8 = 0x40;
    *param_1 = 2;
    FUN_80074590(0x2c,0,0);
    FUN_80074590(0x2d,0,0);
    FUN_80074590(0x2f,0,0);
    puVar7 = param_1 + 0x2c;
    FUN_80031470(2,puVar7,param_1->flag_5E,param_1 + 0x68);
    FUN_8003116c(0x18,puVar7,0xffffffb0);
    FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),puVar7,0x400,0x15);
    uVar5 = 0xc;
    goto LAB_8001ebe0;
  case 6:
    FUN_80074590(0x2c,0,0);
    FUN_80074590(0x2f,0,0);
    FUN_80031470(2,param_1 + 0x2c,param_1->flag_5E,param_1 + 0x68);
    uVar8 = 0x40;
    if (param_1->flag_5E != '\0') {
      param_1->move_mode = 1;
      return 0x40;
    }
    *param_1 = 2;
    FUN_80074590(0x2d,0,0);
    FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x400,0x15);
    uVar5 = 0xc;
    goto LAB_8001ebe0;
  case 7:
  case 8:
  case 9:
    DAT_800e7ef9 = 2;
    local_26 = param_1->pos_y;
    uVar8 = 0x80;
    local_22 = *(short *)(param_1 + 0x32) + 0x5a;
    local_1e = param_1->pos_z;
    FUN_80031470(2,auStack_28,param_1->flag_5E,param_1 + 0x68);
    uVar5 = 0x32;
LAB_8001ebe0:
    FUN_80074590(uVar5,0,0);
  default:
    goto switchD_8001e8bc_default;
  }
  FUN_80031470(uVar5,param_1 + 0x2c,uVar6,param_1 + 0x68);
switchD_8001e8bc_default:
  return uVar8;
}
