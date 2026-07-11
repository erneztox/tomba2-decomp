/**
 * @brief Audio sequence voice: assigns voice to SEQ track
 * @note Original: func_80091460 at 0x80091460
 */
// Audio_SeqVoice



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 FUN_80091460(s16 param_1,s16 param_2)

{
  u8 bVar1;
  int iVar2;
  code *pcVar3;
  u8 bVar4;
  u8 *pbVar5;
  int *piVar6;
  
  iVar2 = param_2 * 0xb0;
  piVar6 = (int *)(*(int *)(&g_AudioChannels + param_1 * 4) + iVar2);
  bVar4 = *(u8 *)*piVar6;
  pbVar5 = (u8 *)*piVar6 + 1;
  *piVar6 = (int)pbVar5;
  if (((*(uint *)(iVar2 + *(int *)(&g_AudioChannels + param_1 * 4) + 0x98) & 0x401) == 0x401) &&
     (pbVar5 == (u8 *)(piVar6->state + 1))) {
    FUN_8009121c((int)param_1,(int)param_2,*(u8 *)(piVar6->state + 1));
    return 0xffffffff;
  }
  if ((bVar4 & 0x80) == 0) {
    bVar1 = *(u8 *)((int)piVar6 + 0x16);
    pcVar3 = _DAT_80104b94;
    if (bVar1 == 0xc0) goto LAB_800917dc;
    if (bVar1 < 0xc1) {
      if (bVar1 == 0x90) {
        bVar1 = *(u8 *)*piVar6;
        *piVar6 = (int)((u8 *)*piVar6 + 1);
        iVar2 = FUN_80090160((int)param_1,(int)param_2);
        piVar6[0x24] = iVar2;
        goto LAB_80091718;
      }
      pcVar3 = _DAT_80104ba0;
      if (bVar1 != 0xb0) {
        return 0;
      }
      goto LAB_800917dc;
    }
    if (bVar1 == 0xe0) goto LAB_80091774;
    pcVar3 = _DAT_80104b9c;
    if (bVar1 != 0xff) {
      return 0;
    }
  }
  else {
    *(u8 *)((int)piVar6 + 0x17) = bVar4 & 0xf;
    bVar4 = bVar4 & 0xf0;
    if (bVar4 == 0xc0) {
      *(u8 *)((int)piVar6 + 0x16) = 0xc0;
      bVar4 = *(u8 *)*piVar6;
      *piVar6 = (int)((u8 *)*piVar6 + 1);
      pcVar3 = _DAT_80104b94;
      goto LAB_800917dc;
    }
    if (bVar4 < 0xc1) {
      if (bVar4 == 0x90) {
        pbVar5 = (u8 *)*piVar6;
        *(u8 *)((int)piVar6 + 0x16) = 0x90;
        bVar4 = *pbVar5;
        *piVar6 = (int)(pbVar5 + 1);
        bVar1 = pbVar5->flags;
        *piVar6 = (int)(pbVar5 + 2);
        iVar2 = FUN_80090160((int)param_1,(int)param_2);
        piVar6[0x24] = iVar2;
LAB_80091718:
        (*_DAT_80104b90)((int)param_1,(int)param_2,bVar4,bVar1);
        return 0;
      }
      if (bVar4 != 0xb0) {
        return 0;
      }
      *(u8 *)((int)piVar6 + 0x16) = 0xb0;
      bVar4 = *(u8 *)*piVar6;
      *piVar6 = (int)((u8 *)*piVar6 + 1);
      pcVar3 = _DAT_80104ba0;
      goto LAB_800917dc;
    }
    if (bVar4 == 0xe0) {
      *(u8 *)((int)piVar6 + 0x16) = 0xe0;
      *piVar6 = *piVar6 + 1;
LAB_80091774:
      (*_DAT_80104b98)((int)param_1,(int)param_2);
      return 0;
    }
    if (bVar4 != 0xf0) {
      return 0;
    }
    *(u8 *)((int)piVar6 + 0x16) = 0xff;
    bVar4 = *(u8 *)*piVar6;
    *piVar6 = (int)((u8 *)*piVar6 + 1);
    pcVar3 = _DAT_80104b9c;
  }
  _DAT_80104b9c = pcVar3;
  if (bVar4 == 0x2f) {
    FUN_8009121c((int)param_1,(int)param_2,0x2f);
    return 1;
  }
LAB_800917dc:
  (*pcVar3)((int)param_1,(int)param_2,bVar4);
  return 0;
}
