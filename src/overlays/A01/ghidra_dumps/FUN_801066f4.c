// FUN_801066f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_801066f4(void)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while (DAT_1f800182 != '\0') {
    pbVar1 = (byte *)*puVar2;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar2 = puVar2 + 1;
    if ((*pbVar1 & 1) != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(pbVar1[2]) {
      case 0xc:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  return;
}

