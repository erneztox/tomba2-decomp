/**
 * @brief Entity pool allocator: checks pool count, allocs entity struct
 * @note Original: func_800519E0 at 0x800519E0
 */
// Entity_AllocFromPool



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
undefined4 FUN_800519e0(int param_1,uint param_2,int *param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  if ((int)_DAT_800ed098 < (int)param_2) {
    uVar3 = 1;
    param_1->counter2 = 0;
    param_1->state = 3;
  }
  else {
    iVar5 = 0;
    param_1->counter2 = (char)param_2;
    param_1->scale_z = 0x1000;
    param_1->scale_y = 0x1000;
    param_1->scale_x = 0x1000;
    param_1->counter1 = (char)param_2;
    param_1->sprite_flags = 0;
    iVar6 = param_1;
    piVar2 = param_3;
    if ((param_2 & 0xff) != 0) {
      do {
        iVar5 = iVar5 + 1;
        puVar4 = (undefined2 *)FUN_8007aae8();
        *(undefined2 **)(iVar6 + 0xc0) = puVar4;
        puVar4->sub_type = *param_4;
        *puVar4 = param_4->flags;
        puVar4->flags = param_4->kind;
        uVar1 = param_4->sub_type;
        puVar4[0x1c] = 0x1000;
        puVar4[0x1d] = 0x1000;
        puVar4[0x1e] = 0x1000;
        puVar4->kind = uVar1;
        param_4 = param_4 + 4;
        puVar4->prev = (int)param_3 + piVar2->flags;
        iVar6 = iVar6 + 4;
        piVar2 = piVar2 + 1;
      } while (iVar5 < (int)(uint)param_1->counter2);
    }
    uVar3 = 0;
  }
  return uVar3;
}
