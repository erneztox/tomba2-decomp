/**
 * @brief Audio CD command: calls Audio_ChannelEvent(0x21, param1, param2, param3)
 * @note Original: func_80094108 at 0x80094108
 */
// Audio_CD_Cmd



void Audio_CD_Cmd(s16 param_1,s16 param_2,s16 param_3)

{
  Audio_ChannelEvent(0x21,(int)param_1,(int)param_2,param_3);
  return;
}
