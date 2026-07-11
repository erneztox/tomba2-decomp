/**
 * @brief Entity level check: tests g_GameState==5, checks Y position bounds
 * @note Original: func_800531DC at 0x800531DC
 */
// Entity_LevelCheck



#include "tomba.h"
void Entity_LevelCheck(int param_1)

{
  if (g_GameState == GAMESTATE_LEVEL) {
    if (2 < g_LevelId - 1) {
      return;
    }
    if (*(s16 *)(param_1 + 0x32) < -0x3b1a) {
      *(s16 *)(param_1 + 0x32) = 0xc4e6;
      return;
    }
  }
  else {
    if (5 < g_GameState) {
      if (g_GameState != 6) {
        return;
      }
      if (param_1->collision_dir == '\x0e') {
        if (-0x1dd6 < *(s16 *)(param_1 + 0x32)) {
          return;
        }
        *(s16 *)(param_1 + 0x32) = 0xe22b;
      }
      return;
    }
    if ((g_GameState == GAMESTATE_1) && (*(s16 *)(param_1 + 0x32) < -0x295a)) {
      *(s16 *)(param_1 + 0x32) = 0xd6a6;
      return;
    }
  }
  return;
}
