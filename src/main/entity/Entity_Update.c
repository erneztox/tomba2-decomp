/**
 * @brief Entity update: full per-frame entity update (228L)
 * @note Original: func_800635D4 at 0x800635D4
 */
// Entity_Update



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800635d4(int param_1,uint param_2)

{
  s32 bVar1;
  u8 bVar2;
  u8 uVar3;
  s16 uVar4;
  u16 uVar5;
  int iVar6;
  uint uVar7;
  s8 cVar8;
  u16 uVar9;
  s16 sVar10;
  uint uVar11;
  s16 sVar12;
  s16 *psVar13;
  
  if ((param_2 & 2) == 0) {
    psVar13 = (s16 *)((uint)*(u8 *)(param_1 + 0x168) * 8 + -0x7ff5b8f0);
  }
  else {
    psVar13 = &DAT_800a4738;
  }
  uVar5 = psVar13->kind;
  bVar1 = false;
  if ((param_2 & 1) == 0) {
    if ((_g_InputState & (_DAT_1f80016c | _DAT_1f80016e)) != 0) {
      if (param_1->direction == (param_1->behavior_flags & 1)) {
        bVar2 = *(s8*)(param_1 + 0x169) + 1;
        *(u8 *)(param_1 + 0x169) = bVar2;
        if (0x40 < bVar2) {
          *(u8 *)(param_1 + 0x169) = 0x40;
        }
      }
      else {
        bVar2 = *(s8*)(param_1 + 0x169) - 1;
        *(u8 *)(param_1 + 0x169) = bVar2;
        if (((int)((uint)bVar2 << 0x18) < 0) &&
           (*(u8 *)(param_1 + 0x169) = 0, *(s8*)(param_1 + 0x168) == '\0')) {
          bVar1 = true;
        }
      }
    }
  }
  else {
    bVar2 = *(s8*)(param_1 + 0x169) - 1;
    *(u8 *)(param_1 + 0x169) = bVar2;
    if ((int)((uint)bVar2 << 0x18) < 0) {
      *(u8 *)(param_1 + 0x169) = 0;
    }
  }
  param_1->input_state = 0;
  switch(param_1->sub_action) {
  case 0:
    *(u8 *)(param_1 + 0x166) = 0;
    if (*(u8 *)(param_1 + 0x168) < 2) {
      if ((param_2 & 1) == 0) {
        param_1->rot_z = 0x200;
        uVar4 = 0x60;
      }
      else {
        param_1->rot_z = 0x300;
        uVar4 = 0x70;
      }
      param_1->anim_counter = uVar4;
      param_1->sub_action = 6;
      return;
    }
    param_1->rot_z = 0x300;
    uVar3 = 4;
LAB_80063a2c:
    param_1->anim_counter = uVar5;
    param_1->sub_action = uVar3;
    return;
  case 1:
    param_1->input_state = 1;
    uVar7 = (uint)param_1->rot_z - (uint)param_1->anim_counter;
    param_1->rot_z = (s16)uVar7;
    if ((int)(uVar7 & 0xfff) <= (int)psVar13->sub_type) {
      if (2 < *(u8 *)(param_1 + 0x168)) {
        *(u8 *)(param_1 + 0x166) = 4;
        param_1->sub_action = 4;
        return;
      }
      cVar8 = param_1->sub_action;
      param_1->anim_counter = 0;
      bVar2 = *(u8 *)(param_1 + 0x166) | 1;
LAB_800638e0:
      *(u8 *)(param_1 + 0x166) = bVar2;
      param_1->sub_action = cVar8 + '\x01';
      return;
    }
    iVar6 = (uint)param_1->anim_counter - (uint)(u16)psVar13->flags;
    param_1->anim_counter = (s16)iVar6;
    if (-1 < iVar6 * 0x10000) {
      return;
    }
    if ((*(u8 *)(param_1 + 0x168) < 2) ||
       ((param_1->rot_z & 0xfff) <= (psVar13->sub_type + 0xf0U & 0xfff))) {
      *(u8 *)(param_1 + 0x166) = *(u8 *)(param_1 + 0x166) | 1;
    }
    cVar8 = param_1->sub_action;
    param_1->anim_counter = 0;
    break;
  case 2:
    param_1->rot_z = param_1->rot_z + param_1->anim_counter;
    uVar9 = param_1->anim_counter + *psVar13;
    param_1->anim_counter = uVar9;
    if ((int)((uint)uVar5 << 0x10) < (int)((uint)uVar9 << 0x10)) {
      param_1->anim_counter = uVar5;
    }
    if (0x7ff < (param_1->rot_z & 0xfff)) {
      return;
    }
    if (bVar1) {
      bVar2 = param_1->behavior_flags;
      param_1->sub_action = 1;
LAB_80063a48:
      param_1->direction = bVar2 & 1;
      param_1->rot_z = 0x1000 - param_1->rot_z;
      return;
    }
    goto LAB_80063a94;
  case 3:
    uVar7 = (uint)param_1->rot_z + (uint)param_1->anim_counter;
    param_1->rot_z = (s16)uVar7;
    if (0x1000 - psVar13->sub_type <= (int)(uVar7 & 0xfff)) {
      cVar8 = param_1->sub_action;
      param_1->anim_counter = 0;
      bVar2 = *(u8 *)(param_1 + 0x166) | 2;
      goto LAB_800638e0;
    }
    iVar6 = (uint)param_1->anim_counter - (uint)(u16)psVar13->flags;
    param_1->anim_counter = (s16)iVar6;
    if (-1 < iVar6 * 0x10000) {
      return;
    }
    if ((*(u8 *)(param_1 + 0x168) < 2) ||
       ((0xf10U - psVar13->sub_type & 0xfff) <= (param_1->rot_z & 0xfff))) {
      *(u8 *)(param_1 + 0x166) = *(u8 *)(param_1 + 0x166) | 2;
    }
    cVar8 = param_1->sub_action;
    param_1->anim_counter = 0;
    break;
  case 4:
    param_1->rot_z = param_1->rot_z - param_1->anim_counter;
    uVar9 = param_1->anim_counter + *psVar13;
    param_1->anim_counter = uVar9;
    if ((int)((uint)uVar5 << 0x10) < (int)((uint)uVar9 << 0x10)) {
      param_1->anim_counter = uVar5;
    }
    if ((param_1->rot_z & 0xfff) < 0xd01) {
      return;
    }
    if (*(u8 *)(param_1 + 0x166) < 3) goto LAB_80063b20;
    uVar11 = (uint)*(u8 *)(param_1 + 0x168);
    uVar7 = (uint)(*(u8 *)(param_1 + 0x169) >> 4);
    *(u8 *)(param_1 + 0x166) = 0;
    if (uVar7 != uVar11) {
      if ((int)((uVar7 - uVar11) * 0x1000000) < 1) {
        *(u8 *)(param_1 + 0x168) = *(u8 *)(param_1 + 0x168) - 1;
      }
      else {
        *(s8*)(param_1 + 0x168) = (char)(uVar11 + 1);
        if (4 < (uVar11 + 1 & 0xff)) {
          *(u8 *)(param_1 + 0x168) = 4;
        }
      }
    }
    if (2 < *(u8 *)(param_1 + 0x168)) {
      param_1->sub_action = 1;
      FUN_80074590(6,0,0);
      return;
    }
    uVar3 = 1;
    if ((param_2 & 2) != 0) goto LAB_80063a2c;
    if (bVar1) {
      bVar2 = param_1->behavior_flags;
      param_1->sub_action = 3;
      goto LAB_80063a48;
    }
    psVar13 = (s16 *)(((uint)*(u8 *)(param_1 + 0x168) << 3 | 4) + 0x800a4710);
    if (param_1->anim_counter <= *psVar13) {
      param_1->anim_counter = *psVar13;
      goto LAB_80063b20;
    }
LAB_80063a94:
    cVar8 = param_1->sub_action;
    break;
  case 5:
    param_1->input_state = 1;
    sVar10 = param_1->rot_z - param_1->anim_counter;
    uVar5 = param_1->anim_counter - 0x20;
    goto LAB_80063b5c;
  case 6:
    uVar5 = param_1->rot_z - param_1->anim_counter;
    param_1->rot_z = uVar5;
    if ((uVar5 & 0xfff) < 0xd01) {
      return;
    }
    if ((param_2 & 1) != 0) {
      param_1->sub_action = 7;
      return;
    }
LAB_80063b20:
    param_1->sub_action = 1;
    return;
  case 7:
    sVar12 = 0x12;
    if ((param_2 & 2) != 0) {
      sVar12 = 0x20;
    }
    param_1->input_state = 1;
    sVar10 = param_1->rot_z - param_1->anim_counter;
    uVar5 = param_1->anim_counter - sVar12;
LAB_80063b5c:
    param_1->anim_counter = uVar5;
    param_1->rot_z = sVar10;
    if ((int)((uint)uVar5 << 0x10) < 0) {
      param_1->anim_counter = 0;
      param_1->sub_action = 2;
      *(u8 *)(param_1 + 0x166) = *(u8 *)(param_1 + 0x166) | 1;
    }
  default:
    goto switchD_80063704_default;
  }
  param_1->sub_action = cVar8 + '\x01';
switchD_80063704_default:
  return;
}
