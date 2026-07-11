/**
 * @brief Audio channel param: sets channel[0x48/0x9C] if flags 4 and 0x100 are clear
 * @note Original: func_800922A0 at 0x800922A0
 */
// Audio_SetChannelParam



#include "tomba.h"
void Audio_SetChannelParam(int param_1,s16 param_2,s16 param_3,s32 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&g_AudioChannels + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  if ((((iVar1->flags & 4) == 0) && ((iVar1->flags & 0x100) == 0)) &&
     (param_3 != 0)) {
    iVar1->flags = param_3;
    iVar1->flags = param_4;
    iVar1->flags = 0;
    iVar1->flags = 0;
  }
  return;
}
