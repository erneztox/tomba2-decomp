/**
 * @brief Initializes sub-entity: allocates if slots available, sets default values
 * @note Original: func_80051B70 at 0x80051B70
 */
// Entity_InitSubEntity



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
bool FUN_80051b70(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = _DAT_800ed098 < 1;
  if (bVar1) {
    param_1->state = 3;
  }
  else {
    param_1->counter1 = 1;
    param_1->counter2 = 1;
    param_1->sprite_flags = 0;
    param_1->scale_z = 0x1000;
    param_1->scale_y = 0x1000;
    param_1->scale_x = 0x1000;
    iVar2 = FUN_8007aae8();
    param_1->sprite_ptr1 = iVar2;
    *(undefined2 *)(iVar2 + 6) = 0xffff;
    **(undefined2 **)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1->sprite_ptr1 + 2) = 0;
    *(undefined2 *)(param_1->sprite_ptr1 + 4) = 0;
    *(undefined2 *)(param_1->sprite_ptr1 + 8) = 0;
    *(undefined2 *)(param_1->sprite_ptr1 + 10) = 0;
    *(undefined2 *)(param_1->sprite_ptr1 + 0xc) = 0;
    *(undefined2 *)(param_1->sprite_ptr1 + 0x38) = 0x1000;
    *(undefined2 *)(param_1->sprite_ptr1 + 0x3a) = 0x1000;
    *(undefined2 *)(param_1->sprite_ptr1 + 0x3c) = 0x1000;
    *(int *)(param_1->sprite_ptr1 + 0x40) =
         *(int *)(&DAT_800ecf58 + param_2 * 4) +
         *(int *)(*(int *)(&DAT_800ecf58 + param_2 * 4) + param_3 * 4 + 4);
  }
  return bVar1;
}
