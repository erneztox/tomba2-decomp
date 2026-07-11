// FUN_80107278

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_80107278(int param_1)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  puVar4 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  do {
    do {
      while( true ) {
        do {
          if (DAT_1f800182 == '\0') {
            return _DAT_1f800080;
          }
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
        } while ((*pbVar3 & 1) == 0);
        if (pbVar3[2] != 0x16) break;
        if ((pbVar3[0xbf] != 0) &&
           (iVar2 = func_0x80024bd8(param_1,pbVar3,*(undefined4 *)(pbVar3 + 0xc0)), iVar2 != 0)) {
          *(undefined2 *)(param_1 + 0x156) = 0x14;
          sVar1 = *(short *)(pbVar3 + 0x80);
          *(undefined1 *)(param_1 + 0x164) = 2;
          DAT_1f800182 = '\0';
          _DAT_1f800080 = pbVar3;
          *(short *)(param_1 + 0x152) = sVar1 + *(short *)(param_1 + 0x80) + -0x28;
        }
      }
    } while (((pbVar3[2] != 0x17) || (pbVar3[0x47] == 2)) ||
            (iVar2 = func_0x80024bd8(param_1,pbVar3,*(undefined4 *)(pbVar3 + 0xc0)), iVar2 == 0));
    sVar1 = *(short *)(pbVar3 + 0x80);
    pbVar3[0x29] = 1;
    *(undefined1 *)(param_1 + 0x164) = 1;
    *(undefined1 *)(param_1 + 0x15c) = 0;
    DAT_1f800182 = '\0';
    _DAT_1f800080 = pbVar3;
    *(short *)(param_1 + 0x152) = sVar1 + *(short *)(param_1 + 0x80) + -0xc;
  } while (pbVar3[3] < 0xb);
  DAT_1f800137 = 2;
  *(undefined1 *)(param_1 + 4) = 4;
  _DAT_1f800166 = 0;
  _DAT_1f800190 = 0;
  pbVar3 = (byte *)FUN_80110380();
  return pbVar3;
}

