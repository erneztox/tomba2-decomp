// FUN_080110b0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080110b0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  puVar5 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  do {
    while( true ) {
      while( true ) {
        do {
          if (DAT_1f800182 == '\0') {
            return;
          }
          pbVar4 = (byte *)*puVar5;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar5 = puVar5 + 1;
        } while ((*pbVar4 & 1) == 0);
        bVar1 = pbVar4[2];
        if (bVar1 != 0x51) break;
        iVar3 = func_0x00022f04(param_1,pbVar4);
        if (iVar3 != 0) {
          *(char *)(param_1 + 0x2b) = (char)((int)_DAT_1f80009c >> 4);
          func_0x00022d08(param_1,pbVar4,1,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if (bVar1 < 0x52) break;
      if (bVar1 != 0x68) {
        halt_baddata();
      }
      func_0x0010943c(param_1,pbVar4);
    }
    if (bVar1 != 0x40) {
      halt_baddata();
    }
    iVar3 = func_0x0001f40c(param_1,pbVar4,1);
  } while (iVar3 < 0);
  cVar2 = func_0x00077768((int)(((_DAT_1f80009c & 0xffff) + 0x800) * 0x10000) >> 0x10,
                          (int)*(short *)(pbVar4 + 0x60),1);
  pbVar4[0x5f] = cVar2 + 2;
  func_0x0001ff7c(param_1,pbVar4,iVar3,1);
  halt_baddata();
}

