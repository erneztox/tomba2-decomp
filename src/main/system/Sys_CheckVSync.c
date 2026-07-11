/**
 * @brief Checks GPU VSync/interrupt state and triggers frame sync if needed
 * @note Original: func_8001CF94 at 0x8001CF94
 */
// Sys_CheckVSync



void Sys_CheckVSync(uint param_1)

{
  if (((param_1 & 0x11) != 0) || ((param_1 & 2) == 0)) {
    Sys_TriggerIRQ(2);
  }
  return;
}
