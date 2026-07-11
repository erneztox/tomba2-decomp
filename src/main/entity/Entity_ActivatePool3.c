/**
 * @brief Activates entity in pool 3: checks game flags, sets entity->sub_anim_id=1, callback=FUN_8007dc38
 * @note Original: func_8007E038 at 0x8007E038
 */
// Entity_ActivatePool3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_8007e038(s16 param_1,s16 param_2)

{
  u16 uVar1;
  u16 *puVar2;
  int iVar3;
  u16 *puVar4;
  
  if (((g_ActionState == '\x02') || (param_2 != 0)) || (iVar3 = 0, g_EventInput == '\0')) {
    iVar3 = FUN_8007a5a8(3);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3->sub_anim_id = 1;
      iVar3->sub_type = (char)param_2;
      iVar3->callback = FUN_8007dc38;
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
  }
  return iVar3;
}
