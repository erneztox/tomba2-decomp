/**
 * @brief Entity sprite drawer: renders sprite with GTE projection
 * @note Original: func_8002E1E8 at 0x8002E1E8
 */
// Entity_DrawSprite



/* WARNING: Removing unreachable block (ram,0x8002e280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8002e1e8(int param_1)

{
  s16 uVar1;
  u8 bVar2;
  uint uVar3;
  s32 local_20;
  s32 local_1c;
  s32 local_18;
  s32 local_14;
  s32 local_10;
  s32 local_c;
  
  local_20 = DAT_800102bc;
  local_1c = DAT_800102c0;
  local_18 = DAT_800102c4;
  local_14 = DAT_800102c8;
  local_10 = DAT_800102cc;
  local_c = DAT_800102d0;
  bVar2 = param_1->state;
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      param_1->state = 1;
      *(s32 *)(param_1 + 100) = 0x400;
      *(s32 *)(param_1 + 0x6c) = 0x200;
      *(s32 *)(param_1 + 0x60) = 0;
      *(s32 *)(param_1 + 0x68) = 0;
      *(s16 *)(param_1 + 0x32) = 0xff38;
      bVar2 = param_1->state;
    }
    if (bVar2 == 1) {
      *(uint *)(param_1 + 0x60) =
           *(int *)(param_1 + 0x60) + (0x200U - *(int *)(param_1 + 0x60) >> 5);
      *(uint *)(param_1 + 0x68) =
           *(int *)(param_1 + 0x68) + (0x400U - *(int *)(param_1 + 0x68) >> 5);
    }
    else {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) - (*(uint *)(param_1 + 100) >> 2);
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) + (*(uint *)(param_1 + 0x68) >> 4);
      uVar3 = *(uint *)(param_1 + 0x6c) - (*(uint *)(param_1 + 0x6c) >> 2);
      *(uint *)(param_1 + 0x6c) = uVar3;
      if (uVar3 < 9) {
        param_1->state = 3;
      }
    }
    bVar2 = param_1->sub_action + 1;
    param_1->sub_action = bVar2;
    if (5 < bVar2) {
      param_1->sub_action = 0;
    }
    *(uint *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x60) * (uint)*(u8 *)(&local_20 + param_1->sub_action) >> 4;
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) *
         (uint)*(u8 *)((int)&local_20 + (uint)param_1->sub_action * 4 + 1) >> 4;
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) *
         (uint)*(u8 *)((int)&local_20 + (uint)param_1->sub_action * 4 + 2) >> 4;
    bVar2 = *(u8 *)((int)&local_20 + (uint)param_1->sub_action * 4 + 3);
    *(s32 *)(param_1 + 0x2c) = _g_PlayerPosX;
    uVar1 = _g_PlayerPosZ;
    param_1->flags = 1;
    *(s16 *)(param_1 + 0x30) = uVar1;
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x6c) * (uint)bVar2 >> 4;
  }
  else if (bVar2 == 3) {
    FUN_8007a624(param_1);
  }
  return;
}
