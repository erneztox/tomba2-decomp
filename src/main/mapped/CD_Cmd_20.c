/**
 * @brief CD command with 0x20: calls BIOS stub with 0xF0000003, 0x20
 * @note Original: func_8008996C at 0x8008996C
 */
// CD_Cmd_20



void FUN_8008996c(void)

{
  FUN_800899f0(0xf0000003,0x20);
  return;
}
