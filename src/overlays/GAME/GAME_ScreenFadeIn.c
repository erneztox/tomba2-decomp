// GAME_ScreenFadeIn (GAME_ScreenFadeIn) - Screen fade in effect: modulates entity color RGB channels up

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_ScreenFadeIn(void)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(_DAT_1f800138 + 0x6b) * -8 & 0xff;
  func_0x0007e9c8(uVar1 << 0x10 | uVar1 << 8 | uVar1,1,4);
  *(char *)(_DAT_1f800138 + 0x6b) = *(char *)(_DAT_1f800138 + 0x6b) + -1;
  return;
}

