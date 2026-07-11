/**
 * @brief Entity animation frame: advances frame, checks wrap
 * @note Original: func_80076D68 at 0x80076D68
 */
// Entity_AnimFrame



/* WARNING: Type propagation algorithm not settling */

#include "tomba.h"
s32 Entity_AnimFrame(int param_1)

{
  s16 sVar1;
  u16 uVar2;
  u16 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = param_1->anim_timer;
  iVar4 = (uVar2 & 0xfff) - 1;
  if (iVar4 == 0) {
    iVar4 = param_1->anim_data;
    uVar5 = (int)*(s16 *)(iVar4 + 6) & 0xc000;
    if (uVar5 == 0x4000) {
      if ((uVar2 & 0x1000) == 0) {
        param_1->anim_data = iVar4 + 8;
        param_1->anim_data = *(s32 *)(iVar4 + 8);
      }
      param_1->anim_timer = *(u16 *)(param_1->anim_data + 6) & 0xfff;
      Entity_AnimController2(param_1);
      iVar4 = param_1->anim_data;
      uVar2 = *(u16 *)(iVar4 + 6);
    }
    else {
      if (0x4000 < uVar5) {
        if (uVar5 == 0x8000) {
          param_1->anim_timer = *(u16 *)(iVar4 + 6) & 0xfff;
          return 1;
        }
        if (uVar5 != 0xc000) {
          return 0;
        }
        if ((uVar2 & 0x1000) == 0) {
          param_1->anim_data = iVar4 + 8;
          param_1->anim_data = *(s32 *)(iVar4 + 8);
        }
        param_1->anim_timer = *(u16 *)(param_1->anim_data + 6) & 0xfff;
        Entity_AnimController2(param_1);
        iVar4 = param_1->anim_data;
        uVar2 = *(u16 *)(iVar4 + 6);
        uVar3 = uVar2 & 0xc000;
        if ((uVar2 & 0x2000) == 0) {
          return 1;
        }
        if (uVar3 != 0x4000) {
          if (uVar3 < 0x4001) {
            if ((uVar2 & 0xc000) != 0) {
              return 1;
            }
            sVar1 = param_1->anim_timer;
            iVar4 = iVar4 + 8;
            goto LAB_8007700c;
          }
          if (uVar3 == 0x8000) {
            return 1;
          }
          if (uVar3 != 0xc000) {
            return 1;
          }
        }
        iVar4 = *(int *)(iVar4 + 8);
        sVar1 = param_1->anim_timer;
LAB_8007700c:
        Audio_SeqMain2(param_1,iVar4,(int)sVar1);
        return 1;
      }
      if (uVar5 != 0) {
        return 0;
      }
      if ((uVar2 & 0x1000) == 0) {
        param_1->anim_data = iVar4 + 8;
      }
      param_1->anim_timer = *(u16 *)(param_1->anim_data + 6) & 0xfff;
      Entity_AnimController2(param_1);
      iVar4 = param_1->anim_data;
      uVar2 = *(u16 *)(iVar4 + 6);
    }
    if ((uVar2 & 0x2000) != 0) {
      uVar2 = uVar2 & 0xc000;
      if (uVar2 != 0x4000) {
        if (uVar2 < 0x4001) {
          if (uVar2 != 0) {
            return 0;
          }
          Audio_SeqMain2(param_1,iVar4 + 8,(int)param_1->anim_timer);
          return 0;
        }
        if (uVar2 == 0x8000) {
          return 0;
        }
        if (uVar2 != 0xc000) {
          return 0;
        }
      }
      Audio_SeqMain2(param_1,*(s32 *)(iVar4 + 8),(int)param_1->anim_timer);
      return 0;
    }
  }
  else {
    sVar1 = (s16)iVar4;
    if (-1 < param_1->anim_data) {
      Entity_RotateMove(param_1);
      param_1->anim_timer = sVar1 + (param_1->anim_timer & 0x1000);
      return 2;
    }
    param_1->anim_timer = sVar1 + (uVar2 & 0x1000);
  }
  return 0;
}
