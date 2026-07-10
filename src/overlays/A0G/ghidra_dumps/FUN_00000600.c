// FUN_00000600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000600(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  DAT_1f800183 = DAT_1f800144;
  puVar5 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
    while (DAT_1f800183 != '\0') {
      pbVar4 = (byte *)*puVar5;
      DAT_1f800183 = DAT_1f800183 + -1;
      bVar1 = *pbVar4;
      puVar5 = puVar5 + 1;
      if ((bVar1 != 2) && ((bVar1 & 8) == 0)) {
        puVar3 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
        while (DAT_1f800182 != '\0') {
          pbVar2 = (byte *)*puVar3;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar3 = puVar3 + 1;
          if (((*pbVar2 & 1) != 0) && ((bVar1 = pbVar2[2], bVar1 == 0xc || (bVar1 == 0x1f)))) {
            func_0x0002421c(pbVar4);
          }
        }
      }
    }
  }
  return;
}

