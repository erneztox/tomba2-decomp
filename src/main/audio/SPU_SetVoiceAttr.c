/**
 * @brief Sets SPU voice attribute: writes param to voice data at 0x80104C30 table
 * @note Original: func_8008EE10 at 0x8008EE10
 */
// SPU_SetVoiceAttr



void FUN_8008ee10(s16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0;
  *(u8 *)(iVar2 + 0x19) = param_3;
  *(s8*)(iVar2 + 0x1e) = *(s8*)(iVar2 + 0x1e) + '\x01';
  uVar1 = FUN_80090160();
  *(s32 *)(iVar2 + 0x90) = uVar1;
  return;
}
