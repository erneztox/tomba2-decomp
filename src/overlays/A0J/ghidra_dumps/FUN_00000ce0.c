// FUN_00000ce0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00000ce0(undefined4 param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  
  puVar2 = _DAT_1f80013c;
  DAT_1f800182 = DAT_1f800144;
  while( true ) {
    do {
      if (DAT_1f800182 == '\0') {
        return;
      }
      pbVar1 = (byte *)*puVar2;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar2 = puVar2 + 1;
    } while ((*pbVar1 & 1) == 0);
    if (pbVar1[0xc] == 9) break;
    if (pbVar1[2] == 8) {
      func_0x000205cc(param_1);
    }
  }
  func_0x001090c4(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

