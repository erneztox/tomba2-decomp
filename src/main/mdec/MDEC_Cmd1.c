/**
 * @brief MDEC command 1: calls Audio_ChannelInit2 with param
 * @note Original: func_8008DDA0 at 0x8008DDA0
 */
// MDEC_Cmd1



void MDEC_Cmd1(s16 param_1)

{
  Audio_ChannelInit2((int)param_1);
  return;
}
