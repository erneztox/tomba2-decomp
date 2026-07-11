/**
 * @brief Second stage CD init: sets volume, filter, playback mode
 * @note Original: func_8008B19C at 0x8008B19C
 */
// CD_InitDrive2



undefined4 FUN_8008b19c(void)

{
  int iVar1;
  
  iVar1 = DAT_800ac294;
  if ((*(short *)(DAT_800ac294 + 0x1b8) == 0) && (*(short *)(DAT_800ac294 + 0x1ba) == 0)) {
    *(undefined2 *)(DAT_800ac294 + 0x180) = 0x3fff;
    *(undefined2 *)(iVar1 + 0x182) = 0x3fff;
  }
  iVar1 = DAT_800ac294;
  *(undefined2 *)(DAT_800ac294 + 0x1b0) = 0x3fff;
  *(undefined2 *)(iVar1 + 0x1b2) = 0x3fff;
  *(undefined2 *)(iVar1 + 0x1aa) = 0xc001;
  *DAT_800ac280 = 2;
  *DAT_800ac288 = 0x80;
  *DAT_800ac28c = 0;
  *DAT_800ac280 = 3;
  *DAT_800ac284 = 0x80;
  *DAT_800ac288 = 0;
  *DAT_800ac28c = 0x20;
  return 0;
}
