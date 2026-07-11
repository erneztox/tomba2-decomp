/**
 * @brief Entity ground checker: calls FUN_800495dc, validates ground
 * @note Original: func_800696C4 at 0x800696C4
 */
// Entity_CheckGround



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_800696c4(int param_1,int param_2)

{
  u8 bVar1;
  uint uVar2;
  
  uVar2 = FUN_800495dc(param_1,0,0);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (param_2 == 0) {
    return 1;
  }
  bVar1 = param_1->anim_id >> 1;
  if (bVar1 == 2) {
    if ((uVar2 & 0xe) == 0) {
      return 1;
    }
    FUN_800495ac(param_1,0,0);
    if ((uVar2 & 2) == 0) {
      uVar2 = uVar2 & 0xc;
      goto joined_r0x800697c8;
    }
  }
  else {
    if (bVar1 < 3) {
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      uVar2 = FUN_8004954c(param_1,0,0);
joined_r0x800697c8:
      if (uVar2 == 0) {
        return 1;
      }
      if ((_DAT_1f8001a6 & 0x100) != 0) {
        DAT_1f80023a = 0;
        return 2;
      }
      return 1;
    }
    if (bVar1 != 3) {
      return 1;
    }
    if ((uVar2 & 2) == 0) {
      return 1;
    }
    FUN_800495ac(param_1,0,0);
  }
  if ((_DAT_1f8001a6 & 0x30) != 0) {
    if ((_DAT_1f8001a6 & 0x20) == 0) {
      DAT_1f80023a = 0;
    }
    else {
      DAT_1f80023a = 1;
      *(s16 *)(param_1 + 0x32) =
           *(s16 *)(param_1 + 0x32) + (param_1->bounds_max_y - param_1->bounds_min_y);
    }
    return 2;
  }
  return 1;
}
