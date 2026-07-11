/**
 * @brief MDEC command 2: calls Audio_ChannelInit2 with param (same as Cmd1)
 * @note Original: func_8008DD7C at 0x8008DD7C
 */
// MDEC_Cmd2



void MDEC_Cmd2(s16 param_1)

{
  Audio_ChannelInit2((int)param_1);
  return;
}
