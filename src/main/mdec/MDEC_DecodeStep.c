/**
 * @brief MDEC decode step: entity->state state, processes macroblock
 * @note Original: func_80089508 at 0x80089508
 */
// MDEC_DecodeStep



#include "tomba.h"
void MDEC_DecodeStep(int param_1)

{
  u8 bVar1;
  
  param_1->state = param_1->state + 1;
  if (param_1->state == '\0') {
LAB_800895a0:
    if (**(char **)(param_1 + 0x3c) != -0xd) {
      **(u8 **)(param_1 + 0x30) = 0xff;
      *(u8 *)(param_1->state + 1) = 0;
      param_1->state = 0;
      param_1->state = 0;
    }
  }
  else {
    if (param_1->state == '\x01') {
      bVar1 = param_1->state;
      if (10 < bVar1) {
        param_1->state = STATE_FINISH;
        param_1->state = 0xff;
        return;
      }
    }
    else {
      bVar1 = param_1->state;
      if (10 < bVar1) {
        if (param_1->state != '\0') {
          (*DAT_800abe3c)(param_1);
        }
        goto LAB_800895a0;
      }
    }
    param_1->state = bVar1 + 1;
  }
  return;
}
