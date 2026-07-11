/**
 * @brief CD SPU poll: scans g_SPU_Regs+0xC table, checks DAT_800ac590 bitmask
 * @note Original: func_800998E4 at 0x800998E4
 */
// CD_SPU_Poll



void CD_SPU_Poll(u8 *param_1)

{
  s16 sVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    sVar1 = *(s16 *)(uVar2 * 0x10 + g_SPU_Regs + 0xc);
    if ((DAT_800ac590 & 1 << (uVar2 & 0x1f)) == 0) {
      if (sVar1 == 0) {
        *param_1 = 0;
      }
      else {
        *param_1 = 2;
      }
    }
    else if (sVar1 == 0) {
      *param_1 = 3;
    }
    else {
      *param_1 = 1;
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 1;
  } while ((int)uVar2 < 0x18);
  return;
}
