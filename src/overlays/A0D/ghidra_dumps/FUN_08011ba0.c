// FUN_08011ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_08011ba0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  while (DAT_1f800182 != '\0') {
    pbVar2 = (byte *)*puVar3;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar3 = puVar3 + 1;
    if ((((*pbVar2 & 1) != 0) && (pbVar2[2] == 0x11)) &&
       (iVar1 = func_0x00024bd8(param_1,pbVar2,*(undefined4 *)(pbVar2 + 0xc0)), iVar1 != 0)) {
      pbVar2[0x29] = 1;
      *(undefined1 *)(param_1 + 0x164) = 3;
      DAT_1f800182 = '\0';
      _DAT_1f800080 = pbVar2;
    }
  }
  return _DAT_1f800080;
}

