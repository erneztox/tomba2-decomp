/**
 * @brief Overlay dispatcher: uses game state, looks up overlay ID from tables at 0x800A4F50/68
 * @note Original: func_80074F24 at 0x80074F24
 */
// Engine_DispatchOverlay



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Engine_DispatchOverlay(uint param_1)

{
  void *puVar1;
  u8 uVar2;
  
  if ((g_CurrentOverlay != '\x01') && (g_GameState != '\x15')) {
    if ((g_GameState == '\x0f') || (uVar2 = 0x2a, g_SubState == '\0')) {
      if ((((param_1 & 0xff) == 6) && (8 < g_LevelId)) && (g_LevelId < 0xf)) {
        uVar2 = 10;
        if (((int)(uint)_DAT_800bfe56 >> 6 & 1U) != 0) {
          uVar2 = 0x11;
        }
      }
      else {
        if (((int)(uint)_DAT_800bfe56 >> (param_1 & 0x1f) & 1U) == 0) {
          puVar1 = &DAT_800a4f50;
        }
        else {
          puVar1 = &DAT_800a4f68;
        }
        uVar2 = puVar1[param_1 & 0xff];
      }
    }
    Sys_OverlayDispatch(uVar2,1);
    DAT_800be22b = 0;
    DAT_1f80023b = uVar2;
  }
  return;
}
