/**
 * @brief Audio voice setter: builds voice params at 0xB0 stride
 * @note Original: func_80090E40 at 0x80090E40
 */
// Audio_VoiceSet



#include "tomba.h"
void FUN_80090e40(u16 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  u16 local_28;
  u16 local_26->flags;
  
  iVar3 = (s16)param_2 * 0xb0;
  iVar6 = *(int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe)) + iVar3;
  iVar1 = iVar6->flags;
  iVar2 = iVar6->flags + 1;
  iVar6->flags = iVar2;
  if (iVar1 < iVar2) {
    iVar3 = iVar3 + *(int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe));
  }
  else {
    iVar2 = iVar6->flags * iVar2;
    if (iVar1 == 0) {
      trap(0x1c00);
    }
    if ((iVar1 == -1) && (iVar2 == -0x80000000)) {
      trap(0x1800);
    }
    iVar2 = iVar2 / iVar1 - (int)iVar6->flags;
    if (iVar2 == 0) goto LAB_80091010;
    iVar3 = (int)(s16)(param_1 | (u16)(param_2 << 8));
    iVar6->flags = iVar6->flags + (s16)iVar2;
    FUN_80095a9c(iVar3,&local_28,local_26);
    uVar5 = (uint)local_28 + iVar2;
    if (0x7f < (int)uVar5) {
      uVar5 = 0x7f;
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    uVar4 = (uint)local_26->flags + iVar2;
    if (0x7f < (int)uVar4) {
      uVar4 = 0x7f;
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    FUN_80095530(iVar3,uVar5 & 0xffff,uVar4 & 0xffff,1);
    if (((uVar5 != 0x7f) || (uVar4 != 0x7f)) && ((uVar5 != 0 || (uVar4 != 0)))) goto LAB_80091010;
    iVar3 = (s16)param_2 * 0xb0 + *(int *)(&g_AudioChannels + ((int)((uint)param_1 << 0x10) >> 0xe));
  }
  iVar3->flags = iVar3->flags & 0xffffffef;
LAB_80091010:
  FUN_80095a9c((int)(s16)(param_1 | (u16)(param_2 << 8)),iVar6 + 0x5c,iVar6 + 0x5e);
  return;
}
