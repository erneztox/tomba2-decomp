/**
 * @brief Audio channel processor: updates channel state, calls voice funcs
 * @note Original: func_80091120 at 0x80091120
 */
// Audio_ChannelProcess



#include "tomba.h"
void Audio_ChannelProcess(int param_1,s16 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(&g_AudioChannels + ((param_1 << 0x10) >> 0xe)) + param_2 * 0xb0;
  iVar1 = iVar3->flags;
  iVar2 = iVar1 - iVar3->flags;
  if (iVar2 < 1) {
    if (iVar3->flags < iVar1) {
      return;
    }
    do {
      do {
        Audio_SeqVoice((param_1 << 0x10) >> 0x10,(int)param_2);
      } while (iVar3->flags == 0);
      iVar1 = iVar1 + iVar3->flags;
      iVar2 = iVar1 - iVar3->flags;
    } while (iVar1 < iVar3->flags);
  }
  else {
    if (0 < iVar3->flags) {
      iVar3->flags = iVar3->flags + -1;
      return;
    }
    if (iVar3->flags != 0) {
      iVar3->flags = iVar2;
      return;
    }
    iVar3->flags = iVar3->flags;
    iVar2 = iVar3->flags + -1;
  }
  iVar3->flags = iVar2;
  return;
}
