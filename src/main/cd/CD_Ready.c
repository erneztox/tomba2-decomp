/**
 * @brief CD-ROM ready check: polls CD status with callback processing
 * @note Original: func_8008A96C at 0x8008A96C
 */
// CD_Ready



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint CD_Ready(int param_1,u8 *param_2)

{
  u8 bVar1;
  u8 uVar2;
  s32 bVar3;
  int iVar4;
  uint uVar5;
  u8 *puVar6;
  
  _DAT_80102748 = Timer_GetCounter(0xffffffff);
  _DAT_80102748 = _DAT_80102748 + 0x3c0;
  _DAT_8010274c = 0;
  _DAT_80102750 = s_CD_ready_8001c2ec;
  while( true ) {
    iVar4 = Timer_GetCounter(0xffffffff);
    if ((_DAT_80102748 < iVar4) ||
       (iVar4 = _DAT_8010274c + 1, bVar3 = 0x3c0000 < _DAT_8010274c, _DAT_8010274c = iVar4, bVar3))
    {
      Debug_PrintString(s_CD_timeout__8001c25c);
      Debug_Printf(s__s___s__Sync__s__Ready__s_8001c26c,_DAT_80102750,
                   (&PTR_s_CdlSync_800abfe0)[DAT_800abfd9],(&PTR_s_NoIntr_800ac060)[DAT_800ac298],
                   (&PTR_s_NoIntr_800ac060)[DAT_800ac299]);
      CD_Reset();
      iVar4 = -1;
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    iVar4 = CD_GetStatus();
    if (iVar4 != 0) {
      bVar1 = *DAT_800ac280;
      while( true ) {
        uVar5 = CD_ReadMain();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_800abfc0 != (code *)0x0)) {
          (*DAT_800abfc0)(DAT_800ac299,&DAT_80102738);
        }
        if (((uVar5 & 2) != 0) && (DAT_800abfbc != (code *)0x0)) {
          (*DAT_800abfbc)(DAT_800ac298,&DAT_80102730);
        }
      }
      *DAT_800ac280 = bVar1 & 3;
    }
    uVar5 = (uint)DAT_800ac29a;
    if (uVar5 != 0) break;
    uVar5 = (uint)DAT_800ac299;
    if (uVar5 != 0) {
      DAT_800ac299 = 0;
      puVar6 = &DAT_80102738;
      iVar4 = 7;
      if (param_2 == (u8 *)0x0) {
        DAT_800ac299 = 0;
        return uVar5;
      }
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
        *param_2 = uVar2;
        param_2 = param_2 + 1;
      } while (iVar4 != -1);
      return uVar5;
    }
    if (param_1 != 0) {
      return 0;
    }
  }
  DAT_800ac29a = 0;
  puVar6 = &DAT_80102740;
  if (param_2 == (u8 *)0x0) {
    DAT_800ac29a = 0;
    return uVar5;
  }
  iVar4 = 7;
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  } while (iVar4 != -1);
  return uVar5;
}
