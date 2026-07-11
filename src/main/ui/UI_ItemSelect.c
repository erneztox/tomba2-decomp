/**
 * @brief UI item selector: switch on entity[0x60] value, selects item
 * @note Original: func_8004E29C at 0x8004E29C
 */
// UI_ItemSelect



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
s32 UI_ItemSelect(int param_1)

{
  s32 uVar1;
  
  switch((int)((param_1->draw_x - 0x6f) * 0x10000) >> 0x10) {
  case 0:
  case 1:
    if (g_GameState != '\x01') {
      return 0;
    }
    if (DAT_1f800207 != '\v') {
      return 0;
    }
    if (0x1494 < _g_PlayerPosZ) {
      return 0;
    }
    if (DAT_800bf916 != '\0') {
      return 2;
    }
    uVar1 = 0x62;
    break;
  case 2:
  case 3:
    if (g_GameState != '\x04') {
      return 0;
    }
    if (DAT_1f800207 != '\x0f') {
      return 0;
    }
    if (0x16d1 < _g_PlayerPosZ) {
      return 0;
    }
    if (DAT_800bf917 != '\0') {
      return 2;
    }
    uVar1 = 99;
    break;
  case 4:
  case 5:
    if (g_GameState != '\x06') {
      return 0;
    }
    if (DAT_1f800207 != '\x0e') {
      return 0;
    }
    if (_g_PlayerPosZ < 0x5fe0) {
      return 0;
    }
    if (DAT_800bf918 != '\0') {
      return 2;
    }
    uVar1 = 100;
    break;
  default:
    return 0;
  }
  Event_TriggerCollectible(uVar1);
  return 1;
}
