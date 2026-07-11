/**
 * @brief Entity behavior type variant 5: complex dispatch
 * @note Original: func_80024F18 at 0x80024F18
 */
// Entity_BehaviorType5



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_80024f18(int param_1)

{
  u8 bVar1;
  s16 sVar2;
  s32 bVar3;
  
  if (_g_FrameCounter < (s16)(u16)g_ItemCount) {
    param_1->counter2 = param_1->counter2 | 1;
    DAT_800bfa5c = '-';
  }
  else if (DAT_800bfa5c == '\0') {
    DAT_800ed061 = 0;
  }
  else {
    DAT_800bfa5c = DAT_800bfa5c + -1;
    param_1->counter2 = param_1->counter2 | 1;
  }
  if ((((_DAT_800bf80c & 0xff00ff00) == 0) && (g_GameState != '\x03')) && (g_CurrentOverlay == '\0')) {
    param_1->flags = 1;
  }
  else {
    param_1->flags = 0;
  }
  if (DAT_800bf91e == -1) {
    *(u8 *)(param_1 + 10) = 1;
  }
  else {
    *(u8 *)(param_1 + 10) = 0;
  }
  bVar1 = param_1->sub_type;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return;
      }
      if (param_1->state == '\0') {
        param_1->state = 1;
        *(s16 *)(param_1 + 0x12) = 0x2d;
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if ((param_1->state == '\x01') &&
           (sVar2 = *(s16 *)(param_1 + 0x12), *(s16 *)(param_1 + 0x12) = sVar2 + -1, sVar2 == 1)
           ) {
          bVar3 = true;
          param_1->sprite_flags = param_1->sprite_flags & 0xfe;
        }
      }
      if (!bVar3) {
        return;
      }
      param_1->sub_type = 0;
      param_1->state = 0;
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf820 != '\0') {
      param_1->sub_type = 1;
      param_1->sprite_flags = param_1->sprite_flags | 1;
      return;
    }
    if ((param_1->sprite_flags & 1) == 0) {
      return;
    }
    param_1->sub_type = 2;
    return;
  }
  bVar1 = param_1->state;
  if (bVar1 == 1) {
    g_ItemFlag = g_ItemFlag + '\x01';
    sVar2 = *(s16 *)(param_1 + 0x10);
    *(s16 *)(param_1 + 0x10) = sVar2 + -1;
    bVar3 = false;
    if (sVar2 != 1) goto LAB_80025154;
    *(s16 *)(param_1 + 0x10) = 0x3c;
    param_1->state = param_1->state + '\x01';
  }
  else {
    if (1 < bVar1) {
      bVar3 = false;
      if ((bVar1 == 2) &&
         (sVar2 = *(s16 *)(param_1 + 0x10), *(s16 *)(param_1 + 0x10) = sVar2 + -1, sVar2 == 1))
      {
        bVar3 = true;
        param_1->sprite_flags = param_1->sprite_flags & 0xfe;
      }
      goto LAB_80025154;
    }
    bVar3 = false;
    if (bVar1 != 0) goto LAB_80025154;
    param_1->state = 1;
    FUN_8004ed94(0xb,0x40);
    *(s16 *)(param_1 + 0x10) = 0x10;
  }
  bVar3 = false;
LAB_80025154:
  if (bVar3) {
    param_1->sub_type = 0;
    param_1->state = 0;
    DAT_800bf820 = '\0';
  }
  return;
}
