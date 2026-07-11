/**
 * @brief Entity spawn main: full spawn pipeline with callbacks
 * @note Original: func_800741DC at 0x800741DC
 */
// Entity_SpawnMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800741dc(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_20->kind;
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf873 != '\0') {
      param_1->state = 3;
      return;
    }
    iVar3 = FUN_80051b70(param_1,1,0x18);
    if (iVar3 != 0) {
      return;
    }
    param_1->bounds_min_x = 0x140;
    param_1->bounds_size = 0x280;
    param_1->bounds_min_y = 0x15e;
    param_1->bounds_max_y = 0x15e;
    *param_1 = 1;
    param_1->move_mode = 0;
    param_1->rot_x = 0;
    param_1->state = param_1->state + '\x01';
    uVar2 = *(undefined2 *)(&DAT_800a4cec + (uint)(byte)param_1->sub_type * 2);
    param_1->rot_z = 0;
    param_1->rot_y = uVar2;
    FUN_800517f8();
    return;
  }
  FUN_8007778c(param_1);
  bVar1 = param_1->behavior_state;
  if (bVar1 == 2) {
    if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
      param_1->behavior_state = 3;
    }
    goto LAB_80074568;
  }
  if (bVar1 < 3) {
    if (bVar1 == 0) {
LAB_80074328:
      if (param_1->move_mode == '\x03') {
        iVar3 = FUN_8007e110((int)u____01_800a4cf8[(byte)param_1->sub_type],0);
        param_1->script_ptr = iVar3;
        if (iVar3 != 0) {
          if (DAT_800bf8ed == '\0') {
            param_1->behavior_state = param_1->behavior_state + '\x01';
            FUN_80040b48(0x39);
          }
          else {
            param_1->behavior_state = param_1->behavior_state + '\x02';
          }
        }
        DAT_800bf809 = 1;
      }
      goto LAB_80074568;
    }
    if (bVar1 != 1) {
      param_1->move_mode = 0;
      return;
    }
    iVar3 = FUN_80042728();
  }
  else {
    if (bVar1 == 4) {
      if (1 < *(byte *)(param_1->script_ptr + 4)) {
        local_1e = param_1->pos_y;
        *param_1 = 2;
        param_1->state = 3;
        local_1a = *(short *)(param_1 + 0x32) -
                   (short)(((int)((uint)param_1->bounds_min_y << 0x10) >> 0x10) -
                           ((int)((uint)param_1->bounds_min_y << 0x10) >> 0x1f) >> 1);
        local_16 = param_1->pos_z;
        FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),auStack_20,0x800,0x18);
        FUN_80074590(0xc,0,0);
        FUN_80027144(*(undefined4 *)(param_1->sprite_ptr1 + 0x40),auStack_20,0x800,8);
        FUN_80074590(0xc,0,0);
        FUN_80040c00(0x39);
        uVar5 = (uint)DAT_800bfa23;
        uVar4 = 1 << ((byte)param_1->sub_type & 0x1f);
        DAT_800bfa23 = DAT_800bfa23 | (byte)uVar4;
        if (DAT_800bf8ee == '\0') {
          FUN_80040b48(0x3a);
          param_1->move_mode = 0;
          return;
        }
        if ((uVar5 | uVar4 & 0xff) == 0x1f) {
          FUN_80040c00(0x3a);
        }
      }
      goto LAB_80074568;
    }
    if (3 < bVar1) {
      if (bVar1 != 99) goto LAB_80074568;
      DAT_800bf809 = 0;
      *param_1 = 1;
      param_1->behavior_state = 0;
      goto LAB_80074328;
    }
    if (*(byte *)(param_1->script_ptr + 4) < 2) {
      *(undefined1 *)(param_1->script_ptr + 4) = 2;
      param_1->script_ptr = 0;
    }
    if (_DAT_800bf874 < *(uint *)(&DAT_800a4d04 + (uint)(byte)param_1->sub_type * 4)) {
      *param_1 = 2;
      param_1->behavior_state = 99;
      goto LAB_80074568;
    }
    iVar3 = FUN_8007413c(param_1);
    param_1->script_ptr = iVar3;
  }
  if (iVar3 != 0) {
    param_1->behavior_state = param_1->behavior_state + '\x01';
  }
LAB_80074568:
  param_1->move_mode = 0;
  return;
}
