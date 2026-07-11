/**
 * @brief Audio channel config variant: calls 0x800750D8 with flag=1
 * @note Original: func_800750A4 at 0x800750A4
 */
// Audio_SetChannelConfig2



void Audio_SetChannelConfig2(u8 param_1)

{
  Sys_OverlayDispatch(param_1,1);
  DAT_1f80023b = param_1;
  return;
}
