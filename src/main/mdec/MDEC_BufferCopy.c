/**
 * @brief MDEC buffer copy: copies 16 words from param_1 to DAT_800acf58 buffer
 * @note Original: func_8009C6E0 at 0x8009C6E0
 */
// MDEC_BufferCopy



undefined4 * FUN_8009c6e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
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
  FUN_8009c9d0(&DAT_800acf54,0x20);
  FUN_8009c9d0(&DAT_800acfd8,0x20);
  return param_1;
}
