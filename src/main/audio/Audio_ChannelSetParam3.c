/**
 * @brief Audio channel param set: reads struct, calls FUN_80095d10, sets param at offset
 * @note Original: func_8008E790 at 0x8008E790
 */
// Audio_ChannelSetParam3



void FUN_8008e790(u16 param_1,s16 param_2,u8 param_3)

{
  u8 bVar1;
  int iVar2;
  s32 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(&g_AudioChannels + (s16)param_1 * 4) + param_2 * 0xb0;
  bVar1 = *(u8 *)(iVar4 + 0x17);
  iVar2 = iVar4 + (uint)bVar1;
  FUN_80095d10((int)(s16)(param_1 | param_2 << 8),(int)*(s8*)(iVar4 + 0x26),
               *(u8 *)(iVar2 + 0x37),param_3,*(u8 *)(iVar2 + 0x27));
  *(u16 *)((uint)bVar1 * 2 + iVar4 + 0x60) = (u16)param_3;
  uVar3 = FUN_80090160((int)(s16)param_1,(int)param_2);
  *(s32 *)(iVar4 + 0x90) = uVar3;
  return;
}
