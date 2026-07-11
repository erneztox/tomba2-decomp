/**
 * @brief Audio command wrapper: calls Audio_ChannelProcess(param1, param2)
 * @note Original: func_800910F0 at 0x800910F0
 */
// Audio_Cmd4



void Audio_Cmd4(s16 param_1,s16 param_2)

{
  Audio_ChannelProcess((int)param_1,(int)param_2);
  return;
}
