/**
 * @brief GPU draw main: full draw command processor
 * @note Original: func_8008179C at 0x8008179C
 */
// GPU_DrawMain



#include "tomba.h"
u16 * FUN_8008179c(u16 *param_1)

{
  u16 uVar1;
  s32 bVar2;
  s8 cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = 0x8000000;
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_PutDispEnv__08x_____8001bfc8,param_1);
  }
  (*PTR_PTR_800a5998->parent)((param_1->flags & 0x3ff) << 10 | *param_1 & 0x3ff | 0x5000000);
  if ((((DAT_800a5a1c != *(int *)(param_1 + 8)) || (DAT_800a5a0c != *param_1)) ||
      (DAT_800a5a0e != param_1->flags)) ||
     ((DAT_800a5a10 != param_1->kind || (DAT_800a5a12 != param_1->sub_type)))) {
    cVar3 = FUN_80086604();
    param_1->counter2 = cVar3;
    if (cVar3 == '\x01') {
      uVar10 = 0x8000008;
    }
    if (*(s8*)((int)param_1 + 0x11) != '\0') {
      uVar10 = uVar10 | 0x10;
    }
    if ((char)param_1->counter1 != '\0') {
      uVar10 = uVar10 | 0x20;
    }
    if (DAT_800a59a3 != '\0') {
      uVar10 = uVar10 | 0x80;
    }
    uVar1 = param_1->kind;
    if (0x118 < (s16)uVar1) {
      if ((s16)uVar1 < 0x161) {
        uVar10 = uVar10 | 1;
      }
      else if ((s16)uVar1 < 0x191) {
        uVar10 = uVar10 | 0x40;
      }
      else if ((s16)uVar1 < 0x231) {
        uVar10 = uVar10 | 2;
      }
      else {
        uVar10 = uVar10 | 3;
      }
    }
    bVar2 = (s16)param_1->sub_type < 0x121;
    if ((char)param_1->counter2 == '\0') {
      bVar2 = (s16)param_1->sub_type < 0x101;
    }
    if (!bVar2) {
      uVar10 = uVar10 | 0x24;
    }
    (*PTR_PTR_800a5998->parent)(uVar10);
    param_1->counter2 = 8;
  }
  if (((DAT_800a5a14 == param_1->state) && (DAT_800a5a16 == param_1->behavior_state)) &&
     ((DAT_800a5a18 == param_1->action_state && ((DAT_800a5a1a == param_1->sub_action && ((char)param_1->counter2 != '\b'))))))
  goto LAB_80081c64;
  cVar3 = FUN_80086604();
  param_1->counter2 = cVar3;
  uVar10 = (int)(s16)param_1->behavior_state + 0x13;
  if (cVar3 == '\0') {
    uVar10 = (int)(s16)param_1->behavior_state + 0x10;
  }
  uVar11 = uVar10 + (int)(s16)param_1->sub_action;
  if ((s16)param_1->sub_action == 0) {
    uVar11 = uVar10 + 0xf0;
  }
  uVar1 = param_1->kind;
  iVar9 = 0;
  if ((((0x118 < (s16)uVar1) && (iVar9 = 1, 0x160 < (s16)uVar1)) &&
      (iVar9 = 2, 400 < (s16)uVar1)) && (iVar9 = 4, (s16)uVar1 < 0x231)) {
    iVar9 = 3;
  }
  iVar4 = ((uint)(u8)param_1->counter2 * 5 + iVar9) * 4;
  iVar5 = (uint)*(u16 *)(&DAT_800a5a76 + iVar4) - (uint)*(u16 *)(&DAT_800a5a74 + iVar4);
  uVar7 = (uint)*(u16 *)(&DAT_800a5a74 + iVar4) +
          (int)(s16)param_1->state * (uint)(u8)(&DAT_800a5a9c)[iVar9];
  if ((s16)param_1->action_state != 0) {
    iVar5 = iVar5 * (s16)param_1->action_state >> 8;
  }
  uVar6 = uVar7 + iVar5;
  if ((char)param_1->counter2 == '\0') {
    uVar8 = 500;
    if ((499 < (int)uVar7) && (uVar8 = 0xcb2, (int)uVar7 < 0xcb3)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(u8)(&DAT_800a5a9c)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcda, (int)uVar6 < 0xcdb)) {
      uVar7 = uVar6;
    }
    if ((int)uVar10 < 0x10) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x101;
      if ((int)uVar10 < 0x102) {
        uVar6 = uVar10;
      }
    }
    uVar10 = uVar6 + 2;
    bVar2 = (int)uVar11 < 0x103;
    if ((int)uVar10 <= (int)uVar11) {
      uVar10 = 0x102;
      goto LAB_80081bfc;
    }
  }
  else {
    uVar8 = 0x21c;
    if ((0x21b < (int)uVar7) && (uVar8 = 0xc94, (int)uVar7 < 0xc95)) {
      uVar8 = uVar7;
    }
    uVar7 = uVar8 + (uint)(u8)(&DAT_800a5a9c)[iVar9] * 4;
    if (((int)uVar7 <= (int)uVar6) && (uVar7 = 0xcbc, (int)uVar6 < 0xcbd)) {
      uVar7 = uVar6;
    }
    if ((int)uVar10 < 0x13) {
      uVar6 = 0x13;
    }
    else {
      uVar6 = 0x12f;
      if ((int)uVar10 < 0x130) {
        uVar6 = uVar10;
      }
    }
    bVar2 = (int)uVar11 < 0x132;
    uVar10 = uVar6 + 2;
    if ((int)(uVar6 + 2) <= (int)uVar11) {
      uVar10 = 0x131;
LAB_80081bfc:
      if (bVar2) {
        uVar10 = uVar11;
      }
    }
  }
  (*PTR_PTR_800a5998->parent)((uVar7 & 0xfff) << 0xc | uVar8 & 0xfff | 0x6000000);
  (*PTR_PTR_800a5998->parent)((uVar10 & 0x3ff) << 10 | uVar6 & 0x3ff | 0x7000000);
LAB_80081c64:
  FUN_8009a3e0(&DAT_800a5a0c,param_1,0x14);
  return param_1;
}
