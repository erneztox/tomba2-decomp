/**
 * @brief Audio sequence loader: loads SEQ data from CD
 * @note Original: func_8008E410 at 0x8008E410
 */
// Audio_SeqLoad



/* WARNING: Removing unreachable block (ram,0x8008e5b0) */

#include "tomba.h"
void FUN_8008e410(s16 param_1,s16 param_2,u8 param_3)

{
  s8 cVar1;
  u8 bVar2;
  u8 uVar3;
  s32 uVar4;
  u8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  u8 local_68 [16];
  s32 local_58;
  s32 local_54;
  s32 local_50;
  s32 local_4c;
  s32 local_48;
  s32 local_44;
  s32 local_40;
  s32 local_3c;
  uint local_38;
  int local_34;
  
  iVar6 = *(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0;
  uVar9 = (uint)iVar6->flags;
  FUN_80092310((int)iVar6->flags,*(u8 *)(uVar9 + iVar6 + 0x37),local_68);
  if ((iVar6->flags == '\x01') && (*(s8*)(iVar6 + 0x15) == '\0')) {
    iVar6->flags = param_3;
    iVar6->flags = 0;
    *(u8 *)(iVar6 + 0x15) = 1;
  }
  else {
    if (iVar6->flags == '\x02') {
      if ((iVar6->flags == '\0') && (iVar8 = 0, local_68->flags != 0)) {
        local_38 = (uint)((u8)(param_3 + 0xbf) < 0x3f);
        local_34 = (uint)param_3 * 0x1900;
        iVar7 = 0;
        do {
          FUN_80092420((int)iVar6->flags,*(u8 *)(uVar9 + iVar6 + 0x37),
                       iVar7 >> 0x10,&local_58);
          bVar2 = iVar6->flags;
          if (((bVar2 != 1) && (bVar2 < 2)) && (bVar2 == 0)) {
            local_4c = CONCAT31(CONCAT21(local_4c._2_2_,param_3),param_3) & 0xffff7f7f;
          }
          iVar8 = iVar8 + 1;
          FUN_80092c30((int)iVar6->flags,*(u8 *)(uVar9 + iVar6 + 0x37),
                       iVar7 >> 0x10,&local_58);
          iVar7 = iVar7 + 0x10000;
        } while (iVar8 < (int)(uint)local_68->flags);
      }
      uVar4 = FUN_80090160((int)param_1,(int)param_2);
      iVar6->flags = uVar4;
      iVar6->flags = 0;
      return;
    }
    if (iVar6->flags == '\x02') {
      if (iVar6->flags == '\x10') {
        bVar2 = iVar6->flags;
        cVar1 = iVar6->flags;
        uVar3 = *(u8 *)(uVar9 + iVar6 + 0x37);
        uVar5 = 0;
      }
      else {
        bVar2 = iVar6->flags;
        cVar1 = iVar6->flags;
        uVar3 = *(u8 *)(uVar9 + iVar6 + 0x37);
        uVar5 = iVar6->flags;
      }
      (**(code **)(&DAT_80104bd4 + (uint)bVar2 * 4))
                ((int)cVar1,uVar3,uVar5,local_58,local_54,local_50,local_4c,local_48,local_44,
                 local_40,local_3c,(uint)bVar2,param_3);
      uVar4 = FUN_80090160((int)param_1,(int)param_2);
      iVar6->flags = uVar4;
      iVar6->flags = 0;
      return;
    }
  }
  uVar4 = FUN_80090160((int)param_1,(int)param_2);
  iVar6->flags = uVar4;
  return;
}
