
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8008bbe8(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  
  pbVar5 = &DAT_80104368;
  iVar3 = FUN_8008c1ec(1,0x10,&DAT_80104368);
  if (iVar3 == 1) {
    iVar3 = FUN_8009a640(0x80104369,s_CD001_8001c438,5);
    uVar2 = _DAT_801043f4;
    if (iVar3 == 0) {
      iVar3 = FUN_8008c1ec(1,_DAT_801043f4,&DAT_80104368);
      if (iVar3 == 1) {
        if (1 < DAT_800abfc4) {
          FUN_8009a730(s_CD_newmedia__sarching_dir___8001c494);
        }
        iVar3 = 0;
        do {
          if (*pbVar5 == 0) break;
          iVar6 = iVar3 * 0x2c;
          *(undefined4 *)(iVar6 + -0x7fefd290) = *(undefined4 *)(pbVar5 + 2);
          iVar7 = iVar6 + -0x7fefd28c;
          bVar1 = pbVar5[6];
          iVar3 = iVar3 + 1;
          *(int *)(iVar6 + -0x7fefd298) = iVar3;
          *(uint *)(iVar6 + -0x7fefd294) = (uint)bVar1;
          FUN_8009a3e0(iVar7,pbVar5 + 8,*pbVar5);
          *(undefined1 *)(iVar7 + (uint)*pbVar5) = 0;
          pbVar5 = pbVar5 + (uint)*pbVar5 + (*pbVar5 & 1) + 8;
          if (1 < DAT_800abfc4) {
            FUN_8009a730(s__08x__04x__04x__s_8001c4b4,*(undefined4 *)(iVar6 + -0x7fefd290),
                         *(undefined4 *)(iVar6 + -0x7fefd298),*(undefined4 *)(iVar6 + -0x7fefd294),
                         iVar7);
          }
          if (0x7f < iVar3) goto LAB_8008be54;
        } while (pbVar5 < &DAT_80104b68);
        if (iVar3 < 0x80) {
          *(undefined4 *)(iVar3 * 0x2c + -0x7fefd294) = 0;
        }
LAB_8008be54:
        DAT_800ac2d4 = 0;
        uVar4 = 1;
        if (1 < DAT_800abfc4) {
          FUN_8009a730(s_CD_newmedia___d_dir_entries_foun_8001c4c8,iVar3);
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
        if (0 < DAT_800abfc4) {
          FUN_8009a730(s_CD_newmedia__Read_error__PT__08x_8001c470,uVar2);
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
      if (0 < DAT_800abfc4) {
        FUN_8009a730(s_CD_newmedia__Disc_format_error_i_8001c440);
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
    if (0 < DAT_800abfc4) {
      FUN_8009a730(s_CD_newmedia__Read_error_in_cd_re_8001c40c);
      uVar4 = 0;
    }
  }
  return uVar4;
}

