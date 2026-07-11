// FUN_0801666c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801666c(void)

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
      if (((pbVar3[2] != 0x48) && (bVar1 = *pbVar3, bVar1 != 2)) && ((bVar1 & 8) == 0)) {
        puVar4 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
        while (DAT_1f800182 != '\0') {
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
          if (((*pbVar3 & 1) != 0) && (uVar2 = (uint)pbVar3[2], uVar2 < 0x44)) {
                    /* WARNING: Could not emulate address calculation at 0x08016774 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(uVar2 * 4 + -0x7fef7038))();
            return;
          }
        }
      }
    }
  }
  return;
}

