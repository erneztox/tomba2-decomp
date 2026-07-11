/**
 * @brief Event data loader: loads 64+64 bytes, dispatches by type
 * @note Original: func_80036BAC at 0x80036BAC
 */
// Event_LoadData



void FUN_80036bac(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  s8 cVar4;
  char *pcVar5;
  int iVar6;
  u8 *puVar7;
  u8 auStack_a8 [64];
  u8 auStack_68 [64];
  
  iVar6 = 0;
  puVar7 = &g_GameState;
  pcVar5 = &DAT_800a2be8;
  do {
    if ((puVar7[0x244] != '\0') && (cVar4 = '\0', *pcVar5 == '\0')) {
      iVar2 = 0;
      FUN_80036b28(*(s32 *)(pcVar5 + 4),auStack_a8);
      pcVar3 = &DAT_800a2be8;
      do {
        if (((&DAT_800bfab4)[iVar2] != '\0') && (*pcVar3 == '\0')) {
          FUN_80036b28(*(s32 *)(pcVar3 + 4),auStack_68);
          iVar1 = FUN_8009a540(auStack_a8,auStack_68);
          if (0 < iVar1) {
            cVar4 = cVar4 + '\x01';
          }
        }
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 0xc;
      } while (iVar2 < 0x100);
      puVar7[0x344] = cVar4;
    }
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0xc;
  } while (iVar6 < 0x100);
  iVar6 = 0;
  puVar7 = &g_GameState;
  pcVar5 = &DAT_800a2be8;
  do {
    if ((puVar7[0x244] != '\0') && (cVar4 = '\0', *pcVar5 != '\0')) {
      iVar2 = 0;
      FUN_80036b28(*(s32 *)(pcVar5 + 4),auStack_a8);
      pcVar3 = &DAT_800a2be8;
      do {
        if (((&DAT_800bfab4)[iVar2] != '\0') && (*pcVar3 != '\0')) {
          FUN_80036b28(*(s32 *)(pcVar3 + 4),auStack_68);
          iVar1 = FUN_8009a540(auStack_a8,auStack_68);
          if (0 < iVar1) {
            cVar4 = cVar4 + '\x01';
          }
        }
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 0xc;
      } while (iVar2 < 0x100);
      puVar7[0x344] = cVar4;
    }
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 0xc;
  } while (iVar6 < 0x100);
  return;
}
