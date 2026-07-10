// FUN_8001ff7c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8001ff7c(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = _DAT_1f80009c;
  if (param_1[0x144] == 1) {
    bVar1 = *param_2;
    if (((bVar1 & 0x18) == 0) && (param_3 < 2)) {
      if ((param_1[0x61] & 1) == 0) {
        FUN_8001fdb4(param_2,1,3,0x1e);
        return 1;
      }
      if ((bVar1 != 1) && (bVar1 != 3)) {
        return 2;
      }
      *param_2 = 3;
      param_2[4] = 2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[0x2b] = (byte)(iVar7 + 0x800 >> 4);
      return 2;
    }
  }
  else if (param_1[0x144] == 2) {
    if ((*param_2 & 10) == 0) {
      *param_2 = 3;
      param_2[4] = 2;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[0x2b] = (byte)(iVar7 + 0x800 >> 4);
    }
    else if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
      if (param_4 != 1) {
        return 2;
      }
      iVar7 = FUN_80083f50(_DAT_1f80009c);
      sVar2 = *(short *)(param_1 + 0x80);
      sVar3 = *(short *)(param_2 + 0x80);
      iVar6 = FUN_80083e80(_DAT_1f80009c);
      sVar4 = *(short *)(param_1 + 0x80);
      *(short *)(param_2 + 0x2e) =
           *(short *)(param_1 + 0x2e) - (short)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
      *(short *)(param_2 + 0x36) =
           *(short *)(param_1 + 0x36) +
           (short)(iVar6 * ((int)sVar4 + (int)*(short *)(param_2 + 0x80)) >> 0xc);
    }
    return 2;
  }
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
    return 0;
  }
  if (param_4 != 2) {
    if (param_4 < 3) {
      if (param_4 == 1) {
        iVar7 = FUN_80083f50(_DAT_1f80009c);
        sVar2 = *(short *)(param_1 + 0x80);
        sVar3 = *(short *)(param_2 + 0x80);
        iVar6 = FUN_80083e80(_DAT_1f80009c);
        sVar4 = *(short *)(param_1 + 0x80);
        *(short *)(param_2 + 0x2e) =
             *(short *)(param_1 + 0x2e) - (short)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
        *(short *)(param_2 + 0x36) =
             *(short *)(param_1 + 0x36) +
             (short)(iVar6 * ((int)sVar4 + (int)*(short *)(param_2 + 0x80)) >> 0xc);
      }
      goto LAB_80020260;
    }
    if (param_4 != 3) goto LAB_80020260;
    _DAT_1f80009c = (int)*(short *)(param_1 + 0x140);
  }
  if ((*param_1 & 4) == 0) {
    iVar7 = FUN_80083f50(_DAT_1f80009c);
    sVar2 = *(short *)(param_1 + 0x80);
    sVar3 = *(short *)(param_2 + 0x80);
    iVar6 = FUN_80083e80(_DAT_1f80009c);
    sVar4 = *(short *)(param_2 + 0x80);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar7 * ((int)sVar2 + (int)sVar3) >> 0xc);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) -
         (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar4) >> 0xc);
  }
LAB_80020260:
  param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) != 0) {
    return 0;
  }
  if (DAT_800bfe55 != '\0') {
    return 0;
  }
  if (param_1[0x144] == 2) {
    return 0;
  }
  if (*(short *)(param_1 + 0x16e) != 0) {
    if (DAT_800bf839 != '\0') {
      return 0;
    }
    if (DAT_1f800137 != '\0') {
      return 0;
    }
    if ((*param_1 & 2) != 0) {
      return 0;
    }
    if ((*param_2 & 2) != 0) {
      return 0;
    }
    iVar7 = 1;
    *param_1 = *param_1 | 2;
    if (*(short *)(param_1 + 0x17e) < 0) {
      iVar7 = 2;
    }
    uVar5 = *(ushort *)(param_1 + 0x16e);
    *(short *)(param_1 + 0x16e) = (short)((uint)uVar5 - iVar7);
    if ((int)(((uint)uVar5 - iVar7) * 0x10000) < 1) {
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
      DAT_800bf80d = 0xff;
    }
    DAT_800bf81e = 0;
  }
  return 0;
}

