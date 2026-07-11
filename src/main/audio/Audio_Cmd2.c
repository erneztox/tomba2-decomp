/**
 * @brief Audio command 2: calls Audio_ChannelKey(param1, 0)
 * @note Original: func_80091AF0 at 0x80091AF0
 */
// Audio_Cmd2



void Audio_Cmd2(s16 param_1)

{
  Audio_ChannelKey((int)param_1,0);
  return;
}
