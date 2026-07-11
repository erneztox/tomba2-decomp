/**
 * @brief Audio command 1: calls Audio_ChannelKey(param1, param2)
 * @note Original: func_80091B18 at 0x80091B18
 */
// Audio_Cmd1



void Audio_Cmd1(s16 param_1,s16 param_2)

{
  Audio_ChannelKey((int)param_1,(int)param_2);
  return;
}
