/**
 * @brief Loads UI textures to VRAM pages based on game state (3 variants)
 * @note Original: func_80067DA8 at 0x80067DA8
 */
// Texture_LoadUI



void Texture_LoadUI(void)

{
  void *puVar1;
  void *puVar2;
  void *puVar3;
  void *puVar4;
  void *puVar5;
  s16 local_20;
  s16 local_1e;
  s16 local_1c;
  s16 local_1a;
  
  if (g_SpriteParam2 == 1) {
    puVar1 = &DAT_800a4840;
    puVar3 = (void*)0x800a4860;
    puVar2 = (void*)0x800a4900;
    puVar5 = (void*)0x800a4920;
    puVar4 = (void*)0x800a49a0;
  }
  else if (g_SpriteParam2 < 2) {
    if (g_SpriteParam2 != 0) {
      return;
    }
    puVar1 = &DAT_800a4800;
    puVar3 = &DAT_800a4820;
    puVar2 = &DAT_800a48c0;
    puVar5 = &DAT_800a48e0;
    puVar4 = &DAT_800a4980;
  }
  else {
    if (g_SpriteParam2 != 2) {
      return;
    }
    puVar1 = &DAT_800a4880;
    puVar3 = (void*)0x800a48a0;
    puVar2 = (void*)0x800a4940;
    puVar5 = (void*)0x800a4960;
    puVar4 = (void*)0x800a49c0;
  }
  local_1c = 0x10;
  local_1a = 1;
  local_20 = 0x1f0;
  local_1e = 0x1e2;
  GPU_LoadImage(&local_20,puVar1);
  local_1e = 0x1e5;
  GPU_LoadImage(&local_20,puVar3);
  local_1e = 0x1c9;
  GPU_LoadImage(&local_20,puVar2);
  local_1e = 0x1d0;
  GPU_LoadImage(&local_20,puVar5);
  local_1e = 0x1b3;
  GPU_LoadImage(&local_20,puVar4);
  return;
}
