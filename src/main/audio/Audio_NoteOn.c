/**
 * @brief Audio note on: sets channel->flags=param3, increments->flags, stores voice at [0x90]
 * @note Original: func_8008EDA0 at 0x8008EDA0
 */
// Audio_NoteOn



void FUN_8008eda0(s16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0;
  iVar2->flags = param_3;
  iVar2->flags = iVar2->flags + '\x01';
  uVar1 = FUN_80090160();
  iVar2->flags = uVar1;
  return;
}
