/**
 * @brief Entity draw lifecycle: entity->state=1 state, processes sprite, dealloc at state 4
 * @note Original: func_800330AC at 0x800330AC
 */
// Entity_DrawLifecycle



#include "tomba.h"
void FUN_800330ac(int param_1)

{
  byte bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624();
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(undefined **)(param_1 + 0x40) = &DAT_800a1eb8;
    *(undefined ***)(param_1 + 0x50) = &PTR_DAT_800a1ea0;
    param_1->state = 1;
    *(undefined2 *)(param_1 + 0x32) = 0xffce;
    param_1->scale_y = 0x1000100;
  }
  param_1->sprite_data = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x40) == 0) {
    param_1->state = 3;
  }
  else {
    param_1->flags = 1;
  }
  return;
}
