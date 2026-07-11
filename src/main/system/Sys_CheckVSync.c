/**
 * @brief Checks GPU VSync/interrupt state and triggers frame sync if needed
 * @note Original: func_8001CF94 at 0x8001CF94
 */
// Sys_CheckVSync



void FUN_8001cf94(uint param_1)

{
  if (((param_1 & 0x11) != 0) || ((param_1 & 2) == 0)) {
    FUN_80051f80(2);
  }
  return;
}
