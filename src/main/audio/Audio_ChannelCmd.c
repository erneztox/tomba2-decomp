/**
 * @brief Audio channel command: looks up struct, calls FUN_80095d10 with channel data
 * @note Original: func_8008E860 at 0x8008E860
 */
// Audio_ChannelCmd



void FUN_8008e860(u16 param_1,s16 param_2,u8 param_3)

{
  s32 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(&g_AudioChannels + (s16)param_1 * 4) + param_2 * 0xb0;
  iVar3 = iVar2 + (uint)*(u8 *)(iVar2 + 0x17);
  FUN_80095d10((int)(s16)(param_1 | param_2 << 8),(int)*(s8*)(iVar2 + 0x26),
               *(u8 *)(iVar3 + 0x37),
               *(s16 *)((uint)*(u8 *)(iVar2 + 0x17) * 2 + iVar2 + 0x60),param_3);
  *(u8 *)(iVar3 + 0x27) = param_3;
  uVar1 = FUN_80090160((int)(s16)param_1,(int)param_2);
  *(s32 *)(iVar2 + 0x90) = uVar1;
  return;
}
