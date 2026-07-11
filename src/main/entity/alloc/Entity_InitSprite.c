/**
 * @brief Inits sprite entity in pool 3: entity->sub_anim_id=2, assigns sprite data from g_SpriteData
 * @note Original: func_8007E110 at 0x8007E110
 */
// Entity_InitSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int Entity_InitSprite(s16 param_1,u8 param_2)

{
  u16 uVar1;
  u16 *puVar2;
  int iVar3;
  u16 *puVar4;
  
  iVar3 = Entity_Activate(3);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3->sub_anim_id = 2;
    iVar3->sub_type = param_2;
    iVar3->callback = Entity_ProcessSprite;
    iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
    puVar2 = _g_SpriteData;
    *(u16 **)(iVar3 + 0x48) = _g_SpriteData;
    puVar4 = _g_SpriteData + 8;
    *(u16 **)(iVar3 + 0x4c) = puVar4;
    uVar1 = *puVar2;
    iVar3->draw_y = 0xffff;
    *(s16 *)(iVar3 + 0x5e) = param_1;
    *(u16 **)(iVar3 + 0x50) = puVar4 + (uint)uVar1 * 2;
  }
  return iVar3;
}
