/**
 * @brief Save confirmation: entity->flags state, handles yes/no
 * @note Original: func_800399FC at 0x800399FC
 */
// Save_Confirm



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Save_Confirm(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  int iVar3;
  uint uVar4;
  s32 uVar5;
  
  bVar1 = param_1->flags;
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      Entity_CleanupRef(param_1);
      param_1->flags = 0;
    }
    sVar2 = Save_DrawText(*(u8 *)(param_1 + 0x1f));
    iVar3 = Entity_ActivatePool3((int)sVar2,1);
    *(int *)(param_1 + 0x28) = iVar3;
    if (iVar3 != 0) {
      param_1->flags = param_1->flags + '\x01';
    }
  }
  if ((_g_PadState & 0x2000) != 0) {
LAB_80039b30:
    param_1->counter2 = 0;
    Entity_ResetFull(param_1);
    return;
  }
  if ((_g_PadState & 0x40) == 0) {
    if ((_g_InputState & 0x40) == 0) {
      if ((_g_PadState & 0x10) != 0) {
        *(s16 *)(param_1 + 0x18) = 0;
        iVar3 = Save_CursorPrev(param_1);
        if (iVar3 == 0) goto LAB_80039b30;
        goto LAB_80039b88;
      }
      if ((_g_InputState & 0x10) == 0) goto LAB_80039ba4;
      uVar4 = *(u16 *)(param_1 + 0x18) + 1;
      *(s16 *)(param_1 + 0x18) = (s16)uVar4;
      if (((int)(uVar4 * 0x10000) >> 0x10 < 9) || ((uVar4 & 1) == 0)) goto LAB_80039ba4;
      iVar3 = Save_CursorPrev(param_1);
    }
    else {
      uVar4 = *(u16 *)(param_1 + 0x18) + 1;
      *(s16 *)(param_1 + 0x18) = (s16)uVar4;
      if (((int)(uVar4 * 0x10000) >> 0x10 < 9) || ((uVar4 & 1) == 0)) goto LAB_80039ba4;
      iVar3 = Save_CursorNext(param_1);
    }
    if (iVar3 == 0) goto LAB_80039ba4;
LAB_80039b88:
    uVar5 = 0x15;
    param_1->flags = param_1->flags + '\x01';
  }
  else {
    *(s16 *)(param_1 + 0x18) = 0;
    iVar3 = Save_CursorNext(param_1);
    if (iVar3 != 0) goto LAB_80039b88;
    uVar5 = 0x12;
  }
  Audio_PlaySoundEffect(uVar5,0,0);
LAB_80039ba4:
  *(s8*)(param_1 + 0x1c) = *(s8*)(param_1 + 0x1f) - *(s8*)(param_1 + 0x1e);
  Entity_SpriteLifecycle(*(s32 *)(param_1 + 0x28));
  return;
}
