/**
 * @brief Audio main: full audio processing pipeline
 * @note Original: func_800931C0 at 0x800931C0
 */
// Audio_Main



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Audio_Main(void)

{
  uint uVar1;
  s16 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  u8 *pbVar9;
  int iVar10;
  s16 *puVar11;
  s16 *puVar12;
  u16 *puVar13;
  s16 *puVar14;
  s16 *puVar15;
  int local_68;
  uint local_64;
  s16 local_60;
  s16 local_5e;
  s16 local_54;
  int local_4c;
  s16 local_2e;
  s16 local_2c;
  
  _DAT_80105bac = _DAT_80105bac + 1 & 0xf;
  *(s32 *)(&DAT_80105bb0 + _DAT_80105bac * 4) = 0;
  uVar5 = 0;
  if ('\0' < DAT_80105cec) {
    iVar10 = -0x7fefab32;
    iVar7 = 0;
    do {
      CD_GetField(uVar5,iVar10);
      if (*(s16 *)(iVar7 + -0x7fefab32) == 0) {
        *(uint *)(&DAT_80105bb0 + _DAT_80105bac * 4) =
             *(uint *)(&DAT_80105bb0 + _DAT_80105bac * 4) | 1 << (uVar5 & 0x1f);
      }
      iVar10 = iVar10 + 0x38;
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 0x38;
    } while ((int)uVar5 < (int)DAT_80105cec);
  }
  iVar7 = 0;
  if (DAT_80105d28 == '\0') {
    uVar5 = 0xffffffff;
    puVar3 = (uint *)&DAT_80105bb0;
    do {
      iVar7 = iVar7 + 1;
      uVar5 = uVar5 & *puVar3;
      puVar3 = puVar3 + 1;
    } while (iVar7 < 0xf);
    uVar6 = 0;
    if ('\0' < DAT_80105cec) {
      pcVar8 = &DAT_801054e5;
      do {
        uVar4 = 1 << (uVar6 & 0x1f);
        if ((uVar5 & uVar4) != 0) {
          if (*pcVar8 == '\x02') {
            uVar1 = 0;
            if (0xf < (int)uVar6) {
              uVar4 = 0;
              uVar1 = 1 << (uVar6 - 0x10 & 0x1f);
            }
            MC_Seek(0,(uVar1 & 0xff) << 0x10 | (int)(s16)uVar4);
          }
          *pcVar8 = '\0';
        }
        uVar6 = uVar6 + 1;
        pcVar8 = pcVar8 + 0x38;
      } while ((int)uVar6 < (int)DAT_80105cec);
    }
  }
  iVar7 = 0;
  _DAT_801054b8 = _DAT_801054b8 & ~_DAT_80105bf0;
  iVar10 = 0;
  _DAT_801054ba = _DAT_801054ba & ~_DAT_80105bf2;
  do {
    if (*(s16 *)(iVar10 + -0x7fefab1a) != 0) {
      (*_DAT_80105ba8)(iVar7);
    }
    if (*(s16 *)(iVar10 + -0x7fefab0e) != 0) {
      (*_DAT_80105a20)(iVar7);
    }
    iVar7 = iVar7 + 1;
    iVar10 = iVar10 + 0x38;
  } while (iVar7 < 0x18);
  uVar5 = 0;
  pbVar9 = &DAT_80105a08;
  puVar2 = (s16 *)&DAT_80105a28;
  puVar15 = (s16 *)&DAT_80105a32;
  puVar14 = (s16 *)&DAT_80105a30;
  puVar13 = (u16 *)&DAT_80105a2e;
  puVar12 = (s16 *)&DAT_80105a2c;
  puVar11 = (s16 *)&DAT_80105a2a;
  do {
    local_68 = 1 << (uVar5 & 0x1f);
    local_64 = 0;
    if ((*pbVar9 & 1) != 0) {
      local_64 = 3;
      local_60 = *puVar2;
      local_5e = *puVar11;
    }
    if ((*pbVar9 & 4) != 0) {
      local_64 = local_64 | 0x10;
      local_54 = *puVar12;
    }
    if ((*pbVar9 & 8) != 0) {
      local_64 = local_64 | 0x80;
      local_4c = (uint)*puVar13 << 3;
    }
    if ((*pbVar9 & 0x10) != 0) {
      local_64 = local_64 | 0x60000;
      local_2e = *puVar14;
      local_2c = *puVar15;
    }
    if (local_64 != 0) {
      CD_XA_Main(&local_68);
    }
    *pbVar9 = 0;
    pbVar9 = pbVar9 + 1;
    puVar15 = puVar15 + 8;
    puVar14 = puVar14 + 8;
    puVar13 = puVar13 + 8;
    puVar12 = puVar12 + 8;
    puVar11 = puVar11 + 8;
    uVar5 = uVar5 + 1;
    puVar2 = puVar2 + 8;
  } while ((int)uVar5 < 0x18);
  CD_SPU_Write2(0,(uint)CONCAT12(DAT_80105bf2,_DAT_80105bf0));
  CD_SPU_Write2(1,(uint)CONCAT12(DAT_801054ba,_DAT_801054b8));
  CD_Cmd_CC_CD(8,(uint)CONCAT12(DAT_801054be,_DAT_801054bc));
  MC_Seek(8,(uint)CONCAT12(DAT_801054c2,_DAT_801054c0));
  _DAT_80105bf0 = 0;
  _DAT_80105bf2 = 0;
  _DAT_801054b8 = 0;
  _DAT_801054ba = 0;
  _DAT_801054c0 = 0;
  _DAT_801054c2 = 0;
  return;
}
