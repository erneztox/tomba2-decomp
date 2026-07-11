// FUN_0801436c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801436c(void)

{
  byte bVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  DAT_1f800183 = DAT_1f800144;
  puVar5 = _DAT_1f80013c;
  if (1 < DAT_1f800144) {
    while (DAT_1f800183 = DAT_1f800183 - 1, DAT_1f800183 != 0) {
      pcVar4 = (char *)*puVar5;
      puVar5 = puVar5 + 1;
      if ((*pcVar4 != '\x02') && (puVar3 = puVar5, bVar1 = DAT_1f800183, *pcVar4 != '\a')) {
        while (DAT_1f800182 = bVar1, bVar1 != 0) {
          pcVar2 = (char *)*puVar3;
          DAT_1f800182 = bVar1 - 1;
          puVar3 = puVar3 + 1;
          bVar1 = DAT_1f800182;
          if ((*pcVar2 != '\x02') && (*pcVar2 != '\a')) {
            if (pcVar4[2] == '\b') {
              if (pcVar2[2] == '-') {
                func_0x00023a04(pcVar2,pcVar4,2);
                bVar1 = DAT_1f800182;
              }
            }
            else if ((pcVar4[2] == '-') && (pcVar2[2] == '\b')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
          }
        }
      }
    }
  }
  return;
}

