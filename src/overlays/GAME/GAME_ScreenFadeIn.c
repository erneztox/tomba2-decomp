// GAME_ScreenFadeIn (GAME_ScreenFadeIn) - Screen fade in effect: modulates entity color RGB channels up

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_ScreenFadeIn(void)

{
  uint uVar1;
  
  uVar1 = (uint)*(u8 *)(g_OverlayEntity + 0x6b) * -8 & 0xff;
  GPU_SpriteOT(uVar1 << 0x10 | uVar1 << 8 | uVar1,1,4);
  *(char *)(g_OverlayEntity + 0x6b) = *(char *)(g_OverlayEntity + 0x6b) + -1;
  return;
}

