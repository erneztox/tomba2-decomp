/**
 * @brief Audio channel updater: processes channel, updates voice
 * @note Original: func_8009121C at 0x8009121C
 */
// Audio_ChannelUpdate



#include "tomba.h"
void FUN_8009121c(u16 param_1,int param_2)

{
  s8 cVar1;
  s32 uVar2;
  int iVar3;
  int *piVar4;
  s32 *puVar5;
  
  piVar4 = (int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar3 = (s16)param_2 * 0xb0;
  puVar5 = (s32 *)(*piVar4 + iVar3);
  cVar1 = *(s8*)((int)puVar5 + 0x21) + '\x01';
  *(s8*)((int)puVar5 + 0x21) = cVar1;
  if (puVar5->flags == '\0') {
    puVar5[0x22] = 0;
    puVar5->flags = 0;
    puVar5[0x24] = 0;
    if ((*(uint *)(iVar3 + *piVar4 + 0x98) & 0x400) == 0) {
      *puVar5 = puVar5->flags;
    }
    else {
      *puVar5 = puVar5->flags;
    }
  }
  else if (cVar1 < puVar5->flags) {
    puVar5[0x22] = 0;
    puVar5->flags = 0;
    puVar5[0x24] = 0;
    if ((*(uint *)(iVar3 + *piVar4 + 0x98) & 0x400) == 0) {
      uVar2 = puVar5->flags;
      *puVar5 = puVar5->flags;
    }
    else {
      uVar2 = puVar5->flags;
      *puVar5 = puVar5->flags;
    }
    puVar5->flags = uVar2;
  }
  else {
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) & 0xfffffffe;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) & 0xfffffff7;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) & 0xfffffffd;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) | 0x200;
    *(uint *)(iVar3 + *piVar4 + 0x98) = *(uint *)(iVar3 + *piVar4 + 0x98) | 4;
    puVar5->flags = 0;
    if ((*(uint *)(iVar3 + *piVar4 + 0x98) & 0x400) == 0) {
      puVar5->flags = puVar5->flags;
    }
    else {
      puVar5->flags = puVar5->flags;
    }
    if (*(s8*)((int)puVar5 + 0x22) != -1) {
      puVar5->flags = 0;
      FUN_80091810((int)*(s8*)((int)puVar5 + 0x22),(int)*(s8*)((int)puVar5 + 0x23));
      FUN_80095b90((int)(s16)(param_1 | (u16)(param_2 << 8)));
    }
    FUN_80095b90((int)(s16)(param_1 | (u16)(param_2 << 8)));
    puVar5[0x24] = (int)puVar5->flags;
  }
  return;
}
