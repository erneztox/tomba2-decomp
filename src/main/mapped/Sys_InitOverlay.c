/**
 * @brief Calls overlay init function at 0x8011534C then internal callback
 * @note Original: func_8001CB00 at 0x8001CB00
 */
// Sys_InitOverlay



void FUN_8001cb00(void)

{
  func_0x8011534c();
  FUN_8001cb98();
  return;
}
