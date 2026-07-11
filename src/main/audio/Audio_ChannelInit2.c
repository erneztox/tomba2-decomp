/**
 * @brief Audio channel init variant 2: sets voice, calls FUN_80095530
 * @note Original: func_8008DC00 at 0x8008DC00
 */
// Audio_ChannelInit2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_8008dc00(s16 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  FUN_80095530(uVar6,0,0,1);
  FUN_80095b90(uVar6);
  _DAT_80104c28 = _DAT_80104c28 & ~(1 << (uVar6 & 0x1f));
  iVar5 = 0;
  if (0 < _DAT_801054b2) {
    piVar4 = (int *)(&g_AudioChannels + uVar6 * 4);
    iVar3 = 0;
    do {
      *(s32 *)(iVar3 + *piVar4 + 0x98) = 0;
      *(u8 *)(iVar3 + *piVar4 + 0x22) = 0xff;
      *(u8 *)(iVar3 + *piVar4 + 0x23) = 0;
      *(s16 *)(iVar3 + *piVar4 + 0x48) = 0;
      *(s16 *)(iVar3 + *piVar4 + 0x4a) = 0;
      *(s32 *)(iVar3 + *piVar4 + 0x9c) = 0;
      *(s32 *)(iVar3 + *piVar4 + 0xa0) = 0;
      *(s16 *)(iVar3 + *piVar4 + 0x4c) = 0;
      *(s32 *)(iVar3 + *piVar4 + 0xac) = 0;
      *(s32 *)(iVar3 + *piVar4 + 0xa8) = 0;
      *(s32 *)(iVar3 + *piVar4 + 0xa4) = 0;
      *(s16 *)(iVar3 + *piVar4 + 0x4e) = 0;
      iVar5 = iVar5 + 1;
      *(s16 *)(iVar3 + *piVar4 + 0x58) = 0x7f;
      iVar1 = (int)_DAT_801054b2;
      iVar2 = iVar3 + *piVar4;
      iVar3 = iVar3 + 0xb0;
      iVar2->target_rot_y = 0x7f;
    } while (iVar5 < iVar1);
  }
  return;
}
