/**
 * @brief Entity draw main: full entity rendering pipeline
 * @note Original: func_800251F0 at 0x800251F0
 */
// Entity_DrawMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Entity_DrawMain(int param_1)

{
  u8 bVar1;
  s8 cVar2;
  int iVar3;
  int iVar4;
  s16 *psVar5;
  
  if ((_DAT_800bf880 & 0x600) != 0) {
    return;
  }
  if ((_DAT_800bf880 & 0x100) != 0) {
    return;
  }
  if (g_ActionFlag != '\0') {
    return;
  }
  bVar1 = param_1->behavior_state;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return;
        }
        if (((_g_PadState & 0x400) == 0) || (DAT_800bf80f != '\0')) {
          cVar2 = param_1->action_state + '\x04';
          param_1->action_state = cVar2;
          if (cVar2 != '\x10') {
            return;
          }
          param_1->behavior_state = 0;
          cVar2 = param_1->counter1 + -1;
          param_1->counter1 = cVar2;
          if (cVar2 == -1) {
            param_1->counter1 = param_1->sub_action + -1;
          }
          goto LAB_80025544;
        }
        cVar2 = param_1->counter1 + -1;
        param_1->counter1 = cVar2;
        if (cVar2 == -1) {
          param_1->counter1 = param_1->sub_action + -1;
        }
        param_1->action_state = 0;
        if (DAT_1f800232 != '\0') goto LAB_800254dc;
        goto LAB_800254f4;
      }
      if (((_g_PadState & 0x800) == 0) || (DAT_800bf80f != '\0')) {
        cVar2 = param_1->action_state + -4;
        param_1->action_state = cVar2;
        if (cVar2 != -0x10) {
          return;
        }
        param_1->behavior_state = 0;
        bVar1 = param_1->counter1 + 1;
        param_1->counter1 = bVar1;
        if (param_1->sub_action <= bVar1) {
          param_1->counter1 = 0;
        }
LAB_80025544:
        g_SpriteParam1 = *(u8 *)(&DAT_8009d284 +
                                (uint)*(u8 *)(param_1 + (uint)param_1->counter1 + 0x22) * 2);
        DAT_800e7eec = g_SpriteParam1;
        param_1->action_state = 0;
        return;
      }
      bVar1 = param_1->counter1 + 1;
      param_1->counter1 = bVar1;
      if (param_1->sub_action <= bVar1) {
        param_1->counter1 = 0;
      }
      param_1->action_state = 0;
      if (DAT_1f800232 == '\0') {
        param_1->behavior_state = 0;
        return;
      }
      goto LAB_800254dc;
    }
    iVar4 = 0;
    if (bVar1 != 0) {
      return;
    }
    psVar5 = &DAT_8009d284;
    param_1->action_state = 0;
    param_1->sub_action = 0;
    do {
      if ((&DAT_800bfab4)[*psVar5] != '\0') {
        *(s8*)(param_1 + (uint)param_1->sub_action + 0x22) = (char)iVar4;
        param_1->sub_action = param_1->sub_action + '\x01';
      }
      iVar4 = iVar4 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar4 < 10);
    iVar4 = 0;
    if (param_1->sub_action < 2) {
      param_1->counter1 = 0;
      return;
    }
    param_1->behavior_state = param_1->behavior_state + '\x01';
    if (param_1->sub_action != 0) {
      iVar3 = param_1;
      do {
        if ((&DAT_8009d284)[(uint)*(u8 *)(iVar3 + 0x22) * 2] == (u16)g_SpriteParam1) {
          param_1->counter1 = (char)iVar4;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar3 = param_1 + iVar4;
      } while (iVar4 < (int)(uint)param_1->sub_action);
    }
  }
  if (DAT_800bf80f != '\0') {
    return;
  }
  if ((_g_PadState & 0x800) == 0) {
    if ((_g_PadState & 0x400) == 0) {
LAB_800254f4:
      param_1->behavior_state = 0;
      return;
    }
    if (DAT_1f800232 == '\0') {
      return;
    }
    param_1->behavior_state = 3;
  }
  else {
    if (DAT_1f800232 == '\0') {
      return;
    }
    param_1->behavior_state = 2;
  }
LAB_800254dc:
  Audio_PlaySoundEffect(0x15,5,0);
  return;
}
