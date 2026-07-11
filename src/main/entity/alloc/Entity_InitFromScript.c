/**
 * @brief Initializes entity from script data: sets up callback, flags, and script pointer
 * @note Original: func_80040CDC at 0x80040CDC
 */
// Entity_InitFromScript



#include "tomba.h"
void FUN_80040cdc(int param_1,s32 param_2,u16 *param_3)

{
  *(s32 *)(param_1 + 0x7c) = param_2;
  param_1->anim_id = 0xff;
  param_1->parent = 0;
  param_1->anim_check = 0;
  param_1->sub_state = 0;
  FUN_80040de0(param_1,param_3);
  param_1->state_71 = 0;
  if ((*param_3 & 0x1000) != 0) {
    param_1->state_71 = 2;
  }
  if ((*param_3 & 0x4000) != 0) {
    param_1->state_71 = param_1->state_71 | 4;
  }
  return;
}
