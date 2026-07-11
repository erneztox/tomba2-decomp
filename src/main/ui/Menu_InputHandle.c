/**
 * @brief Menu input handler: processes pad input for menus
 * @note Original: func_800387E0 at 0x800387E0
 */
// Menu_InputHandle



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Menu_InputHandle(int param_1)

{
  int iVar1;
  uint uVar2;
  s32 uVar3;
  s32 uVar4;
  
  if ((_g_PadState & 0xc000) == 0) {
    if ((_g_PadState & 0x2000) != 0) {
      param_1->counter2 = 0;
      Entity_ResetFull();
      return;
    }
  }
  else {
    Audio_PlaySoundEffect(0x12,0,0);
  }
  if ((_g_PadState & 0x20) == 0) {
    if ((_g_PadState & 0x80) != 0) {
      uVar3 = 0x12;
      if (*(s8*)(param_1 + 0x1d) != '\0') {
        *(u8 *)(param_1 + 0x1d) = 0;
        goto LAB_80038878;
      }
      goto LAB_8003887c;
    }
  }
  else {
    uVar3 = 0x12;
    if (*(s8*)(param_1 + 0x1d) != '\x01') {
      *(u8 *)(param_1 + 0x1d) = 1;
LAB_80038878:
      uVar3 = 0x15;
    }
LAB_8003887c:
    Audio_PlaySoundEffect(uVar3,0,0);
  }
  if ((_g_PadState & 0x200) == 0) {
    if ((_g_PadState & 0x100) == 0) {
      if ((_g_PadState & 0x40) == 0) {
        if ((_g_InputState & 0x40) == 0) {
          if ((_g_PadState & 0x10) != 0) {
            *(s16 *)(param_1 + 0x18) = 0;
            iVar1 = Menu_CursorPrev(param_1);
            uVar3 = 0x15;
            if (iVar1 == 0) {
              param_1->counter2 = 0;
              Entity_ResetFull(param_1);
              goto LAB_800389dc;
            }
            goto LAB_800389d0;
          }
          if ((_g_InputState & 0x10) == 0) goto LAB_800389dc;
          uVar2 = *(u16 *)(param_1 + 0x18) + 1;
          *(s16 *)(param_1 + 0x18) = (s16)uVar2;
          if (((int)(uVar2 * 0x10000) >> 0x10 < 9) || ((uVar2 & 1) == 0)) goto LAB_800389dc;
          iVar1 = Menu_CursorPrev(param_1);
        }
        else {
          uVar2 = *(u16 *)(param_1 + 0x18) + 1;
          *(s16 *)(param_1 + 0x18) = (s16)uVar2;
          if (((int)(uVar2 * 0x10000) >> 0x10 < 9) || ((uVar2 & 1) == 0)) goto LAB_800389dc;
          iVar1 = Menu_CursorNext(param_1);
        }
        uVar3 = 0x15;
        if (iVar1 == 0) goto LAB_800389dc;
      }
      else {
        *(s16 *)(param_1 + 0x18) = 0;
        iVar1 = Menu_CursorNext(param_1);
        uVar3 = 0x15;
        if (iVar1 == 0) {
          uVar3 = 0x12;
        }
      }
    }
    else {
      iVar1 = Menu_CursorPrev6(param_1);
      uVar3 = 4;
      if (iVar1 != 0) {
        uVar4 = 5;
        goto LAB_800389d4;
      }
      uVar3 = 0x12;
    }
LAB_800389d0:
    uVar4 = 0;
  }
  else {
    iVar1 = Menu_CursorNext6(param_1);
    uVar3 = 4;
    if (iVar1 == 0) {
      uVar3 = 0x12;
      goto LAB_800389d0;
    }
    uVar4 = 5;
  }
LAB_800389d4:
  Audio_PlaySoundEffect(uVar3,uVar4,0);
LAB_800389dc:
  *(s8*)(param_1 + 0x1c) = *(s8*)(param_1 + 0x1f) - *(s8*)(param_1 + 0x1e);
  return;
}
