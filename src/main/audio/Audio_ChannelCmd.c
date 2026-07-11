/**
 * @brief Audio channel command: looks up struct, calls Audio_VoiceParam2 with channel data
 * @note Original: func_8008E860 at 0x8008E860
 */
// Audio_ChannelCmd



void Audio_ChannelCmd(u16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(&g_AudioChannels + (s16)param_1 * 4) + param_2 * 0xb0;
  iVar3 = iVar2 + (uint)iVar2->flags;
  Audio_VoiceParam2((int)(s16)(param_1 | param_2 << 8),(int)iVar2->flags,
               iVar3->flags,
               *(s16 *)((uint)iVar2->flags * 2 + iVar2 + 0x60),param_3);
  iVar3->flags = param_3;
  uVar1 = Audio_AllocVoice((int)(s16)param_1,(int)param_2);
  iVar2->flags = uVar1;
  return;
}
