/**
 * @brief CD sync with timeout: polls timer, prints debug on timeout (0x3C0000 cycles), calls recovery
 * @note Original: func_8008B4B8 at 0x8008B4B8
 */
// CD_SyncWithTimeout



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 CD_SyncWithTimeout(int param_1)

{
  s32 bVar1;
  int iVar2;
  s32 uVar3;
  
  _DAT_80102748 = Timer_GetCounter(0xffffffff);
  _DAT_80102748 = _DAT_80102748 + 0x3c0;
  _DAT_8010274c = 0;
  _DAT_80102750 = s_CD_datasync_8001c368;
  do {
    iVar2 = Timer_GetCounter(0xffffffff);
    if ((_DAT_80102748 < iVar2) ||
       (iVar2 = _DAT_8010274c + 1, bVar1 = 0x3c0000 < _DAT_8010274c, _DAT_8010274c = iVar2, bVar1))
    {
      Debug_PrintString(s_CD_timeout__8001c25c);
      Debug_Printf(s__s___s__Sync__s__Ready__s_8001c26c,_DAT_80102750,
                   (&PTR_s_CdlSync_800abfe0)[DAT_800abfd9],(&PTR_s_NoIntr_800ac060)[DAT_800ac298],
                   (&PTR_s_NoIntr_800ac060)[DAT_800ac299]);
      CD_Reset();
      iVar2 = -1;
    }
    else {
      iVar2 = 0;
    }
    uVar3 = 0xffffffff;
  } while (((iVar2 == 0) && (uVar3 = 0, (*DAT_800ac2c4 & 0x1000000) != 0)) &&
          (uVar3 = 1, param_1 == 0));
  return uVar3;
}
