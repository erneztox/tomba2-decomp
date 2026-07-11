// FUN_08013428

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_08013428(void)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  _DAT_1f800080 = (byte *)0x0;
  puVar3 = _DAT_1f800140;
  DAT_1f800182 = DAT_1f800146;
  while (DAT_1f800182 != '\0') {
    pbVar2 = (byte *)*puVar3;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar3 = puVar3 + 1;
    if (((((*pbVar2 & 1) != 0) && (pbVar2[0xc] == 9)) &&
        ((pbVar2[2] == 0x17 || (pbVar2[2] == 0xcd)))) &&
       (iVar1 = func_0x0002300c(&DAT_800e7e80,pbVar2,(int)*(short *)(pbVar2 + 0x80) << 1),
       iVar1 != 0)) {
      DAT_1f800182 = '\0';
      _DAT_1f800080 = pbVar2;
      pbVar2[0x2b] = 2;
    }
  }
  puVar3 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  if (_DAT_1f800080 == (byte *)0x0) {
    while (DAT_1f800182 != '\0') {
      pbVar2 = (byte *)*puVar3;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar3 = puVar3 + 1;
      if ((((*pbVar2 & 1) != 0) && (pbVar2[2] == 0x32)) &&
         (iVar1 = func_0x0002300c(&DAT_800e7e80,pbVar2,(int)*(short *)(pbVar2 + 0x80) << 1),
         iVar1 != 0)) {
        DAT_1f800182 = '\0';
        _DAT_1f800080 = pbVar2;
        pbVar2[0x2b] = 2;
      }
    }
  }
  DAT_1f800182 = 0;
  return _DAT_1f800080;
}

