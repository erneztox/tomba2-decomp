// FUN_80107d1c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80107d1c(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
joined_r0x80107d48:
  do {
    if (DAT_1f800183 == '\0') {
      return;
    }
    pbVar2 = (byte *)*puVar3;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar3 = puVar3 + 1;
  } while ((*pbVar2 & 2) != 0);
  bVar1 = pbVar2[2];
  if (bVar1 == 1) goto LAB_80107dac;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_80110d64();
      return;
    }
  }
  else if (bVar1 != 4) {
    FUN_80110d64();
    return;
  }
  goto LAB_80107dbc;
LAB_80107dac:
  if (pbVar2[3] == 1) {
LAB_80107dbc:
    FUN_8010efbc();
  }
  goto joined_r0x80107d48;
}

