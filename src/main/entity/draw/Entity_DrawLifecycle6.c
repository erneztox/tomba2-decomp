/**
 * @brief Entity draw lifecycle variant 6: entity->state=1, processes draw
 * @note Original: func_80032F98 at 0x80032F98
 */
// Entity_DrawLifecycle6



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80032f98(int param_1)

{
  u8 bVar1;
  s16 uVar2;
  void *puVar3;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      goto LAB_80033068;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800e7fc7 == '\0') {
      puVar3 = &DAT_8009e378;
    }
    else {
      puVar3 = &DAT_8009e730;
    }
    *(void **)(param_1 + 0x38) = puVar3;
    *(void **)(param_1 + 0x34) = puVar3;
    param_1->state = 1;
    param_1->action_state = 0x10;
    *(s16 *)(param_1 + 0x32) = 0xff6a;
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data != 0) {
    param_1->pos_x = _g_CameraTargetX;
    param_1->pos_y = _g_CameraTargetY;
    uVar2 = _g_CameraTargetZ;
    param_1->flags = 1;
    *(s16 *)(param_1 + 0x30) = uVar2;
    return;
  }
  param_1->state = 2;
LAB_80033068:
  FUN_8007a624();
  return;
}
