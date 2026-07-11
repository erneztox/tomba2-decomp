// FUN_080126e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080126e4(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while (DAT_1f800182 != '\0') {
    pbVar1 = (byte *)*puVar2;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar2 = puVar2 + 1;
    if (((*pbVar1 & 1) != 0) && (pbVar1[2] == 8)) {
      func_0x00109630(param_1,pbVar1,*(undefined4 *)(pbVar1 + 0xc0));
    }
  }
  return;
}

