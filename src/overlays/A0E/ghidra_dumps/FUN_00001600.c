// FUN_00001600

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001600(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  
  puVar3 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
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
    if (bVar1 == 0x12) break;
    if (bVar1 != 0x48) {
      halt_baddata();
    }
    func_0x00109870(param_1);
  }
  func_0x0002311c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

