/**
 * @brief Configures audio channel: sets flag 0x800BE22B, stores channel param, calls 0x80075CEC
 * @note Original: func_80075070 at 0x80075070
 */
// Audio_SetChannelConfig



void FUN_80075070(undefined1 param_1)

{
  DAT_800be22b = 1;
  DAT_1f80023b = param_1;
  FUN_80075cec(0);
  return;
}
