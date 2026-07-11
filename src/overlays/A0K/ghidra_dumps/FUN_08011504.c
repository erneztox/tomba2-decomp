// FUN_08011504

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08011504(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
  while (DAT_1f800183 != '\0') {
    pbVar2 = (byte *)*puVar3;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar3 = puVar3 + 1;
    if (((*pbVar2 & 2) == 0) && ((bVar1 = pbVar2[2], bVar1 == 0 || ((bVar1 < 6 && (3 < bVar1)))))) {
      func_0x00109dbc();
    }
  }
  return;
}

