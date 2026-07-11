/**
 * @brief Entity draw lifecycle variant 2: different sprite processing path
 * @note Original: func_80033630 at 0x80033630
 */
// Entity_DrawLifecycle2



#include "tomba.h"
void Entity_DrawLifecycle2(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      Entity_Dealloc();
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    *(s32 *)(param_1 + 0x48) = 0;
    param_1->normal_z = 0;
    param_1->state = 1;
    param_1->behavior_state = 0xff;
    param_1->pos_y = param_1->pos_y + 0x78;
  }
  bVar1 = param_1->behavior_state + 1;
  param_1->behavior_state = bVar1;
  if (bVar1 < 6) {
    param_1->flags = 1;
  }
  else {
    param_1->state = STATE_FINISH;
  }
  return;
}
