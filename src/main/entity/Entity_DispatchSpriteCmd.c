/**
 * @brief Dispatches sprite cmd: entity[0x72] bit 0x1000 selects Entity_LoadSprite or Entity_LoadSprite2
 * @note Original: func_80043634 at 0x80043634
 */
// Entity_DispatchSpriteCmd



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_DispatchSpriteCmd(int param_1)

{
  u16 uVar1;
  int iVar2;
  
  uVar1 = param_1->event_id;
  if ((uVar1 & 0x1000) == 0) {
    iVar2 = Entity_LoadSprite2(param_1,uVar1 & 0xfff);
  }
  else {
    iVar2 = Entity_LoadSprite(param_1,uVar1 & 0xfff);
  }
  _DAT_800bf844 = iVar2;
  if (iVar2 != 0) {
    iVar2->flag_5E = *(u8 *)(param_1 + 0x74);
    iVar2->draw_x = *(s16 *)(param_1 + 0x76);
  }
  return 1;
}
