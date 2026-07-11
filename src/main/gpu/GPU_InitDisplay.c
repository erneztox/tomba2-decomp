/**
 * @brief GPU display init: sets up display area at param_1 with w/h/x/y
 * @note Original: func_80083B30 at 0x80083B30
 */
// GPU_InitDisplay



#include "tomba.h"
void GPU_InitDisplay(s16 *param_1,s16 param_2,s16 param_3,s16 param_4,
                 int param_5)

{
  s32 bVar1;
  int iVar2;
  
  iVar2 = CD_GetCallback();
  *param_1 = param_2;
  param_1->flags = param_3;
  param_1->kind = param_4;
  param_1->action_state = 0;
  param_1->sub_action = 0;
  param_1->counter1 = 0;
  param_1->counter2 = 0;
  *(u8 *)((int)param_1 + 0x19) = 0;
  param_1->sprite_flags = 0;
  *(u8 *)((int)param_1 + 0x1b) = 0;
  param_1->render_flags = 1;
  param_1->sub_type = (s16)param_5;
  if (iVar2 == 0) {
    bVar1 = param_5 < 0x101;
  }
  else {
    bVar1 = param_5 < 0x121;
  }
  *(s32 *)((int)param_1 + 0x17) = bVar1;
  param_1->state = param_2;
  param_1->behavior_state = param_3;
  param_1[10] = 10;
  *(u8 *)(param_1 + 0xc) = 0;
  return;
}
