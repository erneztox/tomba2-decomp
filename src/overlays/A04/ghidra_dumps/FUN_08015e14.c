// FUN_08015e14

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015e14(void)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  DAT_1f800183 = DAT_1f800144;
  puVar7 = _DAT_1f80013c;
  if (1 < DAT_1f800144) {
    while (DAT_1f800183 = DAT_1f800183 - 1, DAT_1f800183 != 0) {
      pcVar5 = (char *)*puVar7;
      cVar1 = *pcVar5;
      puVar7 = puVar7 + 1;
      if ((cVar1 != '\x02') && (puVar6 = puVar7, bVar2 = DAT_1f800183, cVar1 != '\a')) {
        while (DAT_1f800182 = bVar2, bVar2 != 0) {
          pcVar4 = (char *)*puVar6;
          DAT_1f800182 = bVar2 - 1;
          puVar6 = puVar6 + 1;
          bVar2 = DAT_1f800182;
          if (((*pcVar4 != '\x02') && (*pcVar4 != '\a')) &&
             (uVar3 = (byte)pcVar5[2] - 8, uVar3 < 0x29)) {
                    /* WARNING: Could not emulate address calculation at 0x08015f08 */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(uVar3 * 4 + -0x7fef6dc0))();
            return;
          }
        }
      }
    }
  }
  return;
}

