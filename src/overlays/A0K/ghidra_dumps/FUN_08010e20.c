// FUN_08010e20

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08010e20(undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = _DAT_1f800148;
  DAT_1f800182 = DAT_1f800150;
  while (puVar5 = _DAT_1f80013c, cVar2 = DAT_1f800144, DAT_1f800182 != '\0') {
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = DAT_1f800182 + -1;
    puVar4 = puVar4 + 1;
    if ((*pbVar3 & 1) != 0) {
      bVar1 = pbVar3[2];
      if ((0xd < bVar1) && ((bVar1 < 0x10 || (bVar1 == 0x39)))) {
        func_0x000241fc(param_1);
      }
    }
  }
  while( true ) {
    do {
      if (cVar2 == '\0') {
        DAT_1f800182 = cVar2;
        return;
      }
      pbVar3 = (byte *)*puVar5;
      DAT_1f800182 = cVar2 + -1;
      puVar5 = puVar5 + 1;
      cVar2 = DAT_1f800182;
    } while ((*pbVar3 & 1) == 0);
    if (pbVar3[0xc] == 9) break;
    if (pbVar3[2] == 8) {
      func_0x0002423c(param_1);
      cVar2 = DAT_1f800182;
    }
  }
  func_0x000241fc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

