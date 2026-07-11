/**
 * @brief Entity sprite spawner: allocs pool 3, sets sprite callback
 * @note Original: func_8007DEF8 at 0x8007DEF8
 */
// Entity_SpawnSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_8007def8(u16 param_1,u16 param_2,u8 param_3)

{
  s16 uVar1;
  int iVar2;
  u16 *puVar3;
  
  iVar2 = FUN_8007a5a8(3);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2->callback = FUN_8007da50;
  iVar2->sub_anim_id = 0;
  iVar2->sub_type = param_3;
  iVar2->draw_y = param_1 & 0xfff;
  iVar2->alloc_flags = iVar2->alloc_flags | 0x80;
  if ((param_1 & 0x6000) == 0) {
    uVar1 = 0xffff;
  }
  else {
    uVar1 = 1;
    if ((param_1 & 0x4000) != 0) {
      iVar2->anim_timer = 0;
      goto LAB_8007df7c;
    }
  }
  iVar2->anim_timer = uVar1;
LAB_8007df7c:
  if ((param_1 & 0x1000) == 0) {
    iVar2->anim_counter = 0;
  }
  else {
    iVar2->anim_counter = 1;
  }
  if ((param_2 & 0x80) == 0) {
    iVar2->sprite_flags = 0;
  }
  else {
    iVar2->sprite_flags = 0xff;
  }
  *(u16 *)(iVar2 + 0x5e) = param_2 & 0x7f;
  iVar2->collision_state = 0xff;
  iVar2->move_mode = 0xff;
  puVar3 = (u16 *)
           (_DAT_800ecf8c +
           *_DAT_800ecf8c * 2 + *(int *)(_DAT_800ecf8c + iVar2->draw_y * 2 + 8) * 2 + 8);
  *(u16 **)(iVar2 + 0x48) = puVar3;
  *(u16 **)(iVar2 + 0x4c) = puVar3 + 8;
  *(u16 **)(iVar2 + 0x50) = puVar3 + 8 + (uint)*puVar3 * 2;
  return iVar2;
}
