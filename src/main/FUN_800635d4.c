
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800635d4(int param_1,uint param_2)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  short *psVar13;
  
  if ((param_2 & 2) == 0) {
    psVar13 = (short *)((uint)*(byte *)(param_1 + 0x168) * 8 + -0x7ff5b8f0);
  }
  else {
    psVar13 = &DAT_800a4738;
  }
  uVar5 = psVar13[2];
  bVar1 = false;
  if ((param_2 & 1) == 0) {
    if ((_DAT_800ecf54 & (_DAT_1f80016c | _DAT_1f80016e)) != 0) {
      if (*(byte *)(param_1 + 0x147) == (*(byte *)(param_1 + 0x14a) & 1)) {
        bVar2 = *(char *)(param_1 + 0x169) + 1;
        *(byte *)(param_1 + 0x169) = bVar2;
        if (0x40 < bVar2) {
          *(undefined1 *)(param_1 + 0x169) = 0x40;
        }
      }
      else {
        bVar2 = *(char *)(param_1 + 0x169) - 1;
        *(byte *)(param_1 + 0x169) = bVar2;
        if (((int)((uint)bVar2 << 0x18) < 0) &&
           (*(undefined1 *)(param_1 + 0x169) = 0, *(char *)(param_1 + 0x168) == '\0')) {
          bVar1 = true;
        }
      }
    }
  }
  else {
    bVar2 = *(char *)(param_1 + 0x169) - 1;
    *(byte *)(param_1 + 0x169) = bVar2;
    if ((int)((uint)bVar2 << 0x18) < 0) {
      *(undefined1 *)(param_1 + 0x169) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x167) = 0;
  switch(*(undefined1 *)(param_1 + 7)) {
  case 0:
    *(undefined1 *)(param_1 + 0x166) = 0;
    if (*(byte *)(param_1 + 0x168) < 2) {
      if ((param_2 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x58) = 0x200;
        uVar4 = 0x60;
      }
      else {
        *(undefined2 *)(param_1 + 0x58) = 0x300;
        uVar4 = 0x70;
      }
      *(undefined2 *)(param_1 + 0x44) = uVar4;
      *(undefined1 *)(param_1 + 7) = 6;
      return;
    }
    *(undefined2 *)(param_1 + 0x58) = 0x300;
    uVar3 = 4;
LAB_80063a2c:
    *(ushort *)(param_1 + 0x44) = uVar5;
    *(undefined1 *)(param_1 + 7) = uVar3;
    return;
  case 1:
    *(undefined1 *)(param_1 + 0x167) = 1;
    uVar7 = (uint)*(ushort *)(param_1 + 0x58) - (uint)*(ushort *)(param_1 + 0x44);
    *(short *)(param_1 + 0x58) = (short)uVar7;
    if ((int)(uVar7 & 0xfff) <= (int)psVar13[3]) {
      if (2 < *(byte *)(param_1 + 0x168)) {
        *(undefined1 *)(param_1 + 0x166) = 4;
        *(undefined1 *)(param_1 + 7) = 4;
        return;
      }
      cVar8 = *(char *)(param_1 + 7);
      *(undefined2 *)(param_1 + 0x44) = 0;
      bVar2 = *(byte *)(param_1 + 0x166) | 1;
LAB_800638e0:
      *(byte *)(param_1 + 0x166) = bVar2;
      *(char *)(param_1 + 7) = cVar8 + '\x01';
      return;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x44) - (uint)(ushort)psVar13[1];
    *(short *)(param_1 + 0x44) = (short)iVar6;
    if (-1 < iVar6 * 0x10000) {
      return;
    }
    if ((*(byte *)(param_1 + 0x168) < 2) ||
       ((*(ushort *)(param_1 + 0x58) & 0xfff) <= (psVar13[3] + 0xf0U & 0xfff))) {
      *(byte *)(param_1 + 0x166) = *(byte *)(param_1 + 0x166) | 1;
    }
    cVar8 = *(char *)(param_1 + 7);
    *(undefined2 *)(param_1 + 0x44) = 0;
    break;
  case 2:
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + *(short *)(param_1 + 0x44);
    uVar9 = *(short *)(param_1 + 0x44) + *psVar13;
    *(ushort *)(param_1 + 0x44) = uVar9;
    if ((int)((uint)uVar5 << 0x10) < (int)((uint)uVar9 << 0x10)) {
      *(ushort *)(param_1 + 0x44) = uVar5;
    }
    if (0x7ff < (*(ushort *)(param_1 + 0x58) & 0xfff)) {
      return;
    }
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 0x14a);
      *(undefined1 *)(param_1 + 7) = 1;
LAB_80063a48:
      *(byte *)(param_1 + 0x147) = bVar2 & 1;
      *(short *)(param_1 + 0x58) = 0x1000 - *(short *)(param_1 + 0x58);
      return;
    }
    goto LAB_80063a94;
  case 3:
    uVar7 = (uint)*(ushort *)(param_1 + 0x58) + (uint)*(ushort *)(param_1 + 0x44);
    *(short *)(param_1 + 0x58) = (short)uVar7;
    if (0x1000 - psVar13[3] <= (int)(uVar7 & 0xfff)) {
      cVar8 = *(char *)(param_1 + 7);
      *(undefined2 *)(param_1 + 0x44) = 0;
      bVar2 = *(byte *)(param_1 + 0x166) | 2;
      goto LAB_800638e0;
    }
    iVar6 = (uint)*(ushort *)(param_1 + 0x44) - (uint)(ushort)psVar13[1];
    *(short *)(param_1 + 0x44) = (short)iVar6;
    if (-1 < iVar6 * 0x10000) {
      return;
    }
    if ((*(byte *)(param_1 + 0x168) < 2) ||
       ((0xf10U - psVar13[3] & 0xfff) <= (*(ushort *)(param_1 + 0x58) & 0xfff))) {
      *(byte *)(param_1 + 0x166) = *(byte *)(param_1 + 0x166) | 2;
    }
    cVar8 = *(char *)(param_1 + 7);
    *(undefined2 *)(param_1 + 0x44) = 0;
    break;
  case 4:
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x44);
    uVar9 = *(short *)(param_1 + 0x44) + *psVar13;
    *(ushort *)(param_1 + 0x44) = uVar9;
    if ((int)((uint)uVar5 << 0x10) < (int)((uint)uVar9 << 0x10)) {
      *(ushort *)(param_1 + 0x44) = uVar5;
    }
    if ((*(ushort *)(param_1 + 0x58) & 0xfff) < 0xd01) {
      return;
    }
    if (*(byte *)(param_1 + 0x166) < 3) goto LAB_80063b20;
    uVar11 = (uint)*(byte *)(param_1 + 0x168);
    uVar7 = (uint)(*(byte *)(param_1 + 0x169) >> 4);
    *(undefined1 *)(param_1 + 0x166) = 0;
    if (uVar7 != uVar11) {
      if ((int)((uVar7 - uVar11) * 0x1000000) < 1) {
        *(byte *)(param_1 + 0x168) = *(byte *)(param_1 + 0x168) - 1;
      }
      else {
        *(char *)(param_1 + 0x168) = (char)(uVar11 + 1);
        if (4 < (uVar11 + 1 & 0xff)) {
          *(undefined1 *)(param_1 + 0x168) = 4;
        }
      }
    }
    if (2 < *(byte *)(param_1 + 0x168)) {
      *(undefined1 *)(param_1 + 7) = 1;
      FUN_80074590(6,0,0);
      return;
    }
    uVar3 = 1;
    if ((param_2 & 2) != 0) goto LAB_80063a2c;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 0x14a);
      *(undefined1 *)(param_1 + 7) = 3;
      goto LAB_80063a48;
    }
    psVar13 = (short *)(((uint)*(byte *)(param_1 + 0x168) << 3 | 4) + 0x800a4710);
    if (*(short *)(param_1 + 0x44) <= *psVar13) {
      *(short *)(param_1 + 0x44) = *psVar13;
      goto LAB_80063b20;
    }
LAB_80063a94:
    cVar8 = *(char *)(param_1 + 7);
    break;
  case 5:
    *(undefined1 *)(param_1 + 0x167) = 1;
    sVar10 = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x44);
    uVar5 = *(short *)(param_1 + 0x44) - 0x20;
    goto LAB_80063b5c;
  case 6:
    uVar5 = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x58) = uVar5;
    if ((uVar5 & 0xfff) < 0xd01) {
      return;
    }
    if ((param_2 & 1) != 0) {
      *(undefined1 *)(param_1 + 7) = 7;
      return;
    }
LAB_80063b20:
    *(undefined1 *)(param_1 + 7) = 1;
    return;
  case 7:
    sVar12 = 0x12;
    if ((param_2 & 2) != 0) {
      sVar12 = 0x20;
    }
    *(undefined1 *)(param_1 + 0x167) = 1;
    sVar10 = *(short *)(param_1 + 0x58) - *(short *)(param_1 + 0x44);
    uVar5 = *(short *)(param_1 + 0x44) - sVar12;
LAB_80063b5c:
    *(ushort *)(param_1 + 0x44) = uVar5;
    *(short *)(param_1 + 0x58) = sVar10;
    if ((int)((uint)uVar5 << 0x10) < 0) {
      *(undefined2 *)(param_1 + 0x44) = 0;
      *(undefined1 *)(param_1 + 7) = 2;
      *(byte *)(param_1 + 0x166) = *(byte *)(param_1 + 0x166) | 1;
    }
  default:
    goto switchD_80063704_default;
  }
  *(char *)(param_1 + 7) = cVar8 + '\x01';
switchD_80063704_default:
  return;
}

