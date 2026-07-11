/**
 * @brief Engine pool updater: checks DAT_800ed05a, updates pools
 * @note Original: func_80025588 at 0x80025588
 */
// Engine_PoolUpdate



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80025588(void)

{
  s32 bVar1;
  int iVar2;
  s32 uVar3;
  int iVar4;
  
  if (DAT_800ed05a != 1) {
    if (1 < DAT_800ed05a) {
      return;
    }
    if (DAT_800ed05a != 0) {
      return;
    }
    DAT_800ed05a = 1;
    DAT_800ed061 = 0;
    DAT_800bfa5c = 0;
    _DAT_800ed094 = _g_OT_Data;
    FUN_80024e00(0x800ed058);
  }
  if ((DAT_800ed06c == '\0') && (DAT_800ed06d != 0)) {
    FUN_80040aa4(DAT_800ed06e,DAT_800ed074);
    uVar3 = 2;
    if ((DAT_800ed074 == '\0') || (uVar3 = 3, DAT_800ed074 == '\x01')) {
      FUN_80074bf8(uVar3);
    }
    if (0 < (int)(DAT_800ed06d - 1)) {
      iVar2 = 0;
      iVar4 = 1;
      do {
        (&DAT_800ed06e)[iVar2] = (&DAT_800ed06e)[iVar4];
        (&DAT_800ed074)[iVar2] = (&DAT_800ed074)[iVar4];
        bVar1 = iVar4 < (int)(DAT_800ed06d - 1);
        iVar2 = iVar4;
        iVar4 = iVar4 + 1;
      } while (bVar1);
    }
    DAT_800ed06d = DAT_800ed06d - 1;
    DAT_800ed06c = DAT_800ed06c + '\x01';
  }
  FUN_80024f18(0x800ed058);
  if (g_GameState == 3) goto LAB_80025728;
  if (g_GameState < 4) {
    if (g_GameState == 2) {
LAB_800256e8:
      if ((g_ActionFlag == '\0') && ((_g_PadState & 0xc00) != 0)) {
        DAT_800ed060 = '\x01' - DAT_800ed060;
      }
      goto LAB_80025728;
    }
  }
  else {
    if (g_GameState == 7) goto LAB_800256e8;
    if (g_GameState == 0x14) goto LAB_80025728;
  }
  FUN_800251f0(0x800ed058);
LAB_80025728:
  FUN_80077b5c(0x800ed058);
  return;
}
