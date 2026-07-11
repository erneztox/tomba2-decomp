/**
 * @brief Allocates multiple sub-entity structures (hitboxes/parts) from table data
 * @note Original: func_80040410 at 0x80040410
 */
// Entity_AllocSubEntities



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80040410(int param_1,uint param_2)

{
  s32 uVar1;
  int iVar2;
  s16 *psVar3;
  int iVar4;
  s16 *puVar5;
  int iVar6;
  int iVar7;
  
  param_1->counter1 = 2;
  if (_g_EntityPoolCount < 2) {
    param_1->state = 3;
    uVar1 = 0;
  }
  else {
    iVar6 = 0;
    param_1->counter2 = 2;
    param_1->sprite_flags = 0;
    param_1->render_flags = 0;
    param_1->rot_x = 0;
    param_1->rot_y = 0;
    param_1->rot_z = 0;
    if (param_1->counter1 != '\0') {
      iVar7 = (param_2 & 0xff) << 2;
      puVar5 = &DAT_800a3b1c;
      iVar4 = param_1;
      do {
        iVar2 = FUN_8007aae8();
        iVar4->sprite_ptr1 = iVar2;
        *(s16 *)(iVar2 + 6) = (s16)iVar6 + -1;
        **(s16 **)(iVar4 + 0xc0) = *puVar5;
        *(s16 *)(iVar4->sprite_ptr1 + 2) = puVar5->flags;
        iVar6 = iVar6 + 1;
        *(s16 *)(iVar4->sprite_ptr1 + 4) = puVar5->kind;
        *(s16 *)(iVar4->sprite_ptr1 + 8) = 0;
        puVar5 = puVar5 + 3;
        *(s16 *)(iVar4->sprite_ptr1 + 10) = 0;
        psVar3 = (s16 *)(&DAT_800a3b28 + iVar7);
        *(s16 *)(iVar4->sprite_ptr1 + 0xc) = 0;
        iVar7 = iVar7 + 2;
        FUN_80051b04(iVar4->sprite_ptr1,1,(int)*psVar3);
        iVar4 = iVar4 + 4;
      } while (iVar6 < (int)(uint)param_1->counter1);
    }
    uVar1 = 1;
  }
  return uVar1;
}
