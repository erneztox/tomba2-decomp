/**
 * @brief Entity route calculator: computes path toward target
 * @note Original: func_80021394 at 0x80021394
 */
// Entity_CalcRoute



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80021394(int param_1,uint *param_2,s32 param_3)

{
  s32 bVar1;
  u8 bVar2;
  u16 uVar3;
  uint uVar4;
  uint uVar5;
  s16 sVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)(((uint)param_1->pos_y - (uint)*(u16 *)((int)param_2 + 0x2e)) *
               0x10000) >> 0x10;
  iVar7 = (int)(((uint)param_1->pos_z - (uint)*(u16 *)((int)param_2 + 0x36)) *
               0x10000) >> 0x10;
  uVar3 = FUN_80084080(iVar8 * iVar8 + iVar7 * iVar7);
  bVar1 = false;
  if (((int)(uint)uVar3 <= (int)param_1->bounds_min_x + (int)(s16)param_2[0x20]) &&
     (bVar1 = false,
     (int)(((uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)((int)param_2 + 0x32)) +
           (uint)param_1->bounds_min_y + (uint)(u16)param_2[0x21] & 0xffff) <=
     (int)param_1->bounds_max_y + (int)*(s16 *)((int)param_2 + 0x86))) {
    _g_GTE_Work8C = (int)(s16)uVar3;
    _g_AngleTarget = FUN_80085690(-iVar7,iVar8);
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  if ((*param_2 & 0xff00ff) == 0x80003) {
    *(u8 *)((int)param_2 + 0x29) = 1;
    param_3 = 0;
    goto LAB_80021664;
  }
  if (param_1->input_flags != '\x10') goto LAB_80021664;
  bVar2 = param_1->anim_id >> 1;
  if (bVar2 == 2) {
    iVar7 = (uint)*(u16 *)(param_1 + 0x32) - (uint)*(u16 *)((int)param_2 + 0x32);
    sVar6 = (s16)iVar7;
    if (iVar7 * 0x10000 < 0) {
      uVar5 = (uint)(u16)param_2[0x21];
      uVar4 = (uint)param_1->bounds_min_y;
      sVar6 = -sVar6;
    }
    else {
      uVar5 = (uint)*(u16 *)((int)param_2 + 0x86) - (uint)(u16)param_2[0x21];
      uVar4 = (uint)param_1->bounds_max_y - (uint)param_1->bounds_min_y;
    }
    if (((int)param_1->bounds_min_x + (int)(s16)param_2[0x20]) - _g_GTE_Work8C <
        ((int)((uVar5 + uVar4) * 0x10000) >> 0x10) - (int)sVar6) goto LAB_800215a4;
  }
  else {
    if (bVar2 < 3) {
LAB_800215a4:
      iVar7 = FUN_80083f50(param_1->target_angle + 0x800);
      sVar6 = param_1->bounds_min_x;
      uVar4 = param_2[0x20];
      iVar8 = FUN_80083e80(param_1->target_angle + 0x800);
      uVar5 = param_2[0x20];
      param_1->pos_y =
           *(s16 *)((int)param_2 + 0x2e) +
           (s16)(iVar7 * ((int)sVar6 + (int)(s16)uVar4) >> 0xc);
      param_1->pos_z =
           *(s16 *)((int)param_2 + 0x36) -
           (s16)(iVar8 * ((int)param_1->bounds_min_x + (int)(s16)uVar5) >> 0xc);
      goto LAB_80021664;
    }
    if (bVar2 != 3) goto LAB_80021664;
  }
  param_1->pos_y = *(s16 *)((int)param_2 + 0x2e);
  param_1->pos_z = *(s16 *)((int)param_2 + 0x36);
  *(s16 *)(param_1 + 0x32) =
       param_1->bounds_min_y +
       *(s16 *)((int)param_2 + 0x32) + (*(s16 *)((int)param_2 + 0x86) - (s16)param_2[0x21]);
LAB_80021664:
  uVar4 = FUN_8001e860(param_1,param_2,0,param_3);
  *(u8 *)((int)param_2 + 0x2b) = 1;
  if ((uVar4 & 0x80) == 0) {
    g_State182 = 0;
  }
  return 1;
}
