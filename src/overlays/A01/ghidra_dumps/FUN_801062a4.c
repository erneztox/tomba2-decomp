// FUN_801062a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801062a4(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  DAT_1f800183 = DAT_1f800144;
  puVar4 = _DAT_1f80013c;
  if (_DAT_1f800150 != 0) {
    while (DAT_1f800183 != '\0') {
      pbVar2 = (byte *)*puVar4;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar4 = puVar4 + 1;
      if (((pbVar2[2] != 0x21) && (bVar1 = *pbVar2, bVar1 != 2)) && ((bVar1 & 8) == 0)) {
        puVar3 = _DAT_1f800148;
        DAT_1f800182 = DAT_1f800150;
        while (DAT_1f800182 != '\0') {
          pbVar2 = (byte *)*puVar3;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar3 = puVar3 + 1;
          if ((*pbVar2 & 1) != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(pbVar2[2]) {
            case 0xc:
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

