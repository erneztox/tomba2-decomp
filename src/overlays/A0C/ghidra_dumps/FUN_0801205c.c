// FUN_0801205c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801205c(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  
  puVar4 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while( true ) {
    while( true ) {
      while( true ) {
        do {
          if (DAT_1f800182 == '\0') {
            return;
          }
          pbVar3 = (byte *)*puVar4;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar4 = puVar4 + 1;
        } while ((*pbVar3 & 1) == 0);
        bVar1 = pbVar3[2];
        if (bVar1 != 0x58) break;
        iVar2 = func_0x00022f04(param_1,pbVar3);
        if (iVar2 != 0) {
          *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
          func_0x00022d08(param_1,pbVar3,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if (0x58 < bVar1) break;
      if (bVar1 != 0x40) {
        halt_baddata();
      }
      iVar2 = func_0x0001f40c(param_1,pbVar3,1);
      if (-1 < iVar2) {
        func_0x0001ff7c(param_1,pbVar3,iVar2,1);
        halt_baddata();
      }
    }
    if (bVar1 == 0x67) {
      func_0x0010940c(param_1,pbVar3);
      halt_baddata();
    }
    if (bVar1 != 0xd1) break;
    iVar2 = func_0x00022f04(param_1,pbVar3);
    if (iVar2 != 0) {
      pbVar3[0x2b] = 1;
    }
  }
  halt_baddata();
}

