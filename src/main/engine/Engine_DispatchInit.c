/**
 * @brief Level-specific init dispatch from function table at 0x800A4AF8
 * @note Original: func_8006C77C at 0x8006C77C
 */
// Engine_DispatchInit



void Engine_DispatchInit(void)

{
  if (g_GameState != 3) {
    (**(code **)(&DAT_800a4af8 + (uint)g_GameState * 4))();
  }
  return;
}
