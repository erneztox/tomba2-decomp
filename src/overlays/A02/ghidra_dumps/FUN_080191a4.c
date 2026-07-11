// FUN_080191a4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080191a4(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = _DAT_1f800148;
  cVar1 = DAT_1f800150;
  do {
    puVar5 = _DAT_1f80013c;
    DAT_1f800182 = DAT_1f800144;
    if (cVar1 == '\0') {
      while( true ) {
        do {
          if (DAT_1f800182 == '\0') {
            return;
          }
          pbVar3 = (byte *)*puVar5;
          DAT_1f800182 = DAT_1f800182 + -1;
          puVar5 = puVar5 + 1;
        } while ((*pbVar3 & 1) == 0);
        if (pbVar3[0xc] == 9) break;
        if (pbVar3[2] == 8) {
          func_0x0002423c(param_1);
        }
      }
      func_0x000241fc(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar3 = (byte *)*puVar4;
    DAT_1f800182 = cVar1 + -1;
    puVar4 = puVar4 + 1;
    cVar1 = DAT_1f800182;
  } while (((*pbVar3 & 1) == 0) || (uVar2 = pbVar3[2] - 0xe, 0x19 < uVar2));
                    /* WARNING: Could not emulate address calculation at 0x0801922c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar2 * 4 + -0x7fef6cdc))();
  return;
}

