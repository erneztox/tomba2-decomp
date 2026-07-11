/**
 * @brief GPU sync wrapper: calls GPU sync and returns status
 * @note Original: func_8001DB38 at 0x8001DB38
 */
// Sys_GPUSync



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
void Sys_GPUSync(void)

{
  System_Reset(_g_CurrentEntity);
  if (_g_CurrentEntity->sprite_cmd != '\0') {
    g_DMAFlag = 1;
  }
  GPU_WaitVSync();
  return;
}
