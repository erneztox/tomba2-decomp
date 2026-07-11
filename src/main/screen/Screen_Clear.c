/**
 * @brief Screen clear/fill: writes zeros to 0x801FE000-0x801FFFFE (framebuffer region)
 * @note Original: func_800506D0 at 0x800506D0
 */
// Screen_Clear



void FUN_800506d0(void)

{
  s16 sVar1;
  s16 *psVar2;
  s16 *psVar3;
  
  psVar3 = (s16 *)&DAT_801fe000;
  psVar2 = (s16 *)&DAT_801fe002;
  do {
    if ((*psVar3 == 1) && (sVar1 = *psVar2, *psVar2 = sVar1 + -1, sVar1 == 1)) {
      *psVar3 = 2;
    }
    psVar3 = psVar3 + 0x38;
    psVar2 = psVar2 + 0x38;
  } while (psVar3 < (s16 *)0x801fe150);
  return;
}
