/**
 * @brief Engine sprite update: checks g_EngineState flag, decrements counter, updates globals
 * @note Original: func_800788AC at 0x800788AC
 */
// Engine_UpdateSprites



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void FUN_800788ac(void)

{
  _g_ScreenFlag = _g_InputState;
  if (g_EngineState == '\x01') {
    _DAT_800bed8c = _DAT_800bed8c - 1;
    if (_DAT_800bed8c == 0) {
      if (_DAT_800bed88->flags == 0) {
        _DAT_800bed88 = _DAT_800bed88 + 2;
      }
      _g_InputState = *_DAT_800bed88;
      _DAT_800bed8c = _DAT_800bed88->flags;
      _DAT_800bed88 = _DAT_800bed88 + 2;
    }
  }
  else {
    _g_InputState = FUN_800524b4(0);
  }
  _g_PadState = _g_InputState & ~_g_ScreenFlag;
  _DAT_800f23a4 = _g_ScreenFlag & ~_g_InputState;
  FUN_8005229c();
  return;
}
