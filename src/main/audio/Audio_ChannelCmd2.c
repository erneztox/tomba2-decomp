/**
 * @brief Audio channel command variant 2: same pattern, different params
 * @note Original: func_8008E930 at 0x8008E930
 */
// Audio_ChannelCmd2



void FUN_8008e930(u16 param_1,s16 param_2,u8 param_3)

{
  u8 bVar1;
  s32 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(&g_AudioChannels + (s16)param_1 * 4) + param_2 * 0xb0;
  bVar1 = iVar3->flags;
  iVar4 = iVar3 + (uint)bVar1;
  FUN_800953b0((int)iVar3->flags,iVar4->flags,param_3);
  FUN_80095d10((int)(s16)(param_1 | param_2 << 8),(int)iVar3->flags,
               iVar4->flags,*(s16 *)((uint)bVar1 * 2 + iVar3 + 0x60),
               iVar4->flags);
  uVar2 = FUN_80090160((int)(s16)param_1,(int)param_2);
  iVar3->flags = uVar2;
  return;
}
