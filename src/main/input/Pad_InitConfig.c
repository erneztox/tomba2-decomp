/**
 * @brief Pad config init: sets scratchpad input flags 0x8000/4000/2000/1000 based on param
 * @note Original: func_8007B2C0 at 0x8007B2C0
 */
// Pad_InitConfig



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Pad_InitConfig(int param_1)

{
  if (param_1 == 0) {
    _g_InputMask2 = 0x8000;
    _g_InputMask = 0x4000;
    _DAT_1f800174 = 0x2000;
    _DAT_1f800176 = 0x1000;
    return;
  }
  _g_InputMask2 = 0x1000;
  _g_InputMask = 0x2000;
  _DAT_1f800174 = 0x4000;
  _DAT_1f800176 = 0x8000;
  return;
}
