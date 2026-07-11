/**
 * @brief Audio sequence loader: loads SEQ data from CD
 * @note Original: func_8008E410 at 0x8008E410
 */
// Audio_SeqLoad



/* WARNING: Removing unreachable block (ram,0x8008e5b0) */

#include "tomba.h"
void FUN_8008e410(short param_1,short param_2,byte param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte local_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  
  iVar6 = *(int *)(&DAT_80104c30 + param_1 * 4) + param_2 * 0xb0;
  uVar9 = (uint)*(byte *)(iVar6 + 0x17);
  FUN_80092310((int)*(char *)(iVar6 + 0x26),*(undefined1 *)(uVar9 + iVar6 + 0x37),local_68);
  if ((*(char *)(iVar6 + 0x1c) == '\x01') && (*(char *)(iVar6 + 0x15) == '\0')) {
    *(byte *)(iVar6 + 0x1d) = param_3;
    *(undefined1 *)(iVar6 + 0x1c) = 0;
    *(undefined1 *)(iVar6 + 0x15) = 1;
  }
  else {
    if (*(char *)(iVar6 + 0x1e) == '\x02') {
      if ((*(char *)(iVar6 + 0x19) == '\0') && (iVar8 = 0, local_68->type != 0)) {
        local_38 = (uint)((byte)(param_3 + 0xbf) < 0x3f);
        local_34 = (uint)param_3 * 0x1900;
        iVar7 = 0;
        do {
          FUN_80092420((int)*(char *)(iVar6 + 0x26),*(undefined1 *)(uVar9 + iVar6 + 0x37),
                       iVar7 >> 0x10,&local_58);
          bVar2 = *(byte *)(iVar6 + 0x18);
          if (((bVar2 != 1) && (bVar2 < 2)) && (bVar2 == 0)) {
            local_4c = CONCAT31(CONCAT21(local_4c._2_2_,param_3),param_3) & 0xffff7f7f;
          }
          iVar8 = iVar8 + 1;
          FUN_80092c30((int)*(char *)(iVar6 + 0x26),*(undefined1 *)(uVar9 + iVar6 + 0x37),
                       iVar7 >> 0x10,&local_58);
          iVar7 = iVar7 + 0x10000;
        } while (iVar8 < (int)(uint)local_68->type);
      }
      uVar4 = FUN_80090160((int)param_1,(int)param_2);
      *(undefined4 *)(iVar6 + 0x90) = uVar4;
      *(undefined1 *)(iVar6 + 0x1e) = 0;
      return;
    }
    if (*(char *)(iVar6 + 0x1f) == '\x02') {
      if (*(char *)(iVar6 + 0x1b) == '\x10') {
        bVar2 = *(byte *)(iVar6 + 0x1a);
        cVar1 = *(char *)(iVar6 + 0x26);
        uVar3 = *(undefined1 *)(uVar9 + iVar6 + 0x37);
        uVar5 = 0;
      }
      else {
        bVar2 = *(byte *)(iVar6 + 0x1a);
        cVar1 = *(char *)(iVar6 + 0x26);
        uVar3 = *(undefined1 *)(uVar9 + iVar6 + 0x37);
        uVar5 = *(undefined1 *)(iVar6 + 0x1b);
      }
      (**(code **)(&DAT_80104bd4 + (uint)bVar2 * 4))
                ((int)cVar1,uVar3,uVar5,local_58,local_54,local_50,local_4c,local_48,local_44,
                 local_40,local_3c,(uint)bVar2,param_3);
      uVar4 = FUN_80090160((int)param_1,(int)param_2);
      *(undefined4 *)(iVar6 + 0x90) = uVar4;
      *(undefined1 *)(iVar6 + 0x1f) = 0;
      return;
    }
  }
  uVar4 = FUN_80090160((int)param_1,(int)param_2);
  *(undefined4 *)(iVar6 + 0x90) = uVar4;
  return;
}
