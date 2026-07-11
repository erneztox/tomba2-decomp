// FUN_8010ac0c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8010ac0c(void)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *unaff_s0;
  byte *unaff_s3;
  int unaff_s5;
  undefined4 *unaff_s6;
  undefined1 unaff_s7;
  
  iVar4 = func_0x80022f04();
  puVar1 = _DAT_1f800148;
  cVar3 = DAT_1f800182;
  if (iVar4 != 0) {
    *unaff_s0 = unaff_s7;
    unaff_s0[4] = unaff_s7;
    unaff_s0[5] = 0;
    *(undefined1 *)(unaff_s5 + 0x182) = 0;
    FUN_80113c08();
    return;
  }
  do {
    while (cVar2 = DAT_1f800150, _DAT_1f800148 = puVar1, DAT_1f800150 = cVar2, cVar3 != '\0') {
      pbVar5 = (byte *)*unaff_s6;
      *(char *)(unaff_s5 + 0x182) = *(char *)(unaff_s5 + 0x182) + -1;
      unaff_s6 = unaff_s6 + 1;
      puVar1 = _DAT_1f800148;
      cVar3 = DAT_1f800182;
      if ((*pbVar5 & 1) != 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(pbVar5[2]) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    do {
      unaff_s3 = *(byte **)(unaff_s3 + 0x24);
      if (unaff_s3 == (byte *)0x0) {
        return;
      }
    } while (((*unaff_s3 & 1) == 0) || (unaff_s3[0x2b] != 0));
    *(char *)(unaff_s5 + 0x182) = cVar2;
    unaff_s6 = puVar1;
    puVar1 = _DAT_1f800148;
    cVar3 = cVar2;
  } while( true );
}

