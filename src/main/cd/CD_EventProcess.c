/**
 * @brief CD event processor: checks DAT_800ac2d4, dispatches events
 * @note Original: func_8008BF50 at 0x8008BF50
 */
// CD_EventProcess



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

s32 FUN_8008bf50(int param_1)

{
  int iVar1;
  u8 *pbVar2;
  int iVar3;
  u8 *puVar4;
  u8 *puVar5;
  
  if (param_1 != DAT_800ac2d4) {
    pbVar2 = &DAT_80104368;
    iVar1 = FUN_8008c1ec(1,*(s32 *)(param_1 * 0x2c + -0x7fefd2bc),&DAT_80104368);
    if (iVar1 != 1) {
      if (DAT_800abfc4 < 1) {
        return 0xffffffff;
      }
      FUN_8009a730(s_CD_cachefile__dir_not_found_8001c4ec);
      return 0xffffffff;
    }
    if (1 < DAT_800abfc4) {
      FUN_8009a730(s_CD_cachefile__searching____8001c50c);
    }
    iVar3 = 0;
    puVar5 = &DAT_80102768;
    puVar4 = &DAT_80102770;
    iVar1 = 0;
    while (*pbVar2 != 0) {
      FUN_8008a00c(*(s32 *)(pbVar2 + 2),puVar5);
      *(s32 *)(&DAT_8010276c + iVar1) = *(s32 *)(pbVar2 + 10);
      if (iVar3 == 0) {
        _DAT_80102770 = DAT_8001c528;
      }
      else if (iVar3 == 1) {
        _DAT_80102788 = DAT_8001c52c;
        DAT_8010278a = DAT_8001c52e;
      }
      else {
        FUN_8009a3e0(puVar4,pbVar2 + 0x21,pbVar2[0x20]);
        puVar4[pbVar2[0x20]] = 0;
      }
      if (1 < DAT_800abfc4) {
        FUN_8009a730(s___02x__02x__02x___8d__s_8001c530,(&DAT_80102768)[iVar1],
                     *(u8 *)(iVar1 + -0x7fefd897),*(u8 *)(iVar1 + -0x7fefd896),
                     *(s32 *)(&DAT_8010276c + iVar1),puVar4);
      }
      puVar4 = puVar4 + 0x18;
      iVar1 = iVar1 + 0x18;
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + *pbVar2;
      puVar5 = puVar5 + 0x18;
      if ((0x3f < iVar3) || ((u8 *)0x80104b67 < pbVar2)) break;
    }
    DAT_800ac2d4 = param_1;
    if (iVar3 < 0x40) {
      (&DAT_80102770)[iVar3 * 0x18] = 0;
    }
    if (DAT_800abfc4 < 2) {
      return 1;
    }
    FUN_8009a730(s_CD_cachefile___d_files_found_8001c54c,iVar3);
  }
  return 1;
}
