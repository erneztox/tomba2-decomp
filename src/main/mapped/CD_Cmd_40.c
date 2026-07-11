/**
 * @brief CD command with 0x40: calls BIOS stub with 0xF0000003, 0x40
 * @note Original: func_80089994 at 0x80089994
 */
// CD_Cmd_40



void FUN_80089994(void)

{
  FUN_800899f0(0xf0000003,0x40);
  return;
}
