/**
 * @brief Audio channel alloc variant 2: looks up channel table, calls init
 * @note Original: func_80091810 at 0x80091810
 */
// Audio_AllocChannel2



#include "tomba.h"
void Audio_AllocChannel2(int param_1,s16 param_2)

{
  int *piVar1;
  int iVar2;
  s32 *puVar3;
  
  piVar1 = (int *)(&g_AudioChannels + ((param_1 << 0x10) >> 0xe));
  iVar2 = param_2 * 0xb0;
  puVar3 = (s32 *)(*piVar1 + iVar2);
  puVar3->flags = 1;
  *(u8 *)((int)puVar3 + 0x21) = 0;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffeff;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffff7;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffffd;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffffb;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) & 0xfffffdff;
  puVar3->flags = 1;
  *puVar3 = puVar3->flags;
  *(uint *)(iVar2 + *piVar1 + 0x98) = *(uint *)(iVar2 + *piVar1 + 0x98) | 1;
  return;
}
