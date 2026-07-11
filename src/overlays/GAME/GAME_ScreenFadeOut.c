// GAME_ScreenFadeOut (GAME_ScreenFadeOut) - Screen fade out effect: modulates entity color RGB channels down

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GAME_ScreenFadeOut(void)

{
  uint uVar1;
  
  uVar1 = *(u8 *)(g_OverlayEntity + 0x6b) & 0x1f;
  GPU_SpriteOT(uVar1 << 0x13 | uVar1 << 0xb | uVar1 << 3,0,4);
  *(char *)(g_OverlayEntity + 0x6b) = *(char *)(g_OverlayEntity + 0x6b) + -1;
  return;
}

