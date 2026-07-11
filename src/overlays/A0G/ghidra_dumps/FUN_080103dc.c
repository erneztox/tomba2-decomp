// FUN_080103dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080103dc(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800154;
  DAT_1f800183 = DAT_1f80015c;
  while( true ) {
    do {
      if (DAT_1f800183 == '\0') {
        return;
      }
      pbVar2 = (byte *)*puVar3;
      DAT_1f800183 = DAT_1f800183 + -1;
      puVar3 = puVar3 + 1;
    } while ((*pbVar2 & 2) != 0);
    bVar1 = pbVar2[2];
    if (bVar1 != 1) break;
    if (pbVar2[3] == 1) {
      DAT_1f800182 = DAT_1f800150;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      DAT_1f800182 = DAT_1f800150;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 4) {
    DAT_1f800182 = DAT_1f800150;
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

