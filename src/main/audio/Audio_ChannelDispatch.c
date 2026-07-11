/**
 * @brief Audio channel dispatch: looks up struct, branches on flag to Audio_ChannelEvent or Audio_SeqCommand
 * @note Original: func_80090010 at 0x80090010
 */
// Audio_ChannelDispatch



#include "tomba.h"
void Audio_ChannelDispatch(u16 param_1,int param_2,u8 param_3,s8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe)) + (s16)param_2 * 0xb0;
  iVar2 = iVar1 + (uint)iVar1->flags;
  if (param_4 == '\0') {
    Audio_ChannelEvent((int)(s16)(param_1 | (u16)(param_2 << 8)),(int)iVar1->flags,
                 iVar2->flags,param_3);
  }
  else if (((int)iVar1->flags >> (iVar1->flags & 0x1f) & 1U) == 0) {
    Audio_SeqCommand((int)(s16)(param_1 | (u16)(param_2 << 8)),(int)iVar1->flags,
                 iVar2->flags,param_3,param_4,iVar2->flags);
  }
  return;
}
