/**
 * @brief Clears pause state: resets entity flag and global pause variable
 * @note Original: func_800269FC at 0x800269FC
 */
// Game_ClearPause



#include "tomba.h"
void FUN_800269fc(int param_1)

{
  if (param_1->flags != '\0') {
    param_1->flags = 0;
    return;
  }
  g_CurrentOverlay = 0;
  return;
}
