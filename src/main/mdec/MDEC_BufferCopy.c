/**
 * @brief MDEC buffer copy: copies 16 words from param_1 to DAT_800acf58 buffer
 * @note Original: func_8009C6E0 at 0x8009C6E0
 */
// MDEC_BufferCopy



s32 * MDEC_BufferCopy(s32 *param_1)

{
  s32 uVar1;
  int iVar2;
  s32 *puVar3;
  s32 *puVar4;
  
  puVar4 = &DAT_800acf58;
  iVar2 = 0xf;
  puVar3 = param_1;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  puVar4 = &DAT_800acf98;
  puVar3 = param_1 + 0x10;
  iVar2 = 0xf;
  do {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
    *puVar4 = uVar1;
    puVar4 = puVar4 + 1;
  } while (iVar2 != -1);
  MDEC_SetupTransfer(&DAT_800acf54,0x20);
  MDEC_SetupTransfer(&DAT_800acfd8,0x20);
  return param_1;
}
