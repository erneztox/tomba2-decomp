/**
 * @brief Activates entity in pool 3: checks game flags, sets entity->sub_anim_id=1, callback=FUN_8007dc38
 * @note Original: func_8007E038 at 0x8007E038
 */
// Entity_ActivatePool3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_8007e038(undefined2 param_1,short param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  if (((DAT_800bf81e == '\x02') || (param_2 != 0)) || (iVar3 = 0, DAT_800bf822 == '\0')) {
    iVar3 = FUN_8007a5a8(3);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3->sub_anim_id = 1;
      iVar3->sub_type = (char)param_2;
      iVar3->callback = FUN_8007dc38;
      iVar3->alloc_flags = iVar3->alloc_flags | 0x80;
      puVar2 = _DAT_800ecf60;
      *(ushort **)(iVar3 + 0x48) = _DAT_800ecf60;
      puVar4 = _DAT_800ecf60 + 8;
      *(ushort **)(iVar3 + 0x4c) = puVar4;
      uVar1 = *puVar2;
      iVar3->draw_y = 0xffff;
      *(undefined2 *)(iVar3 + 0x5e) = param_1;
      *(ushort **)(iVar3 + 0x50) = puVar4 + (uint)uVar1 * 2;
    }
  }
  return iVar3;
}
