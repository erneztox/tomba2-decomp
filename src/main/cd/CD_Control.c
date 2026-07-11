/**
 * @brief CD-ROM control command: sends command with parameters, waits for completion
 * @note Original: func_8008AC34 at 0x8008AC34
 */
// CD_Control



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 CD_Control(u8 param_1,u8 *param_2,u8 *param_3,int param_4)

{
  u8 bVar1;
  u8 uVar2;
  s32 bVar3;
  s32 uVar4;
  u8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (1 < DAT_800abfc4) {
    Debug_Printf(s__s____8001c2f8,(&PTR_s_CdlSync_800abfe0)[param_1]);
  }
  if ((*(int *)(&DAT_800ac200 + (uint)param_1 * 4) == 0) || (param_2 != (u8 *)0x0)) {
    CD_Sync(0,0);
    if (param_1 == 2) {
      iVar7 = 0;
      puVar5 = param_2;
      do {
        (&DAT_800abfd4)[iVar7] = *puVar5;
        iVar7 = iVar7 + 1;
        puVar5 = param_2 + iVar7;
      } while (iVar7 < 4);
    }
    if (param_1 == 0xe) {
      DAT_800abfd8 = *param_2;
    }
    iVar7 = (uint)param_1 * 4;
    DAT_800ac298 = 0;
    if (*(int *)(&DAT_800ac100 + iVar7) != 0) {
      DAT_800ac299 = 0;
    }
    *DAT_800ac280 = 0;
    iVar8 = 0;
    puVar5 = param_2;
    if (0 < *(int *)(&DAT_800ac200 + iVar7)) {
      do {
        *DAT_800ac288 = *puVar5;
        iVar8 = iVar8 + 1;
        puVar5 = param_2 + iVar8;
      } while (iVar8 < *(int *)(&DAT_800ac200 + iVar7));
    }
    DAT_800abfd9 = param_1;
    *DAT_800ac284 = param_1;
    uVar4 = 0;
    if (param_4 == 0) {
      _DAT_80102748 = Timer_GetCounter(0xffffffff);
      _DAT_80102748 = _DAT_80102748 + 0x3c0;
      _DAT_8010274c = 0;
      _DAT_80102750 = s_CD_cw_8001c310;
      while (DAT_800ac298 == 0) {
        iVar7 = Timer_GetCounter(0xffffffff);
        if ((_DAT_80102748 < iVar7) ||
           (iVar7 = _DAT_8010274c + 1, bVar3 = 0x3c0000 < _DAT_8010274c, _DAT_8010274c = iVar7,
           bVar3)) {
          Debug_PrintString(s_CD_timeout__8001c25c);
          Debug_Printf(s__s___s__Sync__s__Ready__s_8001c26c,_DAT_80102750,
                       (&PTR_s_CdlSync_800abfe0)[DAT_800abfd9],
                       (&PTR_s_NoIntr_800ac060)[DAT_800ac298],(&PTR_s_NoIntr_800ac060)[DAT_800ac299]
                      );
          CD_Reset();
          iVar7 = -1;
        }
        else {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          return 0xffffffff;
        }
        iVar7 = CD_GetStatus();
        if (iVar7 != 0) {
          bVar1 = *DAT_800ac280;
          while( true ) {
            uVar6 = CD_ReadMain();
            if (uVar6 == 0) break;
            if (((uVar6 & 4) != 0) && (DAT_800abfc0 != (code *)0x0)) {
              (*DAT_800abfc0)(DAT_800ac299,&DAT_80102738);
            }
            if (((uVar6 & 2) != 0) && (DAT_800abfbc != (code *)0x0)) {
              (*DAT_800abfbc)(DAT_800ac298,&DAT_80102730);
            }
          }
          *DAT_800ac280 = bVar1 & 3;
        }
      }
      puVar5 = &DAT_80102730;
      iVar7 = 7;
      if (param_3 != (u8 *)0x0) {
        do {
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + -1;
          *param_3 = uVar2;
          param_3 = param_3 + 1;
        } while (iVar7 != -1);
      }
      uVar4 = 0;
      if (DAT_800ac298 == 5) {
        uVar4 = 0xffffffff;
      }
    }
  }
  else {
    uVar4 = 0xfffffffe;
    if (0 < DAT_800abfc4) {
      Debug_Printf(s__s__no_param_8001c300,(&PTR_s_CdlSync_800abfe0)[param_1]);
      uVar4 = 0xfffffffe;
    }
  }
  return uVar4;
}
