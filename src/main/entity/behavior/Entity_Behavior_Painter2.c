/**
 * @brief Entity painter behavior variant 2: checks g_SubState flag
 * @note Original: func_800248D0 at 0x800248D0
 */
// Entity_Behavior_Painter2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
uint FUN_800248d0(int param_1)

{
  u8 bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  u8 *pbVar5;
  uint *puVar6;
  s32 *puVar7;
  
  uVar4 = 0;
  if (g_SubState == '\0') {
    bVar1 = *(u8 *)(param_1 + 0x17e);
    puVar7 = _DAT_1f800140;
    g_State182 = DAT_1f800146;
    while (g_State182 != '\0') {
      pbVar5 = (u8 *)*puVar7;
      g_State182 = g_State182 + -1;
      puVar7 = puVar7 + 1;
      if (((pbVar5->kind < 0x65) &&
          (((int)(uint)(u8)(&DAT_80017324)[pbVar5->kind >> 3] >> (pbVar5->kind & 7) & 1U) != 0)) &&
         ((*pbVar5 & 1) != 0)) {
        FUN_8002f514((bVar1 & 0xf) - 3,pbVar5);
        uVar4 = 1;
      }
    }
  }
  else {
    bVar1 = *(u8 *)(param_1 + 0x17e);
    puVar7 = _DAT_1f80014c;
    g_State182 = DAT_1f800152;
    while (g_State182 != '\0') {
      puVar6 = (uint *)*puVar7;
      puVar7 = puVar7 + 1;
      g_State182 = g_State182 + -1;
      if ((*puVar6 & 0xff00ff) == 0x670001) {
        iVar2 = (int)(((uint)param_1->pos_y - (uint)*(u16 *)((int)puVar6 + 0x2e)) *
                     0x10000) >> 0x10;
        iVar3 = (int)(((uint)param_1->pos_z - (uint)*(u16 *)((int)puVar6 + 0x36)) *
                     0x10000) >> 0x10;
        uVar4 = FUN_80084080(iVar2 * iVar2 + iVar3 * iVar3);
        if (param_1->bounds_min_x + 700 < (int)(uVar4 & 0xffff)) {
          return uVar4 & 0xffff;
        }
        uVar4 = (uint)(param_1->bounds_max_y + 0x208 <
                      (int)((uint)param_1->bounds_min_y +
                            ((uint)*(u16 *)(param_1 + 0x32) -
                            (uint)*(u16 *)((int)puVar6 + 0x32)) + 0x1a4 & 0xffff));
        if (uVar4 != 0) {
          return uVar4;
        }
        FUN_8002f514((bVar1 & 0xf) - 3,puVar6);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}
