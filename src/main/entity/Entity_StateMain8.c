/**
 * @brief Entity state main variant 8: entity->sub_action switch (205L)
 * @note Original: func_80060544 at 0x80060544
 */
// Entity_StateMain8



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80060544(int param_1,int param_2)

{
  u8 bVar1;
  s16 sVar2;
  u16 uVar3;
  int iVar4;
  
  switch(param_1->sub_action) {
  case 0:
    param_1->sub_action = 6;
    _DAT_1f800238 = 0;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    param_1->sub_action = param_1->sub_action + '\x01';
    if (param_2 == 0) {
      FUN_80060268(param_1);
    }
    sVar2 = param_1->anim_counter + 8;
    param_1->anim_counter = sVar2;
    if (0x7f < sVar2) {
      param_1->anim_counter = 0x80;
    }
    iVar4 = (uint)param_1->sprite_x - (uint)param_1->anim_counter;
    param_1->sprite_x = (s16)iVar4;
    if (iVar4 * 0x10000 < 1) {
      sVar2 = FUN_8006032c(param_1,param_2);
      if (sVar2 == 0) {
LAB_800608b8:
        param_1->input_state = 4;
LAB_800608c0:
        *(u8 *)(param_1 + 0x168) = 0;
        param_1->sub_action = 5;
      }
      else {
        param_1->sub_action = 2;
      }
    }
    else if (9 < param_1->sub_action) {
      param_1->sub_action = 1;
    }
    break;
  case 1:
    param_1->input_state = 0;
    if (param_2 != 0) {
LAB_800606b0:
      sVar2 = param_1->anim_counter + 8;
      param_1->anim_counter = sVar2;
      if (0x7f < sVar2) {
        param_1->anim_counter = 0x80;
      }
      iVar4 = (uint)param_1->sprite_x - (uint)param_1->anim_counter;
      param_1->sprite_x = (s16)iVar4;
      if (0 < iVar4 * 0x10000) break;
      sVar2 = FUN_8006032c(param_1,param_2);
      goto joined_r0x800608ac;
    }
    FUN_80060268(param_1);
    iVar4 = FUN_8006042c(param_1);
    if (iVar4 == 0) goto LAB_800606b0;
    iVar4 = (int)param_1->sprite_x;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x9f < iVar4) {
      bVar1 = *(s8*)(param_1 + 0x168) - 4;
      *(u8 *)(param_1 + 0x168) = bVar1;
      if ((int)((uint)bVar1 << 0x18) < 0) {
        *(u8 *)(param_1 + 0x168) = 1;
      }
      goto LAB_800606b0;
    }
    param_1->input_state = 4;
    param_1->anim_counter = 0;
    goto LAB_800608c0;
  case 2:
    param_1->input_state = 2;
    if (param_2 == 2) {
      iVar4 = (uint)param_1->sprite_x - (uint)param_1->anim_counter;
      param_1->sprite_x = (s16)iVar4;
      if (iVar4 * 0x10000 >> 0x10 < -0x600) {
        *(u8 *)(param_1 + 0x169) = 1;
      }
      break;
    }
    if (param_2 != 0) {
LAB_800607a0:
      uVar3 = param_1->anim_counter - 8;
      param_1->anim_counter = uVar3;
      if ((int)((uint)uVar3 << 0x10) < 0) {
        param_1->anim_counter = 0;
        param_1->sub_action = param_1->sub_action + '\x01';
      }
      param_1->sprite_x = param_1->sprite_x - param_1->anim_counter;
      break;
    }
    FUN_80060268(param_1);
    iVar4 = FUN_8006042c(param_1);
    if (iVar4 == 0) goto LAB_800607a0;
    param_1->anim_counter = 0x20;
    bVar1 = *(s8*)(param_1 + 0x168) - 4;
    *(u8 *)(param_1 + 0x168) = bVar1;
    if ((int)((uint)bVar1 << 0x18) < 0) {
      *(u8 *)(param_1 + 0x168) = 1;
    }
LAB_800608cc:
    param_1->sub_action = param_1->sub_action + '\x01';
    break;
  case 3:
    param_1->input_state = 3;
    if (param_2 == 0) {
      FUN_80060268(param_1);
      iVar4 = FUN_8006042c(param_1);
      if (iVar4 != 0) {
        iVar4 = (int)param_1->sprite_x;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < 0xa0) {
          param_1->input_state = 4;
          param_1->anim_counter = 0;
          goto LAB_800608c0;
        }
        bVar1 = *(s8*)(param_1 + 0x168) - 4;
        *(u8 *)(param_1 + 0x168) = bVar1;
        if ((int)((uint)bVar1 << 0x18) < 0) {
          *(u8 *)(param_1 + 0x168) = 1;
        }
      }
    }
    sVar2 = param_1->anim_counter + 8;
    param_1->anim_counter = sVar2;
    if (0x7f < sVar2) {
      param_1->anim_counter = 0x80;
    }
    uVar3 = param_1->sprite_x + param_1->anim_counter;
    param_1->sprite_x = uVar3;
    if ((int)((uint)uVar3 << 0x10) < 0) break;
    sVar2 = FUN_8006032c(param_1,param_2);
joined_r0x800608ac:
    if (sVar2 != 0) goto LAB_800608cc;
    goto LAB_800608b8;
  case 4:
    param_1->input_state = 1;
    if (param_2 == 0) {
      FUN_80060268(param_1);
      iVar4 = FUN_8006042c(param_1);
      if (iVar4 != 0) {
        param_1->anim_counter = 0x20;
        bVar1 = *(s8*)(param_1 + 0x168) - 4;
        *(u8 *)(param_1 + 0x168) = bVar1;
        if ((int)((uint)bVar1 << 0x18) < 0) {
          *(u8 *)(param_1 + 0x168) = 1;
        }
        param_1->sub_action = 1;
        break;
      }
    }
    uVar3 = param_1->anim_counter - 8;
    param_1->anim_counter = uVar3;
    if ((int)((uint)uVar3 << 0x10) < 0) {
      param_1->anim_counter = 0;
      param_1->sub_action = 1;
      if ((param_2 != 0) && (0x300 < param_1->sprite_x)) {
        *(u8 *)(param_1 + 0x169) = *(u8 *)(param_1 + 0x169) | 1;
      }
    }
    param_1->sprite_x = param_1->sprite_x + param_1->anim_counter;
    break;
  case 5:
    param_1->sprite_x = 0;
    param_1->input_state = 4;
    if (param_2 == 0) {
      iVar4 = FUN_80060268(param_1);
      if (iVar4 == 1) {
        *(u8 *)(param_1 + 0x168) = 3;
        if (g_State237 == param_1->direction) {
          param_1->sub_action = 2;
        }
        else {
          param_1->sub_action = 4;
        }
      }
      else {
        *(u8 *)(param_1 + 0x169) = 0;
      }
    }
    else if (param_2 == 2) {
      *(u8 *)(param_1 + 0x169) = 0;
      *(u8 *)(param_1 + 0x168) = 0xf;
      param_1->sub_action = 2;
    }
    _DAT_1f800238 = 0;
    param_1->anim_counter = (u16)(u8)(&DAT_800a46f0)[*(u8 *)(param_1 + 0x168)];
  }
  if (g_State237 == param_1->direction) {
    param_1->rot_z = param_1->sprite_x;
  }
  else {
    param_1->rot_z = -param_1->sprite_x;
  }
  FUN_80063b94(param_1,1);
  return;
}
