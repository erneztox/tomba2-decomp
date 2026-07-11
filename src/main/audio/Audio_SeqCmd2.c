/**
 * @brief Audio sequence command 2: calls Audio_VoiceSet1 with 4 params
 * @note Original: func_8008EFD0 at 0x8008EFD0
 */
// Audio_SeqCmd2



void Audio_SeqCmd2(s16 param_1,s16 param_2,s16 param_3,s32 param_4)

{
  s32 local_resc;
  s8 in_stack_00000030;
  
  local_resc = param_4;
  Audio_VoiceSet1((int)param_1,(int)param_2,(int)param_3,&local_resc);
  local_resc._0_2_ = CONCAT11(in_stack_00000030,(u8)local_resc);
  Audio_VoiceSet2((int)param_1,(int)param_2,(int)param_3,&local_resc);
  if (in_stack_00000030 == '\0') {
    Audio_GPU_Cmd0();
  }
  else if (in_stack_00000030 == '\x04') {
    Audio_GPU_Cmd1();
  }
  return;
}
