/**
 * @brief GPU sprite main: full sprite rendering pipeline
 * @note Original: func_8007D594 at 0x8007D594
 */
// GPU_SpriteMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8007d594(int param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_10 = DAT_800170f4;
  local_c = DAT_800170f8;
  local_b = DAT_800170f9;
  switch(param_1->behavior_state) {
  case 0:
    switch(param_1->sub_type) {
    case 0:
    case 3:
    case 4:
    case 5:
      param_1->state = 2;
      return;
    case 1:
    case 2:
      param_1->state = 3;
      return;
    default:
      return;
    }
  case 1:
    if (param_1->sub_type < 2) {
      if (((_DAT_800e7e68 & _DAT_1f800174) == 0) || ((param_1->anim_id & 1) != 0))
      goto LAB_8007d6a8;
      uVar6 = 0;
LAB_8007d6c8:
      FUN_8007c0d0(param_1,uVar6);
    }
    else if (param_1->sub_type < 6) {
LAB_8007d6a8:
      uVar2 = param_1->timer1 - 1;
      param_1->timer1 = uVar2;
      if ((int)((uint)uVar2 << 0x10) < 1) {
        uVar6 = 1;
        goto LAB_8007d6c8;
      }
    }
    goto LAB_8007d79c;
  case 2:
    FUN_8007c940(param_1);
    if (((_DAT_800e7e68 & _DAT_1f800174) == 0) || ((param_1->anim_id & 1) != 0))
    goto LAB_8007d73c;
    if (param_1->sprite_flags != -1) {
      FUN_8001cf78();
    }
  case 10:
switchD_8007d5f4_caseD_a:
    FUN_8007d14c(param_1);
    break;
  case 3:
    FUN_8007c940(param_1);
LAB_8007d73c:
    sVar3 = param_1->timer2;
    if ((sVar3 != -1) && (param_1->timer2 = sVar3 + 1U, 8 < (ushort)(sVar3 + 1U))) {
      param_1->timer2 = sVar3 + 1U & 0xf;
      FUN_8007cdd4(param_1 + 0x54);
    }
    break;
  case 4:
    sVar3 = param_1->timer2 + -1;
    param_1->timer2 = sVar3;
    if (sVar3 == 0) {
      param_1->timer2 = 0xffff;
      param_1->behavior_state = 3;
    }
LAB_8007d79c:
    FUN_8007c940(param_1);
    break;
  case 5:
    FUN_8007c940(param_1);
    if (param_1->timer2 != 0) {
      param_1->timer2 = param_1->timer2 + -1;
      if (((param_1->sprite_flags == -1) || ((DAT_800be0e4 & 0x80) != 0)) ||
         ((DAT_800be0e4 & 2) == 0)) break;
      param_1->timer2 = 300;
      cVar1 = param_1->behavior_state + '\x01';
      goto LAB_8007da18;
    }
    goto switchD_8007d5f4_caseD_a;
  case 6:
    sVar3 = param_1->timer2 + -1;
    param_1->timer2 = sVar3;
    if ((sVar3 != 0) && ((DAT_800be0e4 & 2) != 0)) break;
    param_1->timer2 = 0xf;
    cVar1 = param_1->behavior_state + '\x01';
    goto LAB_8007da18;
  case 7:
    sVar3 = param_1->timer2 + -1;
    param_1->timer2 = sVar3;
    if (sVar3 != 0) break;
    goto switchD_8007d5f4_caseD_a;
  case 0x5a:
    iVar5 = (int)param_1->bounds_size;
    _DAT_1f80017e = 0;
    if (iVar5 < 0x80) {
      iVar5 = iVar5 - param_1->rot_y;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      sVar3 = (short)(iVar5 >> 2);
      if (iVar5 >> 2 < 4) {
        sVar3 = 2;
      }
      sVar3 = param_1->rot_y + sVar3;
      param_1->rot_y = sVar3;
      if (sVar3 < param_1->bounds_size) break;
      param_1->rot_y = param_1->bounds_size;
      cVar1 = param_1->behavior_state + '\x01';
    }
    else {
      iVar5 = param_1->rot_y - iVar5;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 3;
      }
      iVar4 = -(iVar5 >> 2);
      if (iVar5 >> 2 < 4) {
        iVar4 = -2;
      }
      iVar4 = (uint)param_1->rot_y + iVar4;
      param_1->rot_y = (short)iVar4;
      if ((int)param_1->bounds_size < iVar4 * 0x10000 >> 0x10) break;
      param_1->rot_y = param_1->bounds_size;
      cVar1 = param_1->behavior_state + '\x01';
    }
    goto LAB_8007da18;
  case 0x5b:
    _DAT_1f80017e = 0;
    param_1->rot_z = param_1->rot_z + param_1->draw_x;
    param_1->draw_x = param_1->draw_x + 4;
    if (param_1->bounds_min_y <= param_1->rot_z) {
      param_1->rot_z = param_1->bounds_min_y;
      param_1->timer1 = 5;
      param_1->script_ptr = param_1->script_ptr + 1;
      param_1->behavior_state = param_1->behavior_state + '\x01';
    }
    iVar5 = (uint)param_1->rot_z << 0x10;
    param_1->rot_x = 0xa0 - (short)((iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1);
    break;
  case 0x5c:
    _DAT_1f80017e = 0;
    uVar2 = param_1->timer1 - 1;
    param_1->timer1 = uVar2;
    if (0 < (int)((uint)uVar2 << 0x10)) break;
    param_1->timer1 = 3;
    cVar1 = '\x01';
LAB_8007da18:
    param_1->behavior_state = cVar1;
  }
  FUN_8007cc00(param_1);
  FUN_8005019c(param_1 + 0x54,*(undefined1 *)((int)&local_10 + (uint)*(byte *)(param_1 + 0x18)),1,2)
  ;
  return;
}
