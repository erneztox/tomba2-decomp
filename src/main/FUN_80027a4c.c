
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_80027a4c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  uint *puVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  
  setCopReg(2,0x4000,_DAT_1f800090);
  psVar11 = (short *)((int)_DAT_800bf544 + 0x1a);
  do {
    uVar12 = param_1[1];
    bVar3 = (byte)uVar12 & 0xf8;
    bVar6 = (byte)(uVar12 >> 8);
    bVar4 = bVar6 & 0xf8;
    uVar13 = uVar12 >> 0x10;
    cVar7 = ((byte)uVar12 & 7) * '\b';
    cVar5 = (bVar6 & 7) * '\b';
    if ((uVar13 & 0x2000) == 0) {
      *(byte *)(psVar11 + 1) = bVar3 + 1;
      *(byte *)(psVar11 + -7) = bVar3 + 1;
      cVar7 = bVar3 + cVar7 + '\a';
    }
    else {
      cVar7 = bVar3 + cVar7 + '\x06';
      *(char *)(psVar11 + 1) = cVar7;
      *(char *)(psVar11 + -7) = cVar7;
      cVar7 = bVar3 + 1;
    }
    *(char *)(psVar11 + 5) = cVar7;
    *(char *)(psVar11 + -3) = cVar7;
    if ((uVar13 & 0x1000) == 0) {
      *(byte *)((int)psVar11 + -5) = bVar4 + 1;
      *(byte *)((int)psVar11 + -0xd) = bVar4 + 1;
      cVar7 = bVar4 + cVar5 + '\a';
    }
    else {
      cVar7 = bVar4 + cVar5 + '\a';
      *(char *)((int)psVar11 + -5) = cVar7;
      *(char *)((int)psVar11 + -0xd) = cVar7;
      cVar7 = bVar4 + 1;
    }
    *(char *)((int)psVar11 + 0xb) = cVar7;
    *(char *)((int)psVar11 + 3) = cVar7;
    uVar12 = uVar13 & 0xff;
    *(uint *)(psVar11 + -0xb) =
         (((uVar13 & 1) << 1 | 0x2c) << 8 | uVar12) << 0x10 | uVar12 << 8 | uVar12;
    setCopReg(2,psVar11,_DAT_800bf544[1]);
    copFunction(2,0x780010);
    uVar12 = getCopReg(2,0x16);
    _DAT_800bf544[1] = uVar12;
    psVar11[-2] = (ushort)((uint)param_2 >> 0x10) | (ushort)((uVar13 & 6) << 4);
    psVar11[-6] = (short)param_2 + (short)((uVar13 & 0xf00) >> 2);
    iVar9 = *param_1;
    iVar1 = (char)((uint)iVar9 >> 8) * _DAT_1f800084;
    iVar2 = (char)((uint)iVar9 >> 0x10) * _DAT_1f800088;
    sVar8 = _DAT_1f80008c + (short)((uint)((char)*param_1 * _DAT_1f800084) >> 0x10);
    psVar11[-1] = sVar8;
    psVar11[-9] = sVar8;
    iVar9 = (iVar9 >> 0x18) * _DAT_1f800088;
    sVar8 = _DAT_1f80008c + (short)((uint)iVar1 >> 0x10);
    psVar11[3] = sVar8;
    psVar11[-5] = sVar8;
    sVar8 = _DAT_1f80008e + (short)((uint)iVar2 >> 0x10);
    psVar11[-4] = sVar8;
    psVar11[-8] = sVar8;
    sVar8 = _DAT_1f80008e + (short)((uint)iVar9 >> 0x10);
    psVar11[4] = sVar8;
    *psVar11 = sVar8;
    puVar10 = (uint *)(_DAT_800ed8c8 + _DAT_1f800080 * 4);
    *_DAT_800bf544 = *puVar10 | 0x9000000;
    *puVar10 = (uint)_DAT_800bf544;
    psVar11 = psVar11 + 0x14;
    _DAT_800bf544 = _DAT_800bf544 + 10;
    param_1 = param_1 + 2;
  } while ((uVar13 & 0xc000) == 0);
  if ((uVar13 & 0x4000) != 0) {
    param_1 = (int *)0x0;
  }
  return param_1;
}

