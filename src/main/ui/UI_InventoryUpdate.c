/**
 * @brief UI inventory updater: checks g_ItemType/d state
 * @note Original: func_80049F80 at 0x80049F80
 */
// UI_InventoryUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 UI_InventoryUpdate(int param_1)

{
  u8 bVar1;
  
  if (param_1->sub_action == '\0') {
    if (g_ItemType == '\x10') {
      bVar1 = g_ItemCount + 1;
    }
    else {
      bVar1 = g_ItemCount + 1;
      if (7 < g_ItemCount) {
        g_ItemType = g_ItemType + '\x01';
        bVar1 = g_ItemCount;
      }
    }
    g_ItemCount = bVar1;
    param_1->timer1 = 0;
    param_1->sub_action = param_1->sub_action + '\x01';
    param_1->timer2 = g_ItemCount - _g_FrameCounter;
    DAT_800ed061 = DAT_800ed061 | 2;
  }
  else if (param_1->sub_action != '\x01') {
    return 0;
  }
  if (param_1->timer2 == 0) {
    if (g_ItemCount == _g_FrameCounter) {
      Entity_SpawnDropItem(param_1,0);
    }
  }
  else {
    if ((s16)_g_FrameCounter < (s16)(u16)g_ItemCount) {
      if ((s16)_g_FrameCounter < 1) {
        param_1->timer2 = 0;
        param_1->timer1 = 0;
        return 1;
      }
      if (param_1->timer1 == 0) {
        param_1->timer2 = param_1->timer2 + -1;
        param_1->timer1 = 4;
        _DAT_800e7ff0 = _DAT_800e7ff0 + 1;
        _g_FrameCounter = _g_FrameCounter + 1;
      }
      else {
        param_1->timer1 = param_1->timer1 + -1;
      }
      return 0;
    }
    param_1->timer2 = 0;
    param_1->timer1 = 0;
  }
  DAT_800ed061 = DAT_800ed061 & 0xfd;
  return 1;
}
