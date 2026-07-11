/**
 * @brief Audio channel init: looks up 0xB0-stride struct, zeros fields, calls init function
 * @note Original: func_80091050 at 0x80091050
 */
// Audio_InitChannel



#include "tomba.h"
void Audio_InitChannel(u16 param_1,s16 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe));
  Audio_ScanChannel((int)(s16)(param_1 | param_2 << 8));
  *(u8 *)(iVar1 + param_2 * 0xb0 + 0x14) = 0;
  iVar1 = param_2 * 0xb0 + *(int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar1->flags = iVar1->flags & 0xfffffffd;
  return;
}
