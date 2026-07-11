/**
 * @brief Sets SPU voice attribute: writes param to voice data at 0x80104C30 table
 * @note Original: func_8008EE10 at 0x8008EE10
 */
// SPU_SetVoiceAttr



void SPU_SetVoiceAttr(s16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0;
  iVar2->flags = param_3;
  iVar2->flags = iVar2->flags + '\x01';
  uVar1 = Audio_AllocVoice();
  iVar2->flags = uVar1;
  return;
}
