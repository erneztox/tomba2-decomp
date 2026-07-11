/**
 * @brief BIOS data copy 2: copies words from DAT_8009c060 to DAT_0000df80
 * @note Original: func_8009C1FC at 0x8009C1FC
 */
// BIOS_CopyData2



void FUN_8009c1fc(void)

{
  s32 *puVar1;
  s32 *puVar2;
  
  puVar1 = (s32 *)&DAT_0000df80;
  puVar2 = &DAT_8009c060;
  do {
    *puVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (puVar2 != &DAT_8009c0d0);
  return;
}
