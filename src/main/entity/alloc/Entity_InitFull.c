/**
 * @brief Entity full initializer: sets all entity fields from data
 * @note Original: func_8001E860 at 0x8001E860
 */
// Entity_InitFull



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint Entity_InitFull(u8 *param_1,u8 *param_2,uint param_3,uint param_4)

{
  u16 uVar1;
  s16 sVar2;
  s16 sVar3;
  s16 sVar4;
  s32 uVar5;
  u8 uVar6;
  u8 *puVar7;
  uint uVar8;
  u8 auStack_28->kind;
  s16 local_26;
  s16 local_22;
  s16 local_1e;
  
  param_1->move_mode = 2;
  uVar8 = 0;
  switchparam_1->kind {
  case 0:
  case 10:
  case 0xb:
    Audio_PlaySoundEffect(0xe,0,0);
    uVar5 = 2;
    uVar6 = 0;
    break;
  case 1:
    uVar8 = 0x20;
    Audio_PlaySoundEffect(0xe,0,0);
    uVar5 = 2;
    uVar6 = param_1->flag_5E;
    break;
  case 3:
    uVar8 = 0x20;
  case 2:
    Audio_PlaySoundEffect(0xe,0,0);
    uVar8 = uVar8 | 0x10;
    if ((param_4 & 0x400) == 0) {
      if (((((param_4 & 0x300) != 0) && (param_1->collision_state == '\0')) && (_g_FrameCounter != 0)) &&
         (g_CurrentOverlay == '\0')) {
        if ((param_4 & 0x100) == 0) {
          sVar2 = param_3->pos_x;
          sVar3 = *(s16 *)(param_3 + 0x30);
          sVar4 = *(s16 *)(param_3 + 0x34);
          _DAT_1f800208 = (u8 *)(param_3 & 0x7fffffff);
          _DAT_1f800280 = param_2;
        }
        else {
          sVar2 = param_2->pos_y;
          sVar3 = *(s16 *)(param_2 + 0x32);
          sVar4 = param_2->pos_z;
          _DAT_1f800208 = param_2;
        }
        *(s16 *)(param_1 + 0x78) = param_1->target_angle;
        DAT_800e7fc6 = 4;
        DAT_1f80027b = 1;
        param_1->collision_state = 1;
        param_1->draw_x = param_1->pos_y - sVar2;
        param_1->angle_delta = *(s16 *)(param_1 + 0x32) - sVar3;
        *(s16 *)(param_1 + 100) = param_1->pos_z - sVar4;
        _DAT_1f800200 = param_1->pos_y;
        _DAT_1f800202 = *(s16 *)(param_1 + 0x32);
        _DAT_1f800204 = param_1->pos_z;
        DAT_1f80023a = (param_4 & 0x1000) == 0;
        Audio_PlaySoundEffect(0xc,0,0);
      }
      uVar5 = 2;
      uVar6 = param_1->flag_5E;
    }
    else {
      uVar5 = 1;
      uVar1 = param_1->rot_y;
      *param_2 = 2;
      param_2->state = STATE_FINISH;
      param_2->behavior_state = 2;
      param_2->action_state = 0;
      param_2->move_mode = (char)(uVar1 >> 4);
      uVar6 = param_1->flag_5E;
    }
    break;
  case 4:
    uVar8 = 0x40;
    Audio_PlaySoundEffect(0x2f,0,0);
    uVar5 = 2;
    uVar6 = param_1->flag_5E;
    break;
  case 5:
    uVar8 = 0x40;
    *param_1 = 2;
    Audio_PlaySoundEffect(0x2c,0,0);
    Audio_PlaySoundEffect(0x2d,0,0);
    Audio_PlaySoundEffect(0x2f,0,0);
    puVar7 = param_1 + 0x2c;
    Entity_SpawnSpecial(2,puVar7,param_1->flag_5E,param_1 + 0x68);
    Entity_SpawnWithPos(0x18,puVar7,0xffffffb0);
    Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),puVar7,0x400,0x15);
    uVar5 = 0xc;
    goto LAB_8001ebe0;
  case 6:
    Audio_PlaySoundEffect(0x2c,0,0);
    Audio_PlaySoundEffect(0x2f,0,0);
    Entity_SpawnSpecial(2,param_1 + 0x2c,param_1->flag_5E,param_1 + 0x68);
    uVar8 = 0x40;
    if (param_1->flag_5E != '\0') {
      param_1->move_mode = 1;
      return 0x40;
    }
    *param_1 = 2;
    Audio_PlaySoundEffect(0x2d,0,0);
    Entity_SpawnChildSequence(*(s32 *)(param_1->sprite_ptr1 + 0x40),param_1 + 0x2c,0x400,0x15);
    uVar5 = 0xc;
    goto LAB_8001ebe0;
  case 7:
  case 8:
  case 9:
    DAT_800e7ef9 = 2;
    local_26 = param_1->pos_y;
    uVar8 = 0x80;
    local_22 = *(s16 *)(param_1 + 0x32) + 0x5a;
    local_1e = param_1->pos_z;
    Entity_SpawnSpecial(2,auStack_28,param_1->flag_5E,param_1 + 0x68);
    uVar5 = 0x32;
LAB_8001ebe0:
    Audio_PlaySoundEffect(uVar5,0,0);
  default:
    goto switchD_8001e8bc_default;
  }
  Entity_SpawnSpecial(uVar5,param_1 + 0x2c,uVar6,param_1 + 0x68);
switchD_8001e8bc_default:
  return uVar8;
}
