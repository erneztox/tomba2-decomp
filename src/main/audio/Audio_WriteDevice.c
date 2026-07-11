/**
 * @brief Audio device write: if param<0x18, stores s16 at g_AudioChannels table
 * @note Original: func_80092E3C at 0x80092E3C
 */
// Audio_WriteDevice



s32 FUN_80092e3c(u16 param_1,s16 param_2,s16 param_3)

{
  u8 bVar1;
  s32 uVar2;
  int iVar3;
  
  if (param_1 < 0x18) {
    iVar3 = (int)(s16)param_1;
    *(s16 *)(&DAT_80105a2a + iVar3 * 0x10) = param_3;
    bVar1 = (&DAT_80105a08)[iVar3];
    uVar2 = 0;
    *(s16 *)(&DAT_80105a28 + iVar3 * 0x10) = param_2;
    (&DAT_80105a08)[iVar3] = bVar1 | 3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
