/**
 * @brief Second level init dispatch from function table at 0x800A4B50
 * @note Original: func_8006C7C4 at 0x8006C7C4
 */
// Engine_DispatchInit2



void FUN_8006c7c4(void)

{
  if (g_GameState != 3) {
    (**(code **)(&DAT_800a4b50 + (uint)g_GameState * 4))();
  }
  return;
}
