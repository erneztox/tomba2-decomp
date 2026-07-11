/**
 * @brief Sets active sound bank / BGM track for music switching
 * @note Original: func_80074BF8 at 0x80074BF8
 */
// Audio_SetBank



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_SetBank(uint param_1)

{
  u8 bVar1;
  s32 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 & 0x7f;
  if (uVar5 < 0xe) {
    switch(uVar5) {
    case 0:
    case 1:
    case 0xb:
    case 0xc:
      if (_DAT_800bed80 - 2 < 2) {
        return;
      }
    case 2:
    case 3:
      if (((_DAT_800bed80 - 4 < 4) || (_DAT_800bed80 == 10)) || (_DAT_800bed80 == 0xd)) {
        DAT_800be22a = DAT_800bed80 | 0x80;
      }
      break;
    default:
      if (_DAT_800bed80 - 1 < 3) {
        DAT_800be22a = (char)param_1;
        return;
      }
    }
    Audio_ReleaseChannel();
    _DAT_800bed80 = (u16)uVar5;
    CD_SetValidatedParam((&DAT_800be36c)[uVar5 * 8]);
    bVar1 = DAT_800fb164;
    if ((uVar5 < 4) || ((uVar5 < 0xd && (10 < uVar5)))) {
      bVar1 = DAT_800fb165;
    }
    if (g_GameState == '\x15') {
      bVar1 = DAT_800fb164;
    }
    iVar4 = (int)((((uint)bVar1 * 0x7f) / 9) * 0x10000) >> 0x10;
    Audio_SetChannelPos2((int)*(s16 *)(&DAT_800be368 + (s16)_DAT_800bed80 * 8),iVar4,iVar4);
    SPU_SetVolume((int)*(s16 *)(&DAT_800be368 + (s16)_DAT_800bed80 * 8),1,(param_1 & 0x80) == 0);
    iVar3 = 0;
    iVar4 = (int)*(s16 *)(&DAT_800be36c + (s16)_DAT_800bed80 * 8);
    _DAT_800bed78 = iVar4;
    if (0 < iVar4) {
      puVar2 = (s32 *)&DAT_800be238;
      do {
        *puVar2 = 0xffffffff;
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 3;
      } while (iVar3 < iVar4);
    }
  }
  return;
}
