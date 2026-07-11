/**
 * @brief Audio channel enable: sets channel->flags=1, clears flag bit 3
 * @note Original: func_80091910 at 0x80091910
 */
// Audio_EnableChannel



#include "tomba.h"
void Audio_EnableChannel(int param_1,s16 param_2)

{
  int iVar1;
  
  *(u8 *)(*(int *)(&g_AudioChannels + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0 + 0x14) = 1;
  iVar1 = param_2 * 0xb0 + *(int *)(&g_AudioChannels + ((param_1 << 0x10) >> 0xe));
  iVar1->flags = iVar1->flags & 0xfffffff7;
  return;
}
