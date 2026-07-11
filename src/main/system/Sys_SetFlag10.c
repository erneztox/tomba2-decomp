/**
 * @brief Sets bit 4 (0x10) on global system flag at 0x800BE0E4
 * @note Original: func_8001CF78 at 0x8001CF78
 */
// Sys_SetFlag10



void FUN_8001cf78(void)

{
  DAT_800be0e4 = DAT_800be0e4 | 0x10;
  return;
}
