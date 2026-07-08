
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80023d48(int param_1,int param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  int iVar16;
  ushort uVar17;
  short local_40;
  short local_38;
  short local_30;
  
  if ((param_4 & 1) == 0) {
    iVar11 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
    iVar6 = iVar11 * 0x10000 >> 0x10;
    iVar7 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
    sVar9 = (short)iVar7;
    iVar7 = iVar7 * 0x10000 >> 0x10;
    uVar17 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = (short)iVar11;
    uVar5 = FUN_80084080(iVar6 * iVar6 + iVar7 * iVar7);
    if (((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
        (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar5) {
      return 0;
    }
    uVar14 = (uint)*(ushort *)(param_1 + 0x32);
    uVar1 = *(ushort *)(param_3 + 0x30);
    uVar2 = *(ushort *)(param_1 + 0x86);
    uVar3 = *(ushort *)(param_2 + 0x84);
  }
  else {
    iVar6 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
    iVar16 = iVar6 * *(short *)(param_1 + 0x7c) >> 0xc;
    iVar6 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
    iVar11 = ((uint)*(ushort *)(param_1 + 0x2e) + iVar16) - (uint)*(ushort *)(param_3 + 0x2c);
    iVar7 = iVar11 * 0x10000 >> 0x10;
    iVar13 = iVar6 * *(short *)(param_1 + 0x7c) >> 0xc;
    iVar6 = ((uint)*(ushort *)(param_1 + 0x36) - iVar13) - (uint)*(ushort *)(param_3 + 0x34);
    sVar9 = (short)iVar6;
    iVar6 = iVar6 * 0x10000 >> 0x10;
    local_40 = (short)iVar16;
    local_30 = (short)iVar11;
    local_38 = (short)iVar13;
    uVar5 = FUN_80084080(iVar7 * iVar7 + iVar6 * iVar6);
    if (((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
        (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar5) {
      return 0;
    }
    uVar17 = *(ushort *)(param_1 + 0x7e);
    uVar1 = *(ushort *)(param_3 + 0x30);
    uVar2 = *(ushort *)(param_1 + 0x86);
    uVar3 = *(ushort *)(param_2 + 0x84);
    uVar14 = (uint)*(ushort *)(param_1 + 0x32) + (uint)uVar17;
  }
  iVar7 = uVar14 - uVar1;
  sVar12 = (short)iVar7;
  iVar6 = (uint)uVar3 + ((uint)uVar2 - (uint)*(ushort *)(param_1 + 0x84));
  sVar10 = (short)iVar6;
  if ((int)(short)uVar2 + (int)*(short *)(param_2 + 0x86) < (int)(iVar7 + iVar6 & 0xffffU)) {
    uVar8 = 0;
  }
  else {
    if (iVar7 * 0x10000 < 0) {
      sVar12 = -sVar12;
      sVar15 = -sVar10;
    }
    else {
      sVar10 = *(short *)(param_1 + 0x84) +
               (*(short *)(param_2 + 0x86) - *(short *)(param_2 + 0x84));
      sVar15 = sVar10;
    }
    _DAT_1f80009c = FUN_80085690(-(int)sVar9,(int)local_30);
    if ((((int)*(short *)(param_1 + 0x82) - (int)*(short *)(param_1 + 0x80)) +
        (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar5 < (int)sVar10 - (int)sVar12) {
      if (*(char *)(param_1 + 0xc) == '\x02') {
        cVar4 = FUN_80077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
        *(char *)(param_1 + 0x5f) = cVar4 + '\x02';
      }
      iVar6 = FUN_80083f50(_DAT_1f80009c);
      sVar9 = *(short *)(param_1 + 0x80);
      sVar12 = *(short *)(param_2 + 0x80);
      iVar7 = FUN_80083e80(_DAT_1f80009c);
      sVar10 = *(short *)(param_2 + 0x80);
      uVar8 = 1;
      *(short *)(param_1 + 0x2e) =
           (*(short *)(param_3 + 0x2c) + (short)(iVar6 * ((int)sVar9 + (int)sVar12) >> 0xc)) -
           local_40;
      *(short *)(param_1 + 0x36) =
           (*(short *)(param_3 + 0x34) -
           (short)(iVar7 * ((int)*(short *)(param_1 + 0x80) + (int)sVar10) >> 0xc)) - local_38;
    }
    else {
      iVar6 = (int)sVar15;
      uVar8 = 3;
      if (iVar6 < 1) {
        uVar8 = 2;
        iVar7 = *(int *)(param_3 + 0x30);
        *(undefined1 *)(param_1 + 0x29) = 1;
        *(int *)(param_1 + 0x30) = ((iVar7 + iVar6) - (int)(short)uVar17) * 0x10000;
      }
      else {
        *(int *)(param_1 + 0x30) =
             ((*(int *)(param_3 + 0x30) + iVar6) - (int)(short)uVar17) * 0x10000;
      }
    }
  }
  return uVar8;
}

