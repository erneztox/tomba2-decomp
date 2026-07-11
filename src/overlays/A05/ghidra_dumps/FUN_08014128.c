// FUN_08014128

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08014128(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  DAT_1f800183 = DAT_80140e38;
  puVar6 = _DAT_80140e3c;
  if (1 < DAT_80140e38) {
    while (DAT_1f800183 = DAT_1f800183 - 1, DAT_1f800183 != 0) {
      pbVar4 = (byte *)*puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar6;
      bVar1 = DAT_1f800183;
      if ((*pbVar4 & 1) != 0) {
        while (DAT_1f800182 = bVar1, bVar1 != 0) {
          pbVar3 = (byte *)*puVar5;
          DAT_1f800182 = bVar1 - 1;
          puVar5 = puVar5 + 1;
          bVar1 = DAT_1f800182;
          if (((*pbVar3 & 1) != 0) && (uVar2 = pbVar4[2] - 8, uVar2 < 0x29)) {
                    /* WARNING: Could not emulate address calculation at 0x08014210 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(uVar2 * 4 + -0x7fef6f58))();
            return;
          }
        }
      }
    }
  }
  return;
}

