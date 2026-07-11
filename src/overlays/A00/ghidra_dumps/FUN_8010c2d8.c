// FUN_8010c2d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010c2d8(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
joined_r0x8010c304:
  do {
    if (DAT_1f800183 == '\0') {
      return;
    }
    pbVar2 = (byte *)*puVar3;
    DAT_1f800183 = DAT_1f800183 + -1;
    puVar3 = puVar3 + 1;
  } while ((*pbVar2 & 2) != 0);
  bVar1 = pbVar2[2];
  if (bVar1 == 1) goto LAB_8010c370;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_80115328();
      return;
    }
  }
  else if ((bVar1 != 4) && (bVar1 != 7)) {
    FUN_80115328();
    return;
  }
  goto LAB_8010c380;
LAB_8010c370:
  if (pbVar2[3] == 1) {
LAB_8010c380:
    FUN_80112a60();
  }
  goto joined_r0x8010c304;
}

