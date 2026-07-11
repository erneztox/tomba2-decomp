/**
 * @brief Sets game pause flag (0x800BF80F = 2), blocks input if already paused
 * @note Original: func_800269BC at 0x800269BC
 */
// Game_SetPause



#include "tomba.h"
void FUN_800269bc(int param_1)

{
  DAT_800bf80f = 2;
  if (g_CurrentOverlay == '\x01') {
    param_1->flags = 1;
    return;
  }
  g_CurrentOverlay = 2;
  return;
}
