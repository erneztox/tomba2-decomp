/**
 * @brief Spawns drop item: child entity 0x0D with timed lifecycle, timer 0x7C7E, SFX 8, manages global ptr
 * @note Original: func_80072114 at 0x80072114
 */
// Entity_SpawnDropItem



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80072114(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_80072ddc(param_1,0x80,3,0xd);
  if (iVar1 != 0) {
    iVar1->callback = FUN_80072520;
    iVar1->sub_type = 2;
    iVar1->anim_timer = param_2;
    iVar1->draw_y = 0x7c7e;
    FUN_80074590(8,5,0);
    if (_DAT_800bf83c != 0) {
      _DAT_800bf83c->state = 3;
    }
    _DAT_800bf83c = iVar1;
    if (_DAT_800e7fee < (short)(ushort)DAT_800bf87d) {
      iVar1->sub_action = 1;
    }
    else {
      iVar1->sub_action = 0;
    }
  }
  return;
}
