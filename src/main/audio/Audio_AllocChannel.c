/**
 * @brief Audio channel alloc: calls Audio_SetParam + Audio_AllocVoice, stores result at [0x90]
 * @note Original: func_8008EAD0 at 0x8008EAD0
 */
// Audio_AllocChannel



void Audio_AllocChannel(s16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&g_AudioChannels + param_1 * 4);
  Audio_SetParam(param_3,param_3);
  uVar1 = Audio_AllocVoice((int)param_1,(int)param_2);
  *(s32 *)(iVar2 + param_2 * 0xb0 + 0x90) = uVar1;
  return;
}
