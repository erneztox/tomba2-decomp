/**
 * @brief Audio channel scanner: iterates channel table, updates active channels
 * @note Original: func_800905E0 at 0x800905E0
 */
// Audio_ScanChannels



#include "tomba.h"
void Audio_ScanChannels(u16 param_1,s16 param_2,s8 param_3,u8 param_4)

{
  s32 *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe));
  iVar2 = param_2 * 0xb0;
  puVar1 = (s32 *)(*piVar3 + iVar2);
  *puVar1 = puVar1->flags;
  puVar1->flags = puVar1->flags;
  puVar1->flags = puVar1->flags;
  *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffdff;
  *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) & 0xfffffffb;
  puVar1->flags = param_4;
  if (param_3 == '\x01') {
    *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 1;
    puVar1->flags = 1;
    *(u8 *)((int)puVar1 + 0x21) = 0;
    Audio_VoiceKeyOn((int)(s16)(param_1 | param_2 << 8),*(s16 *)(puVar1 + 0x16),
                 *(s16 *)((int)puVar1 + 0x5a),1);
  }
  else if (param_3 == '\0') {
    *(uint *)(iVar2 + *piVar3 + 0x98) = *(uint *)(iVar2 + *piVar3 + 0x98) | 2;
  }
  return;
}
