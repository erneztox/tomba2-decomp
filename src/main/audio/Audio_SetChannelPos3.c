/**
 * @brief Audio channel position variant 3: same as SetChannelPos pattern
 * @note Original: func_80091FB8 at 0x80091FB8
 */
// Audio_SetChannelPos3



#include "tomba.h"
void Audio_SetChannelPos3(u16 param_1,s16 param_2,s16 param_3,s16 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  if (iVar1->flags == 1) {
    Audio_VoiceKeyOn((int)(s16)(param_1 | param_2 << 8),param_3,param_4,1);
  }
  else {
    iVar1->flags = param_3;
    iVar1->flags = param_4;
  }
  return;
}
