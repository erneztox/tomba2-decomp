// FUN_08015160

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015160(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  
  puVar7 = _DAT_1f800154;
  puVar4 = _DAT_1f80013c;
  DAT_1f800183 = DAT_1f80015c;
  do {
    while( true ) {
      do {
        if (DAT_1f800183 == '\0') {
          _DAT_1f80013c = puVar4;
          return;
        }
        pbVar6 = (byte *)*puVar7;
        DAT_1f800183 = DAT_1f800183 + -1;
        puVar7 = puVar7 + 1;
      } while ((*pbVar6 & 2) != 0);
      bVar1 = pbVar6[2];
      _DAT_1f80013c = puVar4;
      if (bVar1 == 1) break;
      puVar5 = puVar4;
      if (bVar1 < 2) {
        cVar2 = DAT_1f800144;
        if (bVar1 != 0) {
          halt_baddata();
        }
      }
      else {
        cVar2 = DAT_1f800144;
        if (bVar1 != 4) {
          halt_baddata();
        }
      }
      while (DAT_1f800182 = cVar2, puVar4 = _DAT_1f80013c, DAT_1f800182 != '\0') {
        pbVar3 = (byte *)*puVar5;
        DAT_1f800182 = DAT_1f800182 + -1;
        puVar5 = puVar5 + 1;
        cVar2 = DAT_1f800182;
        if (((*pbVar3 & 1) != 0) && (pbVar3[2] == 8)) {
          func_0x0002423c(pbVar6);
          cVar2 = DAT_1f800182;
        }
      }
    }
  } while ((pbVar6[3] != 1) || (DAT_1f800182 = DAT_1f800144, DAT_1f800144 == '\0'));
  do {
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
    if (((*pbVar3 & 1) != 0) && (pbVar3[2] == 8)) {
      func_0x0002423c(pbVar6);
    }
  } while (DAT_1f800182 != '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

