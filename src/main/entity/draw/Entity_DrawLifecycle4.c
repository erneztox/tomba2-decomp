/**
 * @brief Entity draw lifecycle variant 4: entity->state=1, different draw path
 * @note Original: func_80033380 at 0x80033380
 */
// Entity_DrawLifecycle4



#include "tomba.h"
void Entity_DrawLifecycle4(int param_1)

{
  u8 bVar1;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      Entity_Dealloc(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->pos_y = 0xf95c;
    param_1->state = 1;
    param_1->sub_action = 0xff;
  }
  *(s16 *)(param_1 + 0x30) = *(s16 *)(param_1 + 0x30) + -0x42;
  param_1->sub_action = param_1->sub_action - (param_1->sub_action >> 2);
  if (*(s16 *)(param_1 + 0x30) < 500) {
    param_1->state = STATE_FINISH;
  }
  else {
    param_1->scale_y = param_1->anim_data;
    if (param_1->anim_data == 0) {
      *(void **)(param_1 + 0x38) = &DAT_800a0c5c;
      *(void **)(param_1 + 0x34) = &DAT_800a0c5c;
    }
    param_1->flags = 1;
  }
  return;
}
