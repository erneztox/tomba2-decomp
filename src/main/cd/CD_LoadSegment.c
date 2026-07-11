/**
 * @brief CD level segment load: loads param-sized segment into CD buffer, returns offset
 * @note Original: func_80075448 at 0x80075448
 */
// CD_LoadSegment



void CD_LoadSegment(int param_1,s32 param_2,s16 param_3,s16 param_4)

{
  s16 sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = (uint)DAT_800fb164;
  iVar4 = (param_1 << 0x10) >> 0xd;
  *(s16 *)(&DAT_800be36a + iVar4) = param_4;
  sVar1 = Audio_SeqOpen(param_2,(int)param_4);
  iVar3 = (int)(((uVar2 * 0x7f) / 9) * 0x10000) >> 0x10;
  *(s16 *)(&DAT_800be368 + iVar4) = sVar1;
  sVar1 = *(s16 *)(&DAT_800be368 + iVar4);
  *(s16 *)(&DAT_800be36c + iVar4) = param_3;
  *(s16 *)(iVar4 + -0x7ff41c92) = 1;
  Audio_SetChannelPos2((int)sVar1,iVar3,iVar3);
  return;
}
