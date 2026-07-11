/**
 * @brief Iterates array at 0x800ec188 and renders 3D sprites via GPU_Render3DSprite
 * @note Original: func_8003F024 at 0x8003F024
 */
// Engine_Render3DSprites



void Engine_Render3DSprites(void)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = &g_SpriteQueue;
  do {
    if (*pcVar1 != '\0') {
      GPU_Render3DSprite(pcVar1);
    }
    iVar2 = iVar2 + 1;
    pcVar1 = pcVar1 + 0x40;
  } while (iVar2 < 0x28);
  return;
}
