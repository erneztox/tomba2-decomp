/**
 * @brief Entity anim load variant 3: looks up table at 0x800A42F8
 * @note Original: func_80054790 at 0x80054790
 */
// Entity_AnimLoad3



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80054790(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)(byte)(&DAT_800a42f8)[param_2];
  if (uVar3 != param_1->sub_anim_id) {
    *(undefined *)(param_1 + 0x47) = (&DAT_800a42f8)[param_2];
    iVar1 = _DAT_800ed014;
    iVar4 = _DAT_800ed014 + 4;
    if ((_DAT_800e7ffe & 0x40) == 0) {
      iVar2 = uVar3 * 3;
      *(int *)(param_1->sprite_ptr2 + 0x40) =
           _DAT_800ed014 + *(int *)((uint)(byte)(&DAT_800a44ac)[iVar2] * 4 + iVar4);
      *(int *)(param_1->target_ptr + 0x40) =
           iVar1 + *(int *)((uint)(byte)(&DAT_800a44ad)[iVar2] * 4 + iVar4);
      iVar4 = *(int *)((uint)(byte)(&DAT_800a44ae)[iVar2] * 4 + iVar4);
      iVar2 = param_1->data_ptr;
    }
    else {
      if (uVar3 == 10) {
        *(int *)(param_1->sprite_ptr2 + 0x40) = _DAT_800ed014 + *(int *)(_DAT_800ed014 + 8);
        *(undefined4 *)(param_1->data_ptr + 0x40) = 0;
        *(undefined4 *)(param_1->target_ptr + 0x40) = 0;
        *(int *)(param_1->anim_ptr + 0x40) = iVar1 + *(int *)(iVar1 + 0x50);
        iVar4 = *(int *)(iVar1 + 0x54);
      }
      else {
        *(int *)(param_1->sprite_ptr2 + 0x40) =
             _DAT_800ed014 + *(int *)((uint)(byte)(&DAT_800a44ac)[uVar3 * 3] * 4 + iVar4);
        *(int *)(param_1->target_ptr + 0x40) = iVar1 + iVar1->script_ptr;
        *(int *)(param_1->data_ptr + 0x40) = iVar1 + iVar1->prev;
        *(int *)(param_1->anim_ptr + 0x40) = iVar1 + iVar1->parent;
        iVar4 = iVar1->callback;
      }
      iVar2 = *(int *)(param_1 + 0xd8);
    }
    *(int *)(iVar2 + 0x40) = iVar1 + iVar4;
  }
  return;
}
