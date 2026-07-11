/**
 * @brief Audio channel play: reads u8, advances ptr, calls Audio_KeyOn2
 * @note Original: func_8008FB60 at 0x8008FB60
 */
// Audio_ChannelPlay



void Audio_ChannelPlay(u16 param_1,s16 param_2)

{
  u8 uVar1;
  s32 uVar2;
  s32 *puVar3;
  
  puVar3 = (s32 *)(*(int *)(&g_AudioChannels + (s16)param_1 * 4) + param_2 * 0xb0);
  uVar1 = *(u8 *)*puVar3;
  *puVar3 = (u8 *)*puVar3 + 1;
  Audio_KeyOn2((int)(s16)(param_1 | param_2 << 8),(int)*(s8*)((int)puVar3 + 0x26),
               *(u8 *)((int)puVar3 + *(u8 *)((int)puVar3 + 0x17) + 0x37),uVar1);
  uVar2 = Audio_AllocVoice((int)(s16)param_1,(int)param_2);
  puVar3[0x24] = uVar2;
  return;
}
