/**
 * @brief Entity overlay dispatch: calls overlay func based on g_GameState state
 * @note Original: func_800662D8 at 0x800662D8
 */
// Entity_OverlayDispatch



#include "tomba.h"
void FUN_800662d8(int param_1,s32 param_2)

{
  if (param_1->timer_main == 0) {
    param_2 = 0;
  }
  if (g_GameState == 6) {
    func_0x80110f28(param_1,param_2);
  }
  else {
    if (g_GameState < 7) {
      if (g_GameState == 0) {
        func_0x80114c5c();
        return;
      }
    }
    else if (g_GameState == 8) {
      if (g_SubState != '\0') {
        g_LevelId = 0x11;
        return;
      }
      g_LevelId = 1;
      return;
    }
    if ((&DAT_800a47e8)[g_GameState] != -1) {
      g_LevelId = (&DAT_800a47e8)[g_GameState];
    }
  }
  return;
}
