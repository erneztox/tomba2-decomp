/**
 * @brief Audio channel param: sets channel[0x48/0x9C] if flags 4 and 0x100 are clear
 * @note Original: func_800922A0 at 0x800922A0
 */
// Audio_SetChannelParam



#include "tomba.h"
void FUN_800922a0(int param_1,short param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&DAT_80104c30 + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  if ((((iVar1->gte_result & 4) == 0) && ((iVar1->gte_result & 0x100) == 0)) &&
     (param_3 != 0)) {
    iVar1->normal_x = param_3;
    *(undefined4 *)(iVar1 + 0x9c) = param_4;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    iVar1->velocity_y = 0;
  }
  return;
}
