/**
 * @brief MDEC state check: entity[0x53]/[0x46], calls funct ptr at DAT_800abe3c
 * @note Original: func_800889F4 at 0x800889F4
 */
// MDEC_CheckState



#include "tomba.h"
s32 FUN_800889f4(int param_1)

{
  if (*(s8*)(param_1 + 0x53) == '\0') {
    (*DAT_800abe3c)();
  }
  else {
    if (param_1->state == '\x02') {
      return 1;
    }
    param_1->state = 0xfe;
  }
  return 0;
}
