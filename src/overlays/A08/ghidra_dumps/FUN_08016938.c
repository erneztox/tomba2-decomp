// FUN_08016938

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08016938(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_1f80014c;
  DAT_1f800182 = DAT_1f800152;
  while (DAT_1f800182 != '\0') {
    pbVar1 = (byte *)*puVar2;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar2 = puVar2 + 1;
    if (((*pbVar1 & 1) != 0) && (pbVar1[2] == 0x58)) {
      func_0x0010d9ac(param_1);
    }
  }
  return _DAT_1f800080;
}

