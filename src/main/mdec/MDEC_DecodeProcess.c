/**
 * @brief MDEC decode processor: reads bitstream at entity[0x3C], processes blocks
 * @note Original: func_80089194 at 0x80089194
 */
// MDEC_DecodeProcess



#include "tomba.h"
s32 FUN_80089194(int param_1)

{
  u8 bVar1;
  
  if (**(char **)(param_1 + 0x3c) == -0xd) {
    if ((param_1->state != '\0') && (param_1->state != -1)) {
      if (param_1->state == '\x02') {
        (*DAT_800abe3c)(param_1);
      }
      goto LAB_80089200;
    }
LAB_80089258:
    FUN_80088a54(param_1,0);
  }
  else {
LAB_80089200:
    bVar1 = param_1->state;
    if (bVar1 == 1) {
      FUN_80088a54(param_1,1);
      return 0;
    }
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        return 0;
      }
    }
    else {
      if (bVar1 == 0xfe) goto LAB_80089258;
      if (bVar1 == 0xff) {
        return 0;
      }
    }
    if (param_1->state == (code *)0x0) {
      FUN_80087f1c(param_1);
    }
    else {
      (param_1->state)(param_1);
    }
  }
  return 0;
}
