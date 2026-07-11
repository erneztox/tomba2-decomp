/**
 * @brief CD read main: full sector read pipeline
 * @note Original: func_8008A190 at 0x8008A190
 */
// CD_ReadMain



undefined4 FUN_8008a190(void)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte local_20;
  byte local_18->counter1;
  
  *DAT_800ac280 = 1;
  local_20 = *DAT_800ac28c & 7;
  uVar7 = 0;
  if (local_20 == 0) {
LAB_8008a6d4:
    uVar2 = 0;
  }
  else {
    while (iVar5 = 0, local_20 != (*DAT_800ac28c & 7)) {
      local_20 = *DAT_800ac28c & 7;
    }
    do {
      pbVar3 = local_18 + iVar5;
      iVar6 = iVar5;
      if ((*DAT_800ac280 & 0x20) == 0) break;
      iVar5 = iVar5 + 1;
      *pbVar3 = *DAT_800ac284;
      iVar6 = iVar5;
    } while (iVar5 < 8);
    for (; iVar5 < 8; iVar5 = iVar5 + 1) {
      local_18[iVar5] = 0;
    }
    *DAT_800ac280 = 1;
    *DAT_800ac28c = 7;
    *DAT_800ac288 = 7;
    if ((local_20 != 3) || (*(int *)(&DAT_800ac180 + (uint)DAT_800abfd9 * 4) != 0)) {
      if (((DAT_800abfc8 & 0x10) == 0) && ((local_18->type & 0x10) != 0)) {
        DAT_800abfd0 = DAT_800abfd0 + 1;
      }
      DAT_800abfc8 = (uint)local_18->type;
      DAT_800abfcc = (uint)local_18->flags;
      uVar7 = DAT_800abfc8 & 0x1d;
    }
    if (((local_20 == 5) && (0 < DAT_800abfc4)) &&
       (FUN_8009a730(s_DiskError__8001c288), 0 < DAT_800abfc4)) {
      FUN_8009a730(s_com__s_code___02x__02x__8001c294,(&PTR_s_CdlSync_800abfe0)[DAT_800abfd9],
                   DAT_800abfc8,DAT_800abfcc);
    }
    switch(local_20) {
    case 1:
      if ((uVar7 != 0) && (iVar6 == 1)) {
        uVar7 = 0;
      }
      DAT_800ac299 = 1;
      if (uVar7 != 0) {
        DAT_800ac299 = 5;
      }
      pbVar3 = &DAT_80102738;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      *DAT_800ac280 = 0;
      uVar2 = 4;
      *DAT_800ac28c = 0;
      break;
    case 2:
      DAT_800ac298 = 2;
      if (uVar7 != 0) {
        DAT_800ac298 = 5;
      }
      pbVar3 = &DAT_80102730;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 2;
      break;
    case 3:
      if (uVar7 == 0) {
        if (*(int *)(&DAT_800ac080 + (uint)DAT_800abfd9 * 4) == 0) {
          DAT_800ac298 = 2;
          pbVar3 = &DAT_80102730;
          pbVar4 = local_18;
          iVar5 = 7;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            iVar5 = iVar5 + -1;
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          } while (iVar5 != -1);
          uVar2 = 2;
        }
        else {
          DAT_800ac298 = 3;
          pbVar3 = &DAT_80102730;
          pbVar4 = local_18;
          iVar5 = 7;
          do {
            bVar1 = *pbVar4;
            pbVar4 = pbVar4 + 1;
            iVar5 = iVar5 + -1;
            *pbVar3 = bVar1;
            pbVar3 = pbVar3 + 1;
          } while (iVar5 != -1);
          uVar2 = 1;
        }
      }
      else {
        DAT_800ac298 = 5;
        pbVar3 = &DAT_80102730;
        pbVar4 = local_18;
        iVar5 = 7;
        do {
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          iVar5 = iVar5 + -1;
          *pbVar3 = bVar1;
          pbVar3 = pbVar3 + 1;
        } while (iVar5 != -1);
        uVar2 = 2;
      }
      break;
    case 4:
      pbVar3 = &DAT_80102740;
      DAT_800ac29a = 4;
      pbVar4 = local_18;
      DAT_800ac299 = 4;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      pbVar3 = &DAT_80102738;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 4;
      break;
    case 5:
      pbVar3 = &DAT_80102730;
      DAT_800ac299 = 5;
      pbVar4 = local_18;
      DAT_800ac298 = 5;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      pbVar3 = &DAT_80102738;
      pbVar4 = local_18;
      iVar5 = 7;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        iVar5 = iVar5 + -1;
        *pbVar3 = bVar1;
        pbVar3 = pbVar3 + 1;
      } while (iVar5 != -1);
      uVar2 = 6;
      break;
    default:
      FUN_8009b9b0(s_CDROM__unknown_intr_8001c2b0);
      FUN_8009a730(s___d__8001c2c4,local_20);
      goto LAB_8008a6d4;
    }
  }
  return uVar2;
}
