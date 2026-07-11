/**
 * @brief Second stage CD init: sets volume, filter, playback mode
 * @note Original: func_8008B19C at 0x8008B19C
 */
// CD_InitDrive2



s32 FUN_8008b19c(void)

{
  int iVar1;
  
  iVar1 = DAT_800ac294;
  if ((*(s16 *)(DAT_800ac294 + 0x1b8) == 0) && (*(s16 *)(DAT_800ac294 + 0x1ba) == 0)) {
    *(s16 *)(DAT_800ac294 + 0x180) = 0x3fff;
    *(s16 *)(iVar1 + 0x182) = 0x3fff;
  }
  iVar1 = DAT_800ac294;
  *(s16 *)(DAT_800ac294 + 0x1b0) = 0x3fff;
  *(s16 *)(iVar1 + 0x1b2) = 0x3fff;
  *(s16 *)(iVar1 + 0x1aa) = 0xc001;
  *DAT_800ac280 = 2;
  *DAT_800ac288 = 0x80;
  *DAT_800ac28c = 0;
  *DAT_800ac280 = 3;
  *DAT_800ac284 = 0x80;
  *DAT_800ac288 = 0;
  *DAT_800ac28c = 0x20;
  return 0;
}
