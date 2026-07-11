/**
 * @brief Sets SPU voice attribute variant: different offset calculation
 * @note Original: func_800900F0 at 0x800900F0
 */
// SPU_SetVoiceAttr2



void FUN_800900f0(s16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&g_AudioChannels + param_1 * 4) + param_2 * 0xb0;
  *(u8 *)(iVar2 + (uint)*(u8 *)(iVar2 + 0x17) + 0x37) = param_3;
  uVar1 = FUN_80090160();
  *(s32 *)(iVar2 + 0x90) = uVar1;
  return;
}
