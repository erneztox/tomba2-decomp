// FUN_08013744

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013744(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  DAT_1f800183 = DAT_1f800144;
  puVar5 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
    while (DAT_1f800183 != '\0') {
      pbVar3 = (byte *)*puVar5;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar5 = puVar5 + 1;
      if (((pbVar3[2] != 0x2e) && (bVar1 = *pbVar3, bVar1 != 2)) && ((bVar1 & 8) == 0)) {
        puVar4 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
        while (DAT_1f800182 != '\0') {
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
          if (((*pbVar3 & 1) != 0) && (uVar2 = pbVar3[2] - 3, uVar2 < 0x42)) {
                    /* WARNING: Could not emulate address calculation at 0x08013858 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(uVar2 * 4 + -0x7fef7060))();
            return;
          }
        }
      }
    }
  }
  return;
}

