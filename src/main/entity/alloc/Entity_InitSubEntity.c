/**
 * @brief Initializes sub-entity: allocates if slots available, sets default values
 * @note Original: func_80051B70 at 0x80051B70
 */
// Entity_InitSubEntity



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 Entity_InitSubEntity(int param_1,int param_2,int param_3)

{
  s32 bVar1;
  int iVar2;
  
  bVar1 = _g_EntityPoolCount < 1;
  if (bVar1) {
    param_1->state = STATE_DEAD;
  }
  else {
    param_1->counter1 = 1;
    param_1->counter2 = 1;
    param_1->sprite_flags = 0;
    param_1->scale_z = 0x1000;
    param_1->scale_y = 0x1000;
    param_1->scale_x = 0x1000;
    iVar2 = Entity_AllocFromFreeList();
    param_1->sprite_ptr1 = iVar2;
    *(s16 *)(iVar2 + 6) = 0xffff;
    **(s16 **)(param_1 + 0xc0) = 0;
    *(s16 *)(param_1->sprite_ptr1 + 2) = 0;
    *(s16 *)(param_1->sprite_ptr1 + 4) = 0;
    *(s16 *)(param_1->sprite_ptr1 + 8) = 0;
    *(s16 *)(param_1->sprite_ptr1 + 10) = 0;
    *(s16 *)(param_1->sprite_ptr1 + 0xc) = 0;
    *(s16 *)(param_1->sprite_ptr1 + 0x38) = 0x1000;
    *(s16 *)(param_1->sprite_ptr1 + 0x3a) = 0x1000;
    *(s16 *)(param_1->sprite_ptr1 + 0x3c) = 0x1000;
    *(int *)(param_1->sprite_ptr1 + 0x40) =
         *(int *)(&g_OT_Data + param_2 * 4) +
         *(int *)(*(int *)(&g_OT_Data + param_2 * 4) + param_3 * 4 + 4);
  }
  return bVar1;
}
