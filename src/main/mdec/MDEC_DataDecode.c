/**
 * @brief MDEC data decoder: reads bitstream from buffer, dispatches
 * @note Original: func_8008DA58 at 0x8008DA58
 */
// MDEC_DataDecode



#include "tomba.h"
void FUN_8008da58(uint param_1,s32 param_2,int param_3,uint param_4,s32 param_5,
                 s8 param_6)

{
  u8 bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = param_1 * 0x10;
  uVar2 = *(uint *)(&DAT_1f801088 + iVar4);
  do {
    if ((uVar2 & 0x1000000) == 0) {
LAB_8008dad4:
      if (param_6 == '\x01') {
        bVar1 = DAT_800ac3c0->state | (u8)(1 << (param_1 & 0x1f));
      }
      else {
        bVar1 = DAT_800ac3c0->state & ~(u8)(1 << (param_1 & 0x1f));
      }
      DAT_800ac3c0->state = bVar1;
      iVar3 = param_1 * 0x10;
      *DAT_800ac3bc = *DAT_800ac3bc | 1 << (param_1 * 4 + 3 & 0x1f);
      *(s32 *)(&DAT_1f801080 + iVar3) = param_2;
      *(uint *)(&DAT_1f801084 + iVar3) = param_3 << 0x10 | param_4;
      bVar1 = *DAT_800ac3a4;
      while ((bVar1 & 0x40) == 0) {
        bVar1 = *DAT_800ac3a4;
      }
      *(s32 *)(&DAT_1f801088 + iVar3) = param_5;
      return;
    }
    if (iVar3 == 0x10000) {
      FUN_8009a730(s_DMA_STATUS_ERROR__x_8001c5c0,*(s32 *)(&DAT_1f801088 + iVar4));
      goto LAB_8008dad4;
    }
    uVar2 = *(uint *)(&DAT_1f801088 + iVar4);
    iVar3 = iVar3 + 1;
  } while( true );
}
