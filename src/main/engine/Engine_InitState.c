/**
 * @brief Engine state init: resets frame counter, sets globals, zeros sprite flags
 * @note Original: func_80079464 at 0x80079464
 */
// Engine_InitState



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80079464(int param_1)

{
  _g_FrameCounter2 = 0;
  FUN_8009a480(0x45);
  _g_ScreenFlag = 0;
  _g_InputState = 0;
  _DAT_800bed8c = 1;
  _DAT_800bed88 = param_1 * 0x400 + -0x7fea9000;
  return;
}
