/**
 * @brief Entity draw lifecycle variant 5: processes sprite, dealloc at state 4
 * @note Original: func_80032918 at 0x80032918
 */
// Entity_DrawLifecycle5



#include "tomba.h"
void FUN_80032918(int param_1)

{
  u8 bVar1;
  int iVar2;
  
  bVar1 = param_1->state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    param_1->action_state = 0x10;
    param_1->scale_y = param_1->anim_data;
    param_1->state = 1;
    if (param_1->sub_type == '7') {
      param_1->anim_counter = param_1->anim_counter + 0x40;
    }
  }
  param_1->scale_y = param_1->anim_data;
  if (param_1->anim_data == 0) {
    param_1->state = 2;
  }
  else {
    iVar2 = FUN_8002b278(param_1);
    if (iVar2 == 0) {
      FUN_80031780(param_1);
    }
  }
  return;
}
