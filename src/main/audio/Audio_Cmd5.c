/**
 * @brief Audio command 5: builds param stack, calls Audio_VoiceSet1 with 3 params
 * @note Original: func_8008F120 at 0x8008F120
 */
// Audio_Cmd5



void Audio_Cmd5(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  s32 local_resc;
  u8 uStack00000013;
  u8 in_stack_00000030;
  
  local_resc = param_4;
  Audio_VoiceSet1((int)param_1,(int)param_2,(int)param_3,&local_resc);
  uStack00000013 = in_stack_00000030;
  Audio_VoiceSet2((int)param_1,(int)param_2,(int)param_3,&local_resc);
  return;
}
