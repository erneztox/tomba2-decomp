// FUN_80069cd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80069cd8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  short *psVar12;
  short sVar13;
  
  iVar7 = _DAT_1f800280;
  psVar12 = (short *)(param_1 + 0x60);
  if (*(char *)(_DAT_1f800280 + 0xc) == '\x04') {
    switch(*(undefined1 *)(_DAT_1f800280 + 2)) {
    case 2:
    case 4:
    case 7:
      iVar8 = FUN_80083e80((int)*(short *)(param_2 + 0xc));
      iVar6 = FUN_80083e80((int)*(short *)(iVar7 + 0x56));
      iVar10 = (int)(short)(iVar8 * 0x6e >> 0xc);
      iVar8 = FUN_80083f50((int)*(short *)(iVar7 + 0x56));
      sVar9 = *(short *)(param_2 + 0x34) + (short)(iVar6 * iVar10 >> 0xc);
      sVar13 = *(short *)(param_2 + 0x2c) - (short)(iVar8 * iVar10 >> 0xc);
      iVar8 = FUN_80083f50((int)*(short *)(param_2 + 0xc));
      bVar5 = *(byte *)(param_1 + 0x46) >> 1;
      sVar11 = *(short *)(param_2 + 0x30) + (short)(iVar8 * 0x6e >> 0xc);
      if (1 < bVar5) {
        if (3 < bVar5) {
          return;
        }
        *(short *)(param_1 + 0x2e) = sVar13;
        *(short *)(param_1 + 0x36) = sVar9;
        *(short *)(param_1 + 0x32) =
             *(short *)(param_1 + 0x84) +
             sVar11 + (*(short *)(iVar7 + 0x86) - *(short *)(iVar7 + 0x84));
        return;
      }
      iVar8 = FUN_80083f50(*(short *)(param_1 + 0x78) + 0x800);
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(iVar7 + 0x80);
      iVar6 = FUN_80083e80(*(short *)(param_1 + 0x78) + 0x800);
      sVar3 = *(short *)(iVar7 + 0x80);
      *(short *)(param_1 + 0x2e) = sVar13 + (short)(iVar8 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x32) = sVar11;
      sVar9 = sVar9 - (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
      goto LAB_8006a050;
    default:
      *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2c) + *psVar12;
      *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x30) + *(short *)(param_1 + 0x62);
      sVar9 = *(short *)(param_2 + 0x34);
      break;
    case 8:
      if (DAT_800bf870 == '\v') {
        sVar9 = *(short *)(param_1 + 0x2e) - *(short *)(param_2 + 0x2c);
      }
      else {
        sVar9 = *(short *)(param_1 + 0x36) - *(short *)(param_2 + 0x34);
      }
      if ((DAT_800bf870 == '\f') && (*(char *)(_DAT_1f800280 + 3) == '\0')) {
        iVar7 = FUN_80083e80((int)*(short *)(param_2 + 0xc));
        uVar4 = -(iVar7 * sVar9);
      }
      else {
        iVar7 = FUN_80083e80((int)*(short *)(param_2 + 0xc));
        uVar4 = iVar7 * sVar9;
      }
      *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2c) + *psVar12;
      *(short *)(param_1 + 0x32) =
           *(short *)(param_2 + 0x30) + (short)(uVar4 >> 0xc) + *(short *)(param_1 + 0x84) + 0x40;
      sVar9 = *(short *)(param_2 + 0x34);
      break;
    case 0x17:
      iVar8 = (uint)*(ushort *)(param_1 + 0x62) -
              ((int)((uint)*(ushort *)(_DAT_1f800280 + 0x4a) << 0x10) >> 0x18);
      *(short *)(param_1 + 0x62) = (short)iVar8;
      if (iVar8 * 0x10000 >> 0x10 < -(int)*(short *)(iVar7 + 0x84)) {
        *(short *)(param_1 + 0x62) = -*(short *)(iVar7 + 0x84);
      }
      *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2c) + *psVar12;
      *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x30) + *(short *)(param_1 + 0x62);
      sVar9 = *(short *)(param_2 + 0x34);
    }
  }
  else {
    *(short *)(param_1 + 0x2e) = *(short *)(param_2 + 0x2c) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x30) + *(short *)(param_1 + 0x62);
    sVar9 = *(short *)(param_2 + 0x34);
  }
  sVar9 = sVar9 + *(short *)(param_1 + 100);
LAB_8006a050:
  *(short *)(param_1 + 0x36) = sVar9;
  return;
}

