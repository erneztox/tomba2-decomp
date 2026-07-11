#include "overlay.h"
/**
 * @brief Calls overlay init function at 0x8011534C then internal callback
 * @note Original: func_8001CB00 at 0x8001CB00
 */
// Sys_InitOverlay



void Sys_InitOverlay(void)

{
  Overlay_8011534c();
  Sys_NoOp();
  return;
}
