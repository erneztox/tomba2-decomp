/**
 * @brief Reads CD sector: sets up read command, waits for completion
 * @note Original: func_8008B720 at 0x8008B720
 */
// CD_ReadSector



undefined4 FUN_8008b720(undefined4 param_1,uint param_2)

{
  byte bVar1;
  
  *DAT_800ac280 = 0;
  *DAT_800ac28c = 0x80;
  *DAT_800ac2b4 = 0x21020843;
  *DAT_800ac290 = 0x1325;
  *DAT_800ac2b8 = *DAT_800ac2b8 | 0x8000;
  *DAT_800ac2bc = param_1;
  *DAT_800ac2c0 = param_2 | 0x10000;
  bVar1 = *DAT_800ac280;
  while ((bVar1 & 0x40) == 0) {
    bVar1 = *DAT_800ac280;
  }
  *DAT_800ac2c4 = 0x11400100;
  return 0;
}
