// FUN_80109f78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80109f78(void)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  DAT_1f800183 = DAT_1f800144;
  puVar6 = _DAT_1f80013c;
  if (1 < DAT_1f800144) {
    while (DAT_1f800183 = DAT_1f800183 - 1, DAT_1f800183 != 0) {
      pcVar4 = (char *)*puVar6;
      puVar6 = puVar6 + 1;
      if ((*pcVar4 != '\x02') && (puVar5 = puVar6, bVar2 = DAT_1f800183, *pcVar4 != '\a')) {
joined_r0x8010a020:
        DAT_1f800182 = bVar2;
        if (bVar2 != 0) {
          pcVar3 = (char *)*puVar5;
          DAT_1f800182 = bVar2 - 1;
          puVar5 = puVar5 + 1;
          bVar2 = DAT_1f800182;
          if ((*pcVar3 != '\x02') && (*pcVar3 != '\a')) {
            bVar1 = pcVar4[2];
            if (bVar1 != 7) {
              if (7 < bVar1) {
                if (bVar1 != 8) {
                  FUN_80113068();
                  return;
                }
                if ((pcVar3[2] == '\x03') || (pcVar3[2] == '\a')) {
                  func_0x80023a04(pcVar3,pcVar4,0);
                  bVar2 = DAT_1f800182;
                }
                goto joined_r0x8010a020;
              }
              if (bVar1 != 3) {
                FUN_80113068();
                return;
              }
            }
            if (pcVar3[2] == '\b') {
              FUN_8011305c(pcVar4);
              return;
            }
          }
          goto joined_r0x8010a020;
        }
      }
    }
  }
  return;
}

