/**
 * @brief Audio note on: sets channel[0x18]=param3, increments [0x1E], stores voice at [0x90]
 * @note Original: func_8008EDA0 at 0x8008EDA0
 */
// Audio_NoteOn



void FUN_8008eda0(s16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0;
  *(u8 *)(iVar2 + 0x18) = param_3;
  *(s8*)(iVar2 + 0x1e) = *(s8*)(iVar2 + 0x1e) + '\x01';
  uVar1 = FUN_80090160();
  *(s32 *)(iVar2 + 0x90) = uVar1;
  return;
}
