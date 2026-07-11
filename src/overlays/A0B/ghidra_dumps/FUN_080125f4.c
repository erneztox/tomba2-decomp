// FUN_080125f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080125f4(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while( true ) {
    do {
      if (DAT_1f800182 == '\0') {
        return;
      }
      pbVar2 = (byte *)*puVar3;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar3 = puVar3 + 1;
    } while ((*pbVar2 & 1) == 0);
    bVar1 = pbVar2[2];
    if (bVar1 == 0x55) {
      func_0x0010a93c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 < 0x56) {
      if (bVar1 != 0x4f) {
        halt_baddata();
      }
      func_0x0010a3d0(param_1);
      halt_baddata();
    }
    if (bVar1 != 0x66) break;
    func_0x001093f4(param_1);
  }
  halt_baddata();
}

